#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
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

private slots:
    void slot_connectionToHost();
};

#endif // MAINWINDOW_H
