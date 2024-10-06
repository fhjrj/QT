#ifndef CHILD_H
#define CHILD_H

#include <QDialog>

namespace Ui {
class child;
}

class child : public QDialog
{
    Q_OBJECT

public:
    explicit child(QWidget *parent = nullptr);
    ~child();

private slots:
    void on_pushButton_clicked();

private:
    Ui::child *ui;
    QWidget* _parent;
};

#endif // CHILD_H
