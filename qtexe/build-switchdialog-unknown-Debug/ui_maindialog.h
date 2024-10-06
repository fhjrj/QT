/********************************************************************************
** Form generated from reading UI file 'maindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINDIALOG_H
#define UI_MAINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MainDialog
{
public:
    QLabel *label;
    QPushButton *intoButton;
    QPushButton *execButton;

    void setupUi(QDialog *MainDialog)
    {
        if (MainDialog->objectName().isEmpty())
            MainDialog->setObjectName(QString::fromUtf8("MainDialog"));
        MainDialog->resize(800, 600);
        label = new QLabel(MainDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(310, 190, 91, 21));
        intoButton = new QPushButton(MainDialog);
        intoButton->setObjectName(QString::fromUtf8("intoButton"));
        intoButton->setGeometry(QRect(120, 340, 89, 25));
        execButton = new QPushButton(MainDialog);
        execButton->setObjectName(QString::fromUtf8("execButton"));
        execButton->setGeometry(QRect(390, 340, 89, 25));

        retranslateUi(MainDialog);
        QObject::connect(execButton, SIGNAL(clicked()), MainDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(MainDialog);
    } // setupUi

    void retranslateUi(QDialog *MainDialog)
    {
        MainDialog->setWindowTitle(QCoreApplication::translate("MainDialog", "MainDialog", nullptr));
        label->setText(QCoreApplication::translate("MainDialog", "this is main", nullptr));
        intoButton->setText(QCoreApplication::translate("MainDialog", "into child", nullptr));
        execButton->setText(QCoreApplication::translate("MainDialog", "cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainDialog: public Ui_MainDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINDIALOG_H
