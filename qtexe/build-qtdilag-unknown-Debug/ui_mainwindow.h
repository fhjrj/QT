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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *colorButton;
    QPushButton *txtButton;
    QPushButton *intergerButton;
    QPushButton *Floatingpoint;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *ProgresButton;
    QPushButton *pushButton_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        colorButton = new QPushButton(centralwidget);
        colorButton->setObjectName(QString::fromUtf8("colorButton"));
        colorButton->setGeometry(QRect(330, 80, 89, 25));
        txtButton = new QPushButton(centralwidget);
        txtButton->setObjectName(QString::fromUtf8("txtButton"));
        txtButton->setGeometry(QRect(590, 80, 89, 25));
        intergerButton = new QPushButton(centralwidget);
        intergerButton->setObjectName(QString::fromUtf8("intergerButton"));
        intergerButton->setGeometry(QRect(0, 170, 191, 31));
        Floatingpoint = new QPushButton(centralwidget);
        Floatingpoint->setObjectName(QString::fromUtf8("Floatingpoint"));
        Floatingpoint->setGeometry(QRect(510, 160, 261, 41));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(70, 270, 89, 25));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 80, 161, 31));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(270, 260, 221, 51));
        ProgresButton = new QPushButton(centralwidget);
        ProgresButton->setObjectName(QString::fromUtf8("ProgresButton"));
        ProgresButton->setGeometry(QRect(580, 270, 161, 41));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(310, 170, 141, 31));
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
        colorButton->setText(QCoreApplication::translate("MainWindow", "color", nullptr));
        txtButton->setText(QCoreApplication::translate("MainWindow", "txtButton", nullptr));
        intergerButton->setText(QCoreApplication::translate("MainWindow", "Integer input dialog box", nullptr));
        Floatingpoint->setText(QCoreApplication::translate("MainWindow", "Floating Point Number Dialogue Box", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Question dialogue box", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Notification dialog box", nullptr));
        ProgresButton->setText(QCoreApplication::translate("MainWindow", "Progress dialog box", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "wizard dialogs ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
