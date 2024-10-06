#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>
#include <QFile>
#include <QPoint>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->newAction,&QAction::triggered,this,&MainWindow::newActionslot);//QAction type signals
    connect(ui->openAction,&QAction::triggered,this,&MainWindow::openActionslot);
    connect(ui->saveAction,&QAction::triggered,this,&MainWindow::saveActionslot);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::newActionslot()
{
    ui->textEdit->clear();
    this->setWindowTitle(tr("create new file.txt"));
}


void MainWindow::openActionslot()
{
      QString filename=QFileDialog::getOpenFileName(this,tr("choose file"),tr("/home/user"),tr("All tyoe(*.*);;cpptype(*.cpp)"));
      if(filename.isEmpty()){
          QMessageBox::warning(this,"waring","to choose a file");
      }else{
          qDebug()<<filename;
          QFile file(filename);
          file.open(QIODevice::ReadOnly);
          QByteArray ba=file.readAll();
          ui->textEdit->setText(QString(ba));
          file.close();

      }
}

void MainWindow::saveActionslot()
{
    QString filename=QFileDialog::getSaveFileName(this,tr("choose file"),tr("/home/user"),tr("All tyoe(*.*);;cpptype(*.cpp);;txttype(*.txt)"));
    //This function first creates a target file (with empty content), returns the complete directory, and then performs some operation mode to open it.
    if(filename.isEmpty()){
        QMessageBox::warning(this,"waring","to choose a file");
    }else{
        /*this way to create is first to choose opening  a file(needs its content),next to choose writing a file */
        qDebug()<<filename;
        QFile file(filename);
        file.open(QIODevice::WriteOnly);
        QString m=ui->textEdit->toPlainText();//Returns the text of the text edit as plain text
        QByteArray ba;
        ba.append(m);
        file.write(ba);
        file.close();

    }

}


void MainWindow::KeyPressEvent(QKeyEvent* k)
{
    if(k->modifiers()==Qt::ControlModifier&&k->key()==Qt::Key_S)
    {
        saveActionslot();
    }
}

 void MainWindow::mousePressEvent(QMouseEvent* m)
 {
     QPoint pt=m->pos();
     qDebug()<<pt;

     if(m->button()==Qt::LeftButton)
     {
         qDebug()<<"left button";
     }else if(m->button()==Qt::RightButton)
     {
         qDebug()<<"right button";
     }
 }
