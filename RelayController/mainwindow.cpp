#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //variable setting
    _connectionState = false;

    //signal and slots setting
    connect(&_socketToRelayController, SIGNAL(signal_connectionStateChange(bool)), this, SLOT(slot_connectionStateChange(bool)));
    connect(ui->pb_connect, SIGNAL(clicked()), this, SLOT(slot_connectionToHost()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::slot_connectionToHost()
{
    QString ipAddress = ui->le_ipAddress->text();
    quint16 port = (quint16)ui->le_port->text().toInt();
    if(ipAddress.isEmpty() || port == NULL)
    {
        qDebug() << "отсутствует ip адрес или порт.";
        return;
    }
    _socketToRelayController.connectToHost(ipAddress, port);
}

void MainWindow::slot_connectionStateChange(bool state)
{
    if(state)
    {
        qDebug()<<"Соединение с контроллером установленно.";
        _connectionState = true;
        ui->lb_state->setText("подключено");
    }
    else if(!state)
    {
        qDebug()<<"Соединеие не установленно или разорванно.";
        _connectionState = false;
        ui->lb_state->setText("НЕ подключено");
    }
}
