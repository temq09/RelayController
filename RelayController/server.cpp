#include "server.h"

server::server()
{
    _connectionState = false;
    connect(&_clientSocket, SIGNAL(connected()) , this, SLOT(slot_connectionStateChange()));
}

bool server::connectToHost(QString ipAddress, quint16 port)
{
    if(ipAddress.isNull() || port == NULL)
    {
        qDebug() << "ip адрес или порт имеют недопустимое значение.";
        return false;
    }

    _clientSocket.connectToHost(ipAddress, port);
}

void server::slot_connectionStateChange()
{
    _connectionState = true;
    emit signal_connectionStateChange(_connectionState);
}
