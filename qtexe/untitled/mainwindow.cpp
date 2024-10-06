#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDialog>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
  //  connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(on_pushButton_clicked()));//
          connect(ui->pushButton,&QPushButton::clicked,this,&MainWindow::on_pushButton_clicked);
           _child=new child(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    if(_child!=nullptr){
        delete _child;
        _child=nullptr;
    }
}




void MainWindow::on_pushButton_clicked()
{
    _child->show();

    this->hide();

}

