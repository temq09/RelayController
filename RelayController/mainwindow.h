#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QMap>
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

private:
    Ui::MainWindow *ui;
    server _socketToRelayController;
    bool _connectionState;
    QMap<QString, int> onOfButtonMap;

    void initializeSignalsFromOnOfBtn();
    void onOfButtonMapInitialize(int countButton);

private slots:
    void slot_connectionToHost();
    void slot_OnOfbtnClick(QString buttonName);

};

#endif // MAINWINDOW_H
