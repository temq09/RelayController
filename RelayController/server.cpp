#include "server.h"

server::server()
{
    //variable setting
    _connectionState = false;
    _relayCount = 16;
    initializeRelayCOntrollerState();

    //signal and slots setting
    connect(&_clientSocket, SIGNAL(connected()) , this, SLOT(slot_connectionStateChange()));

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
            (onOfCode == 18) ? arrayOfRelay[numberRelay-1].stateRelay  = true : arrayOfRelay[numberRelay-1].stateRelay = false;
            emit signal_relayStateChange(arrayOfRelay[numberRelay-1].stateRelay, arrayOfRelay[numberRelay-1].numberRelay);
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
