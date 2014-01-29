#ifndef SERVERTHREAD_H
#define SERVERTHREAD_H

#include <QThread>
#include <QTcpSocket>

class serverThread : public QThread
{
    Q_OBJECT
public:
    explicit serverThread(QObject *parent = 0);
    serverThread(int socketDescriptor, QObject* parent);

    void run();

public slots:
    void slot_readyRead();
    void slot_disconnect();

private:
    int _socketDescriptor;
    QTcpSocket *socket;

signals:
    void signal_error(QTcpSocket::SocketError socketError);
};

#endif // SERVERTHREAD_H
