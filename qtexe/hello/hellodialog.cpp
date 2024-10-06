#include "hellodialog.h"
#include "ui_hellodialog.h"

HelloDialog::HelloDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::HelloDialog)//jie mian zhi zhen zhi xiang forms jie mian
{
    ui->setupUi(this);

    //lian jie xin hao yu cao de fang fa

    connect(ui->cmdLineEdit,SIGNAL(returnPressed()),this,SLOT(on_commitButton_clicked()));
    connect(ui->cancelButton,&QPushButton::clicked,this,&HelloDialog::on_cancelButton_clicked);
    connect(ui->lookButton,&QPushButton::clicked,this,[this](){
        QMessageBox::information(this,"information","lookup");
    });

}

HelloDialog::~HelloDialog()
{
    delete ui;
}


void HelloDialog::on_commitButton_clicked()
{
    //get lineed shuju
    QString program=ui->cmdLineEdit->text();
    //create process duixianag //
    QProcess* myprocess=new QProcess(this);
    myprocess->start(program);


}


void HelloDialog:: on_cancelButton_clicked(){
    this->close();

}
