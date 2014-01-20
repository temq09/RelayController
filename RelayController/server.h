#ifndef SERVER_H
#define SERVER_H

#include <QUdpSocket>
#include <QDebug>

class server : public QObject
{
    Q_OBJECT
public:
    server();
    bool connectToHost(QString ipAddress, quint16 port);

public slots:

private:
    bool _connectionState;
    QString _ipAddress;
    quint16 _port;
    QUdpSocket _clientSocket;
    QUdpSocket _serverSocket;

private slots:
    void slot_connectionStateChange();

signals:
    void signal_connectionStateChange(bool state);

};

#endif // SERVER_H
