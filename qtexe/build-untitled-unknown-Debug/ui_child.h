/********************************************************************************
** Form generated from reading UI file 'child.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHILD_H
#define UI_CHILD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_child
{
public:
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *child)
    {
        if (child->objectName().isEmpty())
            child->setObjectName(QString::fromUtf8("child"));
        child->resize(400, 300);
        lineEdit = new QLineEdit(child);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(140, 50, 113, 25));
        pushButton = new QPushButton(child);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(130, 140, 89, 25));

        retranslateUi(child);

        QMetaObject::connectSlotsByName(child);
    } // setupUi

    void retranslateUi(QDialog *child)
    {
        child->setWindowTitle(QCoreApplication::translate("child", "Dialog", nullptr));
        lineEdit->setText(QCoreApplication::translate("child", "erzi", nullptr));
        pushButton->setText(QCoreApplication::translate("child", "look", nullptr));
    } // retranslateUi

};

namespace Ui {
    class child: public Ui_child {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHILD_H
