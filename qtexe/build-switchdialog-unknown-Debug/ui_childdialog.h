/********************************************************************************
** Form generated from reading UI file 'childdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHILDDIALOG_H
#define UI_CHILDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_childDialog
{
public:
    QLabel *label;
    QPushButton *entryButton;
    QPushButton *exitButton;

    void setupUi(QDialog *childDialog)
    {
        if (childDialog->objectName().isEmpty())
            childDialog->setObjectName(QString::fromUtf8("childDialog"));
        childDialog->resize(400, 300);
        label = new QLabel(childDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 30, 111, 16));
        entryButton = new QPushButton(childDialog);
        entryButton->setObjectName(QString::fromUtf8("entryButton"));
        entryButton->setGeometry(QRect(80, 160, 89, 25));
        exitButton = new QPushButton(childDialog);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(240, 160, 89, 25));

        retranslateUi(childDialog);
        QObject::connect(exitButton, SIGNAL(clicked()), childDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(childDialog);
    } // setupUi

    void retranslateUi(QDialog *childDialog)
    {
        childDialog->setWindowTitle(QCoreApplication::translate("childDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("childDialog", "this is child", nullptr));
        entryButton->setText(QCoreApplication::translate("childDialog", "into main", nullptr));
        exitButton->setText(QCoreApplication::translate("childDialog", "cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class childDialog: public Ui_childDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHILDDIALOG_H
