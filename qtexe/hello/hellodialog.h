#ifndef HELLODIALOG_H
#define HELLODIALOG_H

#include <QDialog>
#include <QProcess>// start new QTfork
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class HelloDialog; }
QT_END_NAMESPACE

class HelloDialog : public QDialog
{
    Q_OBJECT

public:
    HelloDialog(QWidget *parent = nullptr);
    ~HelloDialog();

private slots:
    void on_commitButton_clicked();
    void on_cancelButton_clicked();



private:
    Ui::HelloDialog *ui;
};
#endif // HELLODIALOG_H
