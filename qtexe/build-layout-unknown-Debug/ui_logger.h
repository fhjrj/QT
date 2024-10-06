/********************************************************************************
** Form generated from reading UI file 'logger.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGGER_H
#define UI_LOGGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_logger
{
public:

    void setupUi(QDialog *logger)
    {
        if (logger->objectName().isEmpty())
            logger->setObjectName(QString::fromUtf8("logger"));
        logger->resize(400, 300);

        retranslateUi(logger);

        QMetaObject::connectSlotsByName(logger);
    } // setupUi

    void retranslateUi(QDialog *logger)
    {
        logger->setWindowTitle(QCoreApplication::translate("logger", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class logger: public Ui_logger {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGGER_H
