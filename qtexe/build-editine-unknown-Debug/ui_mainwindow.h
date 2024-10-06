/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *mailp;
    QLabel *pmailbox;
    QLabel *password;
    QLineEdit *passpp;
    QLineEdit *ipadrpp;
    QLabel *iplabel;
    QLineEdit *macp;
    QLabel *macaddress;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        mailp = new QLineEdit(centralwidget);
        mailp->setObjectName(QString::fromUtf8("mailp"));
        mailp->setGeometry(QRect(310, 160, 291, 31));
        pmailbox = new QLabel(centralwidget);
        pmailbox->setObjectName(QString::fromUtf8("pmailbox"));
        pmailbox->setGeometry(QRect(220, 170, 67, 17));
        password = new QLabel(centralwidget);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(220, 250, 67, 17));
        passpp = new QLineEdit(centralwidget);
        passpp->setObjectName(QString::fromUtf8("passpp"));
        passpp->setGeometry(QRect(310, 240, 291, 31));
        ipadrpp = new QLineEdit(centralwidget);
        ipadrpp->setObjectName(QString::fromUtf8("ipadrpp"));
        ipadrpp->setGeometry(QRect(310, 320, 291, 31));
        iplabel = new QLabel(centralwidget);
        iplabel->setObjectName(QString::fromUtf8("iplabel"));
        iplabel->setGeometry(QRect(220, 320, 67, 17));
        macp = new QLineEdit(centralwidget);
        macp->setObjectName(QString::fromUtf8("macp"));
        macp->setGeometry(QRect(310, 400, 291, 31));
        macaddress = new QLabel(centralwidget);
        macaddress->setObjectName(QString::fromUtf8("macaddress"));
        macaddress->setGeometry(QRect(220, 400, 81, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 28));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pmailbox->setText(QCoreApplication::translate("MainWindow", "mailbox:", nullptr));
        password->setText(QCoreApplication::translate("MainWindow", "password:", nullptr));
        iplabel->setText(QCoreApplication::translate("MainWindow", "ipadress", nullptr));
        macaddress->setText(QCoreApplication::translate("MainWindow", "macaddress", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
