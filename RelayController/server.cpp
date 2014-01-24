#include "server.h"

server::server()
{
    //variable setting
    _connectionState = false;
    _relayCount = 16;
    initializeRelayCOntrollerState();

    //signal and slots setting
    connect(&_clientSocket, SIGNAL(connected()) , this, SLOT(slot_connectionStateChange()));
    connect(&_clientSocket, SIGNAL(readyRead()), this, SLOT(readNewDataFromClientSocket()));

}

void server::initializeRelayCOntrollerState()
{
    for(int i = 0; i<_relayCount; i++)
    {
        RelayControllerState relay;
        relay.numberRelay = i+1;
        relay.stateRelay = false;
        arrayOfRelay.append(relay);
    }
}

void server::connectToHost(QString ipAddress, quint16 port)
{
    if(ipAddress.isNull() || port == NULL)
    {
        qDebug() << "ip адрес или порт имеют недопустимое значение.";
    }

    _clientSocket.connectToHost(ipAddress, port);
}

void server::slot_connectionStateChange()
{
    _connectionState = true;
    emit signal_connectionStateChange(_connectionState);
}

void server::changeStateRelay(int relayNumber)
{
    /*
     * В этом методе мы по номеру кнопки определяем ее состояние в текущий момент
     * и отправляем соответствующий код для выключения или включения реле соответствующего номеру кнопки.
     * 17 - код выключения реле
     * 18 - код включения реле
     * 16 - код, после получения которого контроллер начинает отсылать пакеты данных.
     */

    qDebug()<<"Определяем включенно или выключенно реле";
    int OnOfCode = 0;
    int param2 = 0;
    //int relayNumberCorrect = relayNumber - 1; // Т.к. в векторе индексация с нуля, то надо уменьшить на единицу чтобы узнать состояние нужного реле

    if(arrayOfRelay[relayNumber-1].stateRelay)
    {
        OnOfCode = 17;
        qDebug()<<"Реле включенно, выключаем";
    }
    else
    {
        OnOfCode = 18;
        qDebug() << "Реле выключенно, включаем";
    }

    controllerStateChange(OnOfCode, param2, arrayOfRelay[relayNumber-1].numberRelay);
}

void server::controllerStateChange(int onOfCode, int param2, int numberRelay)
{
    qDebug()<<"ФОрмируем массив для отправки";
    if(_clientSocket.isOpen())
    {
        int i = numberRelay + param2 + onOfCode + 85 + 1;
        QByteArray byteArray;
        byteArray.resize(8);
        byteArray[0] = (quint8)85;
        byteArray[1] = (quint8)1;
        byteArray[2] = (quint8)onOfCode;
        byteArray[3] = (quint8)0;
        byteArray[4] = (quint8)0;
        byteArray[5] = (quint8)param2;
        byteArray[6] = (quint8)numberRelay;
        byteArray[7] = (quint8)i;

        try
        {
            _clientSocket.write(byteArray);
            _clientSocket.flush();
            qDebug() << "Данные отправлены";
            if(onOfCode != 16)
            {
                (onOfCode == 18) ? arrayOfRelay[numberRelay-1].stateRelay  = true : arrayOfRelay[numberRelay-1].stateRelay = false;
                emit signal_relayStateChange(arrayOfRelay[numberRelay-1].stateRelay, arrayOfRelay[numberRelay-1].numberRelay);
            }
        }
        catch(QException ex)
        {
            qDebug() << "Ошибка при передаче данных";
        }
    }
}

int server::getCountRelay()
{
    return _relayCount;
}

void server::readNewDataFromClientSocket()
{
    if(_clientSocket.isOpen())
    {
        this->controllerStateChange(16,0,0);
        try
        {
            QByteArray newData;
            newData.resize(8);
            if(_clientSocket.bytesAvailable() > 8)
                qDebug() << "Мало данных";
            newData = _clientSocket.readAll();
            QString str = byteConverter(newData);
            qDebug() << str;
            qDebug() << "Информация считана";
            this->controllerStateChange(16,0,0);
        }
        catch(QException ex)
        {
            qDebug() << "Ошибка при чтении информации";
        }

    }
}


//метод конвертирования информации полученной от контроллера в строку.
QString server::byteConverter(QByteArray byteArray)
{
    QByteArray hexArray;
    hexArray.resize(16);
    //hexArray = { 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 65, 66, 67, 68, 69, 70 };
    hexArray[0] = 48;
    hexArray[1] = 49;
    hexArray[2] = 50;
    hexArray[3] = 51;
    hexArray[4] = 52;
    hexArray[5] = 53;
    hexArray[6] = 54;
    hexArray[7] = 55;
    hexArray[8] = 56;
    hexArray[9] = 57;
    hexArray[10] = 65;
    hexArray[11] = 66;
    hexArray[12] = 67;
    hexArray[13] = 68;
    hexArray[14] = 69;
    hexArray[15] = 70;
    QByteArray arrayOfChar;
    arrayOfChar.resize(2 * byteArray.length());
    int i = 0;
    for(int j = 0;j<byteArray.length();j++)
    {
        int k = 0xFF & byteArray[j];
        int m = i + 1;
        arrayOfChar[i] = hexArray[(k >> 4)];
        i = m + 1;
        arrayOfChar[m] = hexArray[(k&0xF)];
    }
    return QString(arrayOfChar);
}
