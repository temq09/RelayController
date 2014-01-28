#ifndef SERVER_H
#define SERVER_H

#include <QUdpSocket>
#include <QDebug>
#include <QVector>
#include <QIODevice>
#include <QException>
#include <QTcpSocket>

class server : public QObject
{
    Q_OBJECT
public:
    server();
    void connectToHost(QString ipAddress, quint16 port);
    void changeStateRelay(int relayNumber);  //метод вызывается внешними приложениями
    int getCountRelay();


public slots:
    void readNewDataFromClientSocket();
private:
    bool _connectionState;
    QString _ipAddress;
    quint16 _port;
    QTcpSocket _clientSocket;
    QUdpSocket _serverSocket;
    int _relayCount;
    struct RelayControllerState
    {
        int numberRelay; // номер реле. Начинается с 1 до 16.
        bool stateRelay; // состояние. по умолчанию выключенно(false).
    };
    QVector<RelayControllerState> arrayOfRelay;

    void initializeRelayCOntrollerState();
    void controllerStateChange(int onOfCode, int param2, int numberRelay);
    void getRelayStateFromCOntroller();
    QString byteConverter(QByteArray byteArray);
    QString reverseFrame(QString binaryString);


private slots:
    void slot_connectionStateChange();
    void slot_handleFrame(QString str);

signals:
    void signal_connectionStateChange(bool state);
    //void signal_relayStateChange(bool state, int numRelay);
    void signal_handleFrame(QString str);
    void signal_sendFrameToMainWindow(QString strToSend);

};

#endif // SERVER_H
