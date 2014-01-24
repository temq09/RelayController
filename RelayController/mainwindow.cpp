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
    connect(&_socketToRelayController, SIGNAL(signal_relayStateChange(bool,int)), this, SLOT(slot_relayStateChange(bool,int)));
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(slot_testMethod()));
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

void MainWindow::slot_relayStateChange(bool state, int numberRelay)
{
    QString relayOn = "Включенно";
    QString relayOff = "Выключенно";
    QString textToLabel;
    (state) ? textToLabel = relayOn : textToLabel = relayOff;

    switch(numberRelay)
    {
    case 1: ui->lb_relay1->setText(textToLabel);
        break;
    case 2: ui->lb_relay2->setText(textToLabel);
        break;
    case 3 : ui->lb_relay3->setText(textToLabel);
        break;
    case 4 : ui->lb_relay4->setText(textToLabel);
        break;
    case 5 : ui->lb_relay5->setText(textToLabel);
        break;
    case 6 : ui->lb_relay6->setText(textToLabel);
        break;
    case 7 : ui->lb_relay7->setText(textToLabel);
        break;
    case 8 : ui->lb_relay8->setText(textToLabel);
        break;
    case 9 : ui->lb_relay9->setText(textToLabel);
        break;
    case 10 : ui->lb_relay10->setText(textToLabel);
        break;
    case 11 : ui->lb_relay11->setText(textToLabel);
        break;
    case 12 : ui->lb_relay12->setText(textToLabel);
        break;
    case 13 : ui->lb_relay13->setText(textToLabel);
        break;
    case 14 : ui->lb_relay14->setText(textToLabel);
        break;
    case 15 : ui->lb_relay15->setText(textToLabel);
        break;
    case 16 : ui->lb_relay16->setText(textToLabel);
        break;
    }

}

void MainWindow::slot_testMethod()
{
    _socketToRelayController.readNewDataFromClientSocket();
}
