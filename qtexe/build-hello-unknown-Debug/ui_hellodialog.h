/********************************************************************************
** Form generated from reading UI file 'hellodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELLODIALOG_H
#define UI_HELLODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelloDialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *cmdLineEdit;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *commitButton;
    QPushButton *cancelButton;
    QPushButton *lookButton;

    void setupUi(QDialog *HelloDialog)
    {
        if (HelloDialog->objectName().isEmpty())
            HelloDialog->setObjectName(QString::fromUtf8("HelloDialog"));
        HelloDialog->resize(812, 551);
        label = new QLabel(HelloDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(340, 90, 151, 41));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label_2 = new QLabel(HelloDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(290, 220, 67, 20));
        cmdLineEdit = new QLineEdit(HelloDialog);
        cmdLineEdit->setObjectName(QString::fromUtf8("cmdLineEdit"));
        cmdLineEdit->setGeometry(QRect(370, 220, 113, 25));
        layoutWidget = new QWidget(HelloDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(300, 330, 260, 27));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        commitButton = new QPushButton(layoutWidget);
        commitButton->setObjectName(QString::fromUtf8("commitButton"));

        horizontalLayout->addWidget(commitButton);

        cancelButton = new QPushButton(layoutWidget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout->addWidget(cancelButton);

        lookButton = new QPushButton(layoutWidget);
        lookButton->setObjectName(QString::fromUtf8("lookButton"));

        horizontalLayout->addWidget(lookButton);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 1);
        horizontalLayout->setStretch(3, 1);

        retranslateUi(HelloDialog);

        QMetaObject::connectSlotsByName(HelloDialog);
    } // setupUi

    void retranslateUi(QDialog *HelloDialog)
    {
        HelloDialog->setWindowTitle(QCoreApplication::translate("HelloDialog", "HelloDialog", nullptr));
        label->setText(QCoreApplication::translate("HelloDialog", "<html><head/><body><p align=\"center\">set order</p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("HelloDialog", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">open:</span></p></body></html>", nullptr));
        commitButton->setText(QCoreApplication::translate("HelloDialog", "yes", nullptr));
        cancelButton->setText(QCoreApplication::translate("HelloDialog", "cancel", nullptr));
        lookButton->setText(QCoreApplication::translate("HelloDialog", "look", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HelloDialog: public Ui_HelloDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLODIALOG_H
