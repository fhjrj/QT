#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QRegExpValidator>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QString ip_mask="000.000.000.000;_";
    ui->ipadrpp->setInputMask(ip_mask);
    QString mac_mask="HH:HH:HH:HH:HH:HH;_";
    ui->macp->setInputMask(mac_mask);//
    ui->passpp->setEchoMode(QLineEdit::Password);//After entering the password, it turns into a black dot
    //ui->passpp->setEchoMode(QLineEdit::NoEcho);//After entering the password, the password cannot be seen
    QRegExp regx("[a-zA-Z0-9_-]+@[a-zA-Z0-9]+\.[a-zA-Z0-9]+");//regular expression
    QValidator* val=new QRegExpValidator(regx,ui->mailp);
    ui->mailp->setValidator(val);//Sets the margins around the text inside the frame.




}

MainWindow::~MainWindow()
{
    delete ui;
}

