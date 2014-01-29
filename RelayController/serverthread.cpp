#include "serverthread.h"

serverThread::serverThread(QObject *parent) :
    QThread(parent)
{
}

serverThread::serverThread(int socketDescriptor, QObject *parent)
    : QThread(parent),
      _socketDescriptor(socketDescriptor)
{

}

void serverThread::run()
{
    qDebug() << "new connection with descriptor" << _socketDescriptor << " connected";
    socket = new QTcpSocket;

    if(!tcpSocket.setSocketDescriptor(_socketDescriptor))
    {
        emit signal_error(tcpSocket.error());
        return;
    }

    connect(socket, SIGNAL(readyRead()), this, SLOT(slot_readyRead()));
    connect(socket, SIGNAL(disconnected()), this, SLOT(slot_disconnect()));
    exec();
}

void serverThread::slot_readyRead()
{
    QByteArray data = socket->readAll();
    //дальше передаем данные основному потоку;
}

void serverThread::slot_disconnect()
{
    //высылаем сигнла основному потоку с  ид дескриптора


    socket->deleteLater();
    //exit(0);
}
