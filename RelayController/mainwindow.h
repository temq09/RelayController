#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QMap>
#include <QLabel>
#include "server.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void slot_connectionStateChange(bool state);
    void slot_relayStateChange(QString str);
    void slot_addClientIpAddress(QString ipAddress);

private:
    Ui::MainWindow *ui;
    server _socketToRelayController;
    bool _connectionState;
    QMap<QString, int> onOfButtonMap;
    QVector<QLabel*> arrayOfLabel;

    void initializeSignalsFromOnOfBtn();
    void initializeArrayOfLabel();
    void onOfButtonMapInitialize(int countButton);
    void changeLabelState(int numberLabel, QString message);

private slots:
    void slot_connectionToHost();
    void slot_OnOfbtnClick(QString buttonName);
    void slot_startServer();

};

#endif // MAINWINDOW_H
