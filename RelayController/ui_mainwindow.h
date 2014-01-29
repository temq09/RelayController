/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <modernpushbutton.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *lb_ipAddress;
    QLineEdit *le_ipAddress;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QLineEdit *le_port;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pb_connect;
    QVBoxLayout *verticalLayout_5;
    QLabel *label;
    QLabel *lb_state;
    QPushButton *pb_startServer;
    QPushButton *pb_removeAll;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_6;
    QFormLayout *formLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *lb_relay1;
    modernPushButton *pb_btn1;
    QHBoxLayout *horizontalLayout_7;
    QLabel *lb_relay9;
    modernPushButton *pb_btn9;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lb_relay2;
    modernPushButton *pb_btn2;
    QHBoxLayout *horizontalLayout_10;
    QLabel *lb_relay10;
    modernPushButton *pb_btn10;
    QHBoxLayout *horizontalLayout_9;
    QLabel *lb_relay3;
    modernPushButton *pb_btn3;
    QHBoxLayout *horizontalLayout_11;
    QLabel *lb_relay11;
    modernPushButton *pb_btn11;
    QHBoxLayout *horizontalLayout_12;
    QLabel *lb_relay4;
    modernPushButton *pb_btn4;
    QHBoxLayout *horizontalLayout_13;
    QLabel *lb_relay12;
    modernPushButton *pb_btn12;
    QHBoxLayout *horizontalLayout_14;
    QLabel *lb_relay5;
    modernPushButton *pb_btn5;
    QHBoxLayout *horizontalLayout_15;
    QLabel *lb_relay13;
    modernPushButton *pb_btn13;
    QHBoxLayout *horizontalLayout_16;
    QLabel *lb_relay6;
    modernPushButton *pb_btn6;
    QHBoxLayout *horizontalLayout_17;
    QLabel *lb_relay14;
    modernPushButton *pb_btn14;
    QHBoxLayout *horizontalLayout_18;
    QLabel *lb_relay7;
    modernPushButton *pb_btn7;
    QHBoxLayout *horizontalLayout_19;
    QLabel *lb_relay15;
    modernPushButton *pb_btn15;
    QHBoxLayout *horizontalLayout_20;
    QLabel *lb_relay8;
    modernPushButton *pb_btn8;
    QHBoxLayout *horizontalLayout_21;
    QLabel *lb_relay16;
    modernPushButton *pb_btn16;
    QSpacerItem *horizontalSpacer_2;
    QListView *lv_clientIpAddress;
    QSpacerItem *verticalSpacer;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(603, 456);
        MainWindow->setMinimumSize(QSize(603, 456));
        MainWindow->setMaximumSize(QSize(603, 456));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lb_ipAddress = new QLabel(centralWidget);
        lb_ipAddress->setObjectName(QStringLiteral("lb_ipAddress"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lb_ipAddress->sizePolicy().hasHeightForWidth());
        lb_ipAddress->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(lb_ipAddress);

        le_ipAddress = new QLineEdit(centralWidget);
        le_ipAddress->setObjectName(QStringLiteral("le_ipAddress"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(le_ipAddress->sizePolicy().hasHeightForWidth());
        le_ipAddress->setSizePolicy(sizePolicy1);
        le_ipAddress->setMaximumSize(QSize(200, 16777215));

        verticalLayout_2->addWidget(le_ipAddress);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(label_2);

        le_port = new QLineEdit(centralWidget);
        le_port->setObjectName(QStringLiteral("le_port"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(le_port->sizePolicy().hasHeightForWidth());
        le_port->setSizePolicy(sizePolicy2);
        le_port->setMaximumSize(QSize(50, 16777215));

        verticalLayout_3->addWidget(le_port);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Ignored);

        verticalLayout_4->addItem(verticalSpacer_2);

        pb_connect = new QPushButton(centralWidget);
        pb_connect->setObjectName(QStringLiteral("pb_connect"));

        verticalLayout_4->addWidget(pb_connect);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        verticalLayout_5->addWidget(label);

        lb_state = new QLabel(centralWidget);
        lb_state->setObjectName(QStringLiteral("lb_state"));
        sizePolicy.setHeightForWidth(lb_state->sizePolicy().hasHeightForWidth());
        lb_state->setSizePolicy(sizePolicy);

        verticalLayout_5->addWidget(lb_state);


        horizontalLayout->addLayout(verticalLayout_5);

        pb_startServer = new QPushButton(centralWidget);
        pb_startServer->setObjectName(QStringLiteral("pb_startServer"));

        horizontalLayout->addWidget(pb_startServer);

        pb_removeAll = new QPushButton(centralWidget);
        pb_removeAll->setObjectName(QStringLiteral("pb_removeAll"));

        horizontalLayout->addWidget(pb_removeAll);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setSizeConstraint(QLayout::SetMinimumSize);
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout->setRowWrapPolicy(QFormLayout::DontWrapRows);
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);
        formLayout->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        lb_relay1 = new QLabel(centralWidget);
        lb_relay1->setObjectName(QStringLiteral("lb_relay1"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lb_relay1->sizePolicy().hasHeightForWidth());
        lb_relay1->setSizePolicy(sizePolicy3);

        horizontalLayout_6->addWidget(lb_relay1);

        pb_btn1 = new modernPushButton(centralWidget);
        pb_btn1->setObjectName(QStringLiteral("pb_btn1"));
        sizePolicy2.setHeightForWidth(pb_btn1->sizePolicy().hasHeightForWidth());
        pb_btn1->setSizePolicy(sizePolicy2);

        horizontalLayout_6->addWidget(pb_btn1);


        formLayout->setLayout(0, QFormLayout::LabelRole, horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        lb_relay9 = new QLabel(centralWidget);
        lb_relay9->setObjectName(QStringLiteral("lb_relay9"));
        sizePolicy3.setHeightForWidth(lb_relay9->sizePolicy().hasHeightForWidth());
        lb_relay9->setSizePolicy(sizePolicy3);

        horizontalLayout_7->addWidget(lb_relay9);

        pb_btn9 = new modernPushButton(centralWidget);
        pb_btn9->setObjectName(QStringLiteral("pb_btn9"));
        sizePolicy2.setHeightForWidth(pb_btn9->sizePolicy().hasHeightForWidth());
        pb_btn9->setSizePolicy(sizePolicy2);

        horizontalLayout_7->addWidget(pb_btn9);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout_7);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        lb_relay2 = new QLabel(centralWidget);
        lb_relay2->setObjectName(QStringLiteral("lb_relay2"));
        sizePolicy3.setHeightForWidth(lb_relay2->sizePolicy().hasHeightForWidth());
        lb_relay2->setSizePolicy(sizePolicy3);

        horizontalLayout_4->addWidget(lb_relay2);

        pb_btn2 = new modernPushButton(centralWidget);
        pb_btn2->setObjectName(QStringLiteral("pb_btn2"));
        sizePolicy2.setHeightForWidth(pb_btn2->sizePolicy().hasHeightForWidth());
        pb_btn2->setSizePolicy(sizePolicy2);

        horizontalLayout_4->addWidget(pb_btn2);


        formLayout->setLayout(1, QFormLayout::LabelRole, horizontalLayout_4);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        lb_relay10 = new QLabel(centralWidget);
        lb_relay10->setObjectName(QStringLiteral("lb_relay10"));
        sizePolicy3.setHeightForWidth(lb_relay10->sizePolicy().hasHeightForWidth());
        lb_relay10->setSizePolicy(sizePolicy3);

        horizontalLayout_10->addWidget(lb_relay10);

        pb_btn10 = new modernPushButton(centralWidget);
        pb_btn10->setObjectName(QStringLiteral("pb_btn10"));
        sizePolicy2.setHeightForWidth(pb_btn10->sizePolicy().hasHeightForWidth());
        pb_btn10->setSizePolicy(sizePolicy2);

        horizontalLayout_10->addWidget(pb_btn10);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout_10);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        lb_relay3 = new QLabel(centralWidget);
        lb_relay3->setObjectName(QStringLiteral("lb_relay3"));
        sizePolicy3.setHeightForWidth(lb_relay3->sizePolicy().hasHeightForWidth());
        lb_relay3->setSizePolicy(sizePolicy3);

        horizontalLayout_9->addWidget(lb_relay3);

        pb_btn3 = new modernPushButton(centralWidget);
        pb_btn3->setObjectName(QStringLiteral("pb_btn3"));
        sizePolicy2.setHeightForWidth(pb_btn3->sizePolicy().hasHeightForWidth());
        pb_btn3->setSizePolicy(sizePolicy2);

        horizontalLayout_9->addWidget(pb_btn3);


        formLayout->setLayout(2, QFormLayout::LabelRole, horizontalLayout_9);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        lb_relay11 = new QLabel(centralWidget);
        lb_relay11->setObjectName(QStringLiteral("lb_relay11"));
        sizePolicy3.setHeightForWidth(lb_relay11->sizePolicy().hasHeightForWidth());
        lb_relay11->setSizePolicy(sizePolicy3);

        horizontalLayout_11->addWidget(lb_relay11);

        pb_btn11 = new modernPushButton(centralWidget);
        pb_btn11->setObjectName(QStringLiteral("pb_btn11"));
        sizePolicy2.setHeightForWidth(pb_btn11->sizePolicy().hasHeightForWidth());
        pb_btn11->setSizePolicy(sizePolicy2);

        horizontalLayout_11->addWidget(pb_btn11);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        lb_relay4 = new QLabel(centralWidget);
        lb_relay4->setObjectName(QStringLiteral("lb_relay4"));
        sizePolicy3.setHeightForWidth(lb_relay4->sizePolicy().hasHeightForWidth());
        lb_relay4->setSizePolicy(sizePolicy3);

        horizontalLayout_12->addWidget(lb_relay4);

        pb_btn4 = new modernPushButton(centralWidget);
        pb_btn4->setObjectName(QStringLiteral("pb_btn4"));
        sizePolicy2.setHeightForWidth(pb_btn4->sizePolicy().hasHeightForWidth());
        pb_btn4->setSizePolicy(sizePolicy2);

        horizontalLayout_12->addWidget(pb_btn4);


        formLayout->setLayout(3, QFormLayout::LabelRole, horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        lb_relay12 = new QLabel(centralWidget);
        lb_relay12->setObjectName(QStringLiteral("lb_relay12"));
        sizePolicy3.setHeightForWidth(lb_relay12->sizePolicy().hasHeightForWidth());
        lb_relay12->setSizePolicy(sizePolicy3);

        horizontalLayout_13->addWidget(lb_relay12);

        pb_btn12 = new modernPushButton(centralWidget);
        pb_btn12->setObjectName(QStringLiteral("pb_btn12"));
        sizePolicy2.setHeightForWidth(pb_btn12->sizePolicy().hasHeightForWidth());
        pb_btn12->setSizePolicy(sizePolicy2);

        horizontalLayout_13->addWidget(pb_btn12);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        lb_relay5 = new QLabel(centralWidget);
        lb_relay5->setObjectName(QStringLiteral("lb_relay5"));
        sizePolicy3.setHeightForWidth(lb_relay5->sizePolicy().hasHeightForWidth());
        lb_relay5->setSizePolicy(sizePolicy3);

        horizontalLayout_14->addWidget(lb_relay5);

        pb_btn5 = new modernPushButton(centralWidget);
        pb_btn5->setObjectName(QStringLiteral("pb_btn5"));
        sizePolicy2.setHeightForWidth(pb_btn5->sizePolicy().hasHeightForWidth());
        pb_btn5->setSizePolicy(sizePolicy2);

        horizontalLayout_14->addWidget(pb_btn5);


        formLayout->setLayout(4, QFormLayout::LabelRole, horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        lb_relay13 = new QLabel(centralWidget);
        lb_relay13->setObjectName(QStringLiteral("lb_relay13"));
        sizePolicy3.setHeightForWidth(lb_relay13->sizePolicy().hasHeightForWidth());
        lb_relay13->setSizePolicy(sizePolicy3);

        horizontalLayout_15->addWidget(lb_relay13);

        pb_btn13 = new modernPushButton(centralWidget);
        pb_btn13->setObjectName(QStringLiteral("pb_btn13"));
        sizePolicy2.setHeightForWidth(pb_btn13->sizePolicy().hasHeightForWidth());
        pb_btn13->setSizePolicy(sizePolicy2);

        horizontalLayout_15->addWidget(pb_btn13);


        formLayout->setLayout(4, QFormLayout::FieldRole, horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        lb_relay6 = new QLabel(centralWidget);
        lb_relay6->setObjectName(QStringLiteral("lb_relay6"));
        sizePolicy3.setHeightForWidth(lb_relay6->sizePolicy().hasHeightForWidth());
        lb_relay6->setSizePolicy(sizePolicy3);

        horizontalLayout_16->addWidget(lb_relay6);

        pb_btn6 = new modernPushButton(centralWidget);
        pb_btn6->setObjectName(QStringLiteral("pb_btn6"));
        sizePolicy2.setHeightForWidth(pb_btn6->sizePolicy().hasHeightForWidth());
        pb_btn6->setSizePolicy(sizePolicy2);

        horizontalLayout_16->addWidget(pb_btn6);


        formLayout->setLayout(5, QFormLayout::LabelRole, horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        lb_relay14 = new QLabel(centralWidget);
        lb_relay14->setObjectName(QStringLiteral("lb_relay14"));
        sizePolicy3.setHeightForWidth(lb_relay14->sizePolicy().hasHeightForWidth());
        lb_relay14->setSizePolicy(sizePolicy3);

        horizontalLayout_17->addWidget(lb_relay14);

        pb_btn14 = new modernPushButton(centralWidget);
        pb_btn14->setObjectName(QStringLiteral("pb_btn14"));
        sizePolicy2.setHeightForWidth(pb_btn14->sizePolicy().hasHeightForWidth());
        pb_btn14->setSizePolicy(sizePolicy2);

        horizontalLayout_17->addWidget(pb_btn14);


        formLayout->setLayout(5, QFormLayout::FieldRole, horizontalLayout_17);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        lb_relay7 = new QLabel(centralWidget);
        lb_relay7->setObjectName(QStringLiteral("lb_relay7"));
        sizePolicy3.setHeightForWidth(lb_relay7->sizePolicy().hasHeightForWidth());
        lb_relay7->setSizePolicy(sizePolicy3);

        horizontalLayout_18->addWidget(lb_relay7);

        pb_btn7 = new modernPushButton(centralWidget);
        pb_btn7->setObjectName(QStringLiteral("pb_btn7"));
        sizePolicy2.setHeightForWidth(pb_btn7->sizePolicy().hasHeightForWidth());
        pb_btn7->setSizePolicy(sizePolicy2);

        horizontalLayout_18->addWidget(pb_btn7);


        formLayout->setLayout(6, QFormLayout::LabelRole, horizontalLayout_18);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        lb_relay15 = new QLabel(centralWidget);
        lb_relay15->setObjectName(QStringLiteral("lb_relay15"));
        sizePolicy3.setHeightForWidth(lb_relay15->sizePolicy().hasHeightForWidth());
        lb_relay15->setSizePolicy(sizePolicy3);

        horizontalLayout_19->addWidget(lb_relay15);

        pb_btn15 = new modernPushButton(centralWidget);
        pb_btn15->setObjectName(QStringLiteral("pb_btn15"));
        sizePolicy2.setHeightForWidth(pb_btn15->sizePolicy().hasHeightForWidth());
        pb_btn15->setSizePolicy(sizePolicy2);

        horizontalLayout_19->addWidget(pb_btn15);


        formLayout->setLayout(6, QFormLayout::FieldRole, horizontalLayout_19);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        lb_relay8 = new QLabel(centralWidget);
        lb_relay8->setObjectName(QStringLiteral("lb_relay8"));
        sizePolicy3.setHeightForWidth(lb_relay8->sizePolicy().hasHeightForWidth());
        lb_relay8->setSizePolicy(sizePolicy3);

        horizontalLayout_20->addWidget(lb_relay8);

        pb_btn8 = new modernPushButton(centralWidget);
        pb_btn8->setObjectName(QStringLiteral("pb_btn8"));
        sizePolicy2.setHeightForWidth(pb_btn8->sizePolicy().hasHeightForWidth());
        pb_btn8->setSizePolicy(sizePolicy2);

        horizontalLayout_20->addWidget(pb_btn8);


        formLayout->setLayout(7, QFormLayout::LabelRole, horizontalLayout_20);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setSpacing(6);
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        lb_relay16 = new QLabel(centralWidget);
        lb_relay16->setObjectName(QStringLiteral("lb_relay16"));
        sizePolicy3.setHeightForWidth(lb_relay16->sizePolicy().hasHeightForWidth());
        lb_relay16->setSizePolicy(sizePolicy3);

        horizontalLayout_21->addWidget(lb_relay16);

        pb_btn16 = new modernPushButton(centralWidget);
        pb_btn16->setObjectName(QStringLiteral("pb_btn16"));
        sizePolicy2.setHeightForWidth(pb_btn16->sizePolicy().hasHeightForWidth());
        pb_btn16->setSizePolicy(sizePolicy2);

        horizontalLayout_21->addWidget(pb_btn16);


        formLayout->setLayout(7, QFormLayout::FieldRole, horizontalLayout_21);


        verticalLayout_6->addLayout(formLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        verticalLayout_6->addItem(horizontalSpacer_2);


        horizontalLayout_3->addLayout(verticalLayout_6);

        lv_clientIpAddress = new QListView(centralWidget);
        lv_clientIpAddress->setObjectName(QStringLiteral("lv_clientIpAddress"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(lv_clientIpAddress->sizePolicy().hasHeightForWidth());
        lv_clientIpAddress->setSizePolicy(sizePolicy4);

        horizontalLayout_3->addWidget(lv_clientIpAddress);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_3->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 603, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        lb_ipAddress->setText(QApplication::translate("MainWindow", "ip \320\260\320\264\321\200\320\265\321\201", 0));
        le_ipAddress->setText(QApplication::translate("MainWindow", "192.168.1.22", 0));
        label_2->setText(QApplication::translate("MainWindow", "\320\277\320\276\321\200\321\202", 0));
        le_port->setText(QApplication::translate("MainWindow", "8080", 0));
        pb_connect->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\264\320\272\320\273\321\216\321\207\320\270\321\202\321\214\321\201\321\217", 0));
        label->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265", 0));
        lb_state->setText(QApplication::translate("MainWindow", "\320\235\320\225 \320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\275\320\276", 0));
        pb_startServer->setText(QApplication::translate("MainWindow", "Start server", 0));
        pb_removeAll->setText(QApplication::translate("MainWindow", "remove All", 0));
        lb_relay1->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275\320\276", 0));
        pb_btn1->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\272\320\273\321\216\321\207\320\260\321\202\320\265\320\273\321\214", 0));
        lb_relay9->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275\320\276", 0));
        pb_btn9->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\272\320\273\321\216\321\207\320\260\321\202\320\265\320\273\321\214", 0));
        lb_relay2->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275\320\276", 0));
        pb_btn2->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\272\320\273\321\216\321\207\320\260\321\202\320\265\320\273\321\214", 0));
        lb_relay10->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275\320\276", 0));
        pb_btn10->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\272\320\273\321\216\321\207\320\260\321\202\320\265\320\273\321\214", 0));
        lb_relay3->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275\320\276", 0));
        pb_btn3->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\272\320\273\321\216\321\207\320\260\321\202\320\265\320\273\321\214", 0));
        lb_relay11->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275\320\276", 0));
        pb_btn11->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\272\320\273\321\216\321\207\320\260\321\202\320\265\320\273\321\214", 0));
        lb_relay4->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275\320\276", 0));
        pb_btn4->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\272\320\273\321\216\321\207\320\260\321\202\320\265\320\273\321\214", 0));
        lb_relay12->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275\320\276", 0));
        pb_btn12->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\272\320\273\321\216\321\207\320\260\321\202\320\265\320\273\321\214", 0));
        lb_relay5->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275\320\276", 0));
        pb_btn5->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\272\320\273\321\216\321\207\320\260\321\202\320\265\320\273\321\214", 0));
        lb_relay13->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275\320\276", 0));
        pb_btn13->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\272\320\273\321\216\321\207\320\260\321\202\320\265\320\273\321\214", 0));
        lb_relay6->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275\320\276", 0));
        pb_btn6->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\272\320\273\321\216\321\207\320\260\321\202\320\265\320\273\321\214", 0));
        lb_relay14->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275\320\276", 0));
        pb_btn14->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\272\320\273\321\216\321\207\320\260\321\202\320\265\320\273\321\214", 0));
        lb_relay7->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275\320\276", 0));
        pb_btn7->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\272\320\273\321\216\321\207\320\260\321\202\320\265\320\273\321\214", 0));
        lb_relay15->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275\320\276", 0));
        pb_btn15->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\272\320\273\321\216\321\207\320\260\321\202\320\265\320\273\321\214", 0));
        lb_relay8->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275\320\276", 0));
        pb_btn8->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\272\320\273\321\216\321\207\320\260\321\202\320\265\320\273\321\214", 0));
        lb_relay16->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275\320\276", 0));
        pb_btn16->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\272\320\273\321\216\321\207\320\260\321\202\320\265\320\273\321\214", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
