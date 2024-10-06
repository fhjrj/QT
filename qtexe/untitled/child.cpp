#include "child.h"
#include "ui_child.h"
#include "mainwindow.h"
child::child(QWidget *parent) :
    QDialog(parent),_parent(parent),
    ui(new Ui::child)
{
    ui->setupUi(this);
    connect(ui->pushButton,&QPushButton::clicked,this,&child::on_pushButton_clicked);


}

child::~child()
{
    delete ui;
}

void child::on_pushButton_clicked()
{
    this->hide();
    _parent->show();

}

