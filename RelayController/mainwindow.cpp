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
    initializeSignalsFromOnOfBtn();
    connect(&_socketToRelayController, SIGNAL(signal_connectionStateChange(bool)), this, SLOT(slot_connectionStateChange(bool)));
    connect(ui->pb_connect, SIGNAL(clicked()), this, SLOT(slot_connectionToHost()));

    //other settings
    onOfButtonMapInitialize(_socketToRelayController.getCountRelay());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onOfButtonMapInitialize(int countButton)
{
    for (int i =0; i <countButton; i++)
    {
        onOfButtonMap.insert(QString("%1%2").arg("pb_btn").arg(i+1), i+1);
    }
}

void MainWindow::initializeSignalsFromOnOfBtn()
{
    connect(ui->pb_btn1, SIGNAL(clickByButton(QString)), this, SLOT(slot_OnOfbtnClick(QString)));
    connect(ui->pb_btn2, SIGNAL(clickByButton(QString)), this, SLOT(slot_OnOfbtnClick(QString)));
    connect(ui->pb_btn3, SIGNAL(clickByButton(QString)), this, SLOT(slot_OnOfbtnClick(QString)));
    connect(ui->pb_btn4, SIGNAL(clickByButton(QString)), this, SLOT(slot_OnOfbtnClick(QString)));
    connect(ui->pb_btn5, SIGNAL(clickByButton(QString)), this, SLOT(slot_OnOfbtnClick(QString)));
    connect(ui->pb_btn6, SIGNAL(clickByButton(QString)), this, SLOT(slot_OnOfbtnClick(QString)));
    connect(ui->pb_btn7, SIGNAL(clickByButton(QString)), this, SLOT(slot_OnOfbtnClick(QString)));
    connect(ui->pb_btn8, SIGNAL(clickByButton(QString)), this, SLOT(slot_OnOfbtnClick(QString)));
    connect(ui->pb_btn9, SIGNAL(clickByButton(QString)), this, SLOT(slot_OnOfbtnClick(QString)));
    connect(ui->pb_btn10, SIGNAL(clickByButton(QString)), this, SLOT(slot_OnOfbtnClick(QString)));
    connect(ui->pb_btn11, SIGNAL(clickByButton(QString)), this, SLOT(slot_OnOfbtnClick(QString)));
    connect(ui->pb_btn12, SIGNAL(clickByButton(QString)), this, SLOT(slot_OnOfbtnClick(QString)));
    connect(ui->pb_btn13, SIGNAL(clickByButton(QString)), this, SLOT(slot_OnOfbtnClick(QString)));
    connect(ui->pb_btn14, SIGNAL(clickByButton(QString)), this, SLOT(slot_OnOfbtnClick(QString)));
    connect(ui->pb_btn15, SIGNAL(clickByButton(QString)), this, SLOT(slot_OnOfbtnClick(QString)));
    connect(ui->pb_btn16, SIGNAL(clickByButton(QString)), this, SLOT(slot_OnOfbtnClick(QString)));
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

void MainWindow::slot_OnOfbtnClick(QString buttonName)
{
    int numberOfButton = -1;

    numberOfButton = onOfButtonMap.value(buttonName);
    qDebug() << numberOfButton;
    if(-1 == numberOfButton)
    {
        qDebug() << "Ошибка в определении номера нажатой кнопки.";
        return;
    }
    _socketToRelayController.changeStateRelay(numberOfButton);
}
