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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *NewAction;
    QAction *showDockAct;
    QAction *openACtion;
    QWidget *centralwidget;
    QMdiArea *mdiArea;
    QMenuBar *menubar;
    QMenu *menufile_F;
    QMenu *menuEdit_E;
    QStatusBar *statusbar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QPushButton *DockerButton;
    QTextEdit *textEdit;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 686);
        NewAction = new QAction(MainWindow);
        NewAction->setObjectName(QString::fromUtf8("NewAction"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        NewAction->setIcon(icon);
        showDockAct = new QAction(MainWindow);
        showDockAct->setObjectName(QString::fromUtf8("showDockAct"));
        showDockAct->setIcon(icon);
        openACtion = new QAction(MainWindow);
        openACtion->setObjectName(QString::fromUtf8("openACtion"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/mainwindow/res/new2.png"), QSize(), QIcon::Normal, QIcon::Off);
        openACtion->setIcon(icon1);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        mdiArea = new QMdiArea(centralwidget);
        mdiArea->setObjectName(QString::fromUtf8("mdiArea"));
        mdiArea->setGeometry(QRect(-20, 60, 811, 441));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 28));
        menufile_F = new QMenu(menubar);
        menufile_F->setObjectName(QString::fromUtf8("menufile_F"));
        menuEdit_E = new QMenu(menubar);
        menuEdit_E->setObjectName(QString::fromUtf8("menuEdit_E"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        dockWidget = new QDockWidget(MainWindow);
        dockWidget->setObjectName(QString::fromUtf8("dockWidget"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        DockerButton = new QPushButton(dockWidgetContents);
        DockerButton->setObjectName(QString::fromUtf8("DockerButton"));
        DockerButton->setGeometry(QRect(20, 40, 89, 25));
        textEdit = new QTextEdit(dockWidgetContents);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(210, 30, 121, 81));
        dockWidget->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(Qt::TopDockWidgetArea, dockWidget);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menufile_F->menuAction());
        menubar->addAction(menuEdit_E->menuAction());
        menufile_F->addAction(NewAction);
        menufile_F->addAction(showDockAct);
        menuEdit_E->addAction(openACtion);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        NewAction->setText(QCoreApplication::translate("MainWindow", "new(&N)", nullptr));
        showDockAct->setText(QCoreApplication::translate("MainWindow", "showDock(&D)", nullptr));
        openACtion->setText(QCoreApplication::translate("MainWindow", "open(&O)", nullptr));
        menufile_F->setTitle(QCoreApplication::translate("MainWindow", "file(&F)", nullptr));
        menuEdit_E->setTitle(QCoreApplication::translate("MainWindow", "Edit(&E)", nullptr));
        dockWidget->setWindowTitle(QCoreApplication::translate("MainWindow", "ToolBox", nullptr));
        DockerButton->setText(QCoreApplication::translate("MainWindow", "Docker", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
