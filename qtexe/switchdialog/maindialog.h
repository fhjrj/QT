#ifndef MAINDIALOG_H
#define MAINDIALOG_H

#include <QDialog>
#include "childdialog.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainDialog; }
QT_END_NAMESPACE

class MainDialog : public QDialog
{
    Q_OBJECT

public:
    MainDialog(QWidget *parent = nullptr/*,QWidget* __child=nullptr*/);
    ~MainDialog();

private slots:
    void on_intoButton_clicked();

private:
    Ui::MainDialog *ui;
    //QWidget* _child;
};
#endif // MAINDIALOG_H
