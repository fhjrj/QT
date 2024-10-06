/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *sevenButton;
    QPushButton *deleteButton;
    QPushButton *zeroButton;
    QPushButton *equalButton;
    QPushButton *mulButton;
    QPushButton *divButton;
    QPushButton *twoButton;
    QPushButton *fourButton;
    QPushButton *addButton;
    QPushButton *leftButton;
    QPushButton *rightButton;
    QPushButton *threeButton;
    QPushButton *nineButton;
    QPushButton *sixButton;
    QPushButton *oneButton;
    QPushButton *eightButton;
    QPushButton *clearButton;
    QPushButton *fiveButton;
    QPushButton *subButton;
    QLineEdit *mainLineEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(684, 705);
        Widget->setMinimumSize(QSize(0, 0));
        Widget->setMaximumSize(QSize(100000, 100000));
        QFont font;
        font.setFamily(QString::fromUtf8("aakar"));
        font.setBold(true);
        font.setWeight(75);
        Widget->setFont(font);
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(130, 290, 199, 303));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        sevenButton = new QPushButton(widget);
        sevenButton->setObjectName(QString::fromUtf8("sevenButton"));
        sevenButton->setMinimumSize(QSize(40, 40));
        sevenButton->setMaximumSize(QSize(40, 40));
        QFont font1;
        font1.setFamily(QString::fromUtf8("aakar"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        sevenButton->setFont(font1);

        gridLayout->addWidget(sevenButton, 2, 0, 1, 1);

        deleteButton = new QPushButton(widget);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setMinimumSize(QSize(40, 40));
        deleteButton->setMaximumSize(QSize(40, 40));
        deleteButton->setFont(font1);

        gridLayout->addWidget(deleteButton, 1, 3, 1, 1);

        zeroButton = new QPushButton(widget);
        zeroButton->setObjectName(QString::fromUtf8("zeroButton"));
        zeroButton->setMinimumSize(QSize(40, 40));
        zeroButton->setMaximumSize(QSize(40, 40));
        zeroButton->setFont(font1);

        gridLayout->addWidget(zeroButton, 5, 1, 1, 1);

        equalButton = new QPushButton(widget);
        equalButton->setObjectName(QString::fromUtf8("equalButton"));
        equalButton->setMinimumSize(QSize(40, 40));
        equalButton->setMaximumSize(QSize(40, 90));
        equalButton->setFont(font1);

        gridLayout->addWidget(equalButton, 4, 3, 2, 1);

        mulButton = new QPushButton(widget);
        mulButton->setObjectName(QString::fromUtf8("mulButton"));
        mulButton->setMinimumSize(QSize(40, 40));
        mulButton->setMaximumSize(QSize(40, 40));
        mulButton->setFont(font1);

        gridLayout->addWidget(mulButton, 2, 3, 1, 1);

        divButton = new QPushButton(widget);
        divButton->setObjectName(QString::fromUtf8("divButton"));
        divButton->setMinimumSize(QSize(40, 40));
        divButton->setMaximumSize(QSize(40, 40));
        divButton->setFont(font1);

        gridLayout->addWidget(divButton, 3, 3, 1, 1);

        twoButton = new QPushButton(widget);
        twoButton->setObjectName(QString::fromUtf8("twoButton"));
        twoButton->setMinimumSize(QSize(40, 40));
        twoButton->setMaximumSize(QSize(40, 40));
        twoButton->setFont(font1);

        gridLayout->addWidget(twoButton, 4, 1, 1, 1);

        fourButton = new QPushButton(widget);
        fourButton->setObjectName(QString::fromUtf8("fourButton"));
        fourButton->setMinimumSize(QSize(40, 40));
        fourButton->setMaximumSize(QSize(40, 40));
        fourButton->setFont(font1);

        gridLayout->addWidget(fourButton, 3, 0, 1, 1);

        addButton = new QPushButton(widget);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setMinimumSize(QSize(40, 40));
        addButton->setMaximumSize(QSize(40, 40));
        addButton->setFont(font1);

        gridLayout->addWidget(addButton, 1, 1, 1, 1);

        leftButton = new QPushButton(widget);
        leftButton->setObjectName(QString::fromUtf8("leftButton"));
        leftButton->setMinimumSize(QSize(40, 40));
        leftButton->setMaximumSize(QSize(40, 40));
        leftButton->setFont(font1);

        gridLayout->addWidget(leftButton, 5, 0, 1, 1);

        rightButton = new QPushButton(widget);
        rightButton->setObjectName(QString::fromUtf8("rightButton"));
        rightButton->setMinimumSize(QSize(40, 40));
        rightButton->setMaximumSize(QSize(40, 90));
        rightButton->setFont(font1);

        gridLayout->addWidget(rightButton, 5, 2, 1, 1);

        threeButton = new QPushButton(widget);
        threeButton->setObjectName(QString::fromUtf8("threeButton"));
        threeButton->setMinimumSize(QSize(40, 40));
        threeButton->setMaximumSize(QSize(40, 40));
        threeButton->setFont(font1);

        gridLayout->addWidget(threeButton, 4, 2, 1, 1);

        nineButton = new QPushButton(widget);
        nineButton->setObjectName(QString::fromUtf8("nineButton"));
        nineButton->setMinimumSize(QSize(40, 40));
        nineButton->setMaximumSize(QSize(40, 40));
        nineButton->setFont(font1);

        gridLayout->addWidget(nineButton, 2, 2, 1, 1);

        sixButton = new QPushButton(widget);
        sixButton->setObjectName(QString::fromUtf8("sixButton"));
        sixButton->setMinimumSize(QSize(40, 40));
        sixButton->setMaximumSize(QSize(40, 40));
        sixButton->setFont(font1);

        gridLayout->addWidget(sixButton, 3, 2, 1, 1);

        oneButton = new QPushButton(widget);
        oneButton->setObjectName(QString::fromUtf8("oneButton"));
        oneButton->setMinimumSize(QSize(40, 40));
        oneButton->setMaximumSize(QSize(40, 40));
        oneButton->setFont(font1);

        gridLayout->addWidget(oneButton, 4, 0, 1, 1);

        eightButton = new QPushButton(widget);
        eightButton->setObjectName(QString::fromUtf8("eightButton"));
        eightButton->setMinimumSize(QSize(40, 40));
        eightButton->setMaximumSize(QSize(40, 40));
        eightButton->setFont(font1);

        gridLayout->addWidget(eightButton, 2, 1, 1, 1);

        clearButton = new QPushButton(widget);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        clearButton->setMinimumSize(QSize(40, 40));
        clearButton->setMaximumSize(QSize(40, 40));
        clearButton->setFont(font1);

        gridLayout->addWidget(clearButton, 1, 0, 1, 1);

        fiveButton = new QPushButton(widget);
        fiveButton->setObjectName(QString::fromUtf8("fiveButton"));
        fiveButton->setMinimumSize(QSize(40, 40));
        fiveButton->setMaximumSize(QSize(40, 40));
        fiveButton->setFont(font1);

        gridLayout->addWidget(fiveButton, 3, 1, 1, 1);

        subButton = new QPushButton(widget);
        subButton->setObjectName(QString::fromUtf8("subButton"));
        subButton->setMinimumSize(QSize(40, 40));
        subButton->setMaximumSize(QSize(40, 40));
        subButton->setFont(font1);

        gridLayout->addWidget(subButton, 1, 2, 1, 1);

        mainLineEdit = new QLineEdit(widget);
        mainLineEdit->setObjectName(QString::fromUtf8("mainLineEdit"));

        gridLayout->addWidget(mainLineEdit, 0, 0, 1, 4);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        sevenButton->setText(QCoreApplication::translate("Widget", "7", nullptr));
        deleteButton->setText(QCoreApplication::translate("Widget", "1", nullptr));
        zeroButton->setText(QCoreApplication::translate("Widget", "0", nullptr));
        equalButton->setText(QCoreApplication::translate("Widget", "=", nullptr));
        mulButton->setText(QCoreApplication::translate("Widget", "*", nullptr));
        divButton->setText(QCoreApplication::translate("Widget", "/", nullptr));
        twoButton->setText(QCoreApplication::translate("Widget", "2", nullptr));
        fourButton->setText(QCoreApplication::translate("Widget", "4", nullptr));
        addButton->setText(QCoreApplication::translate("Widget", "+", nullptr));
        leftButton->setText(QCoreApplication::translate("Widget", "(", nullptr));
        rightButton->setText(QCoreApplication::translate("Widget", ")", nullptr));
        threeButton->setText(QCoreApplication::translate("Widget", "3", nullptr));
        nineButton->setText(QCoreApplication::translate("Widget", "9", nullptr));
        sixButton->setText(QCoreApplication::translate("Widget", "6", nullptr));
        oneButton->setText(QCoreApplication::translate("Widget", "1", nullptr));
        eightButton->setText(QCoreApplication::translate("Widget", "8", nullptr));
        clearButton->setText(QCoreApplication::translate("Widget", "C", nullptr));
        fiveButton->setText(QCoreApplication::translate("Widget", "5", nullptr));
        subButton->setText(QCoreApplication::translate("Widget", "-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
