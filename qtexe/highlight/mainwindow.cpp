#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mysynath.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
     auto my_high=new MySynatH(ui->textEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}

