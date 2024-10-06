#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent),mm{"a","b","c","d"}
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //QPixmap pix("/home/user/1.jpg");
    //ui->label->setPixmap(pix);
    start=0;

}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_startButton_clicked()
{
    mytimrtid=this->startTimer(TIMEOUT);


}

void Widget::timerEvent(QTimerEvent *event){
    if(event->timerId()!=mytimrtid){
        return;
    }
/*
    QString path("/home/user");
    path+=QString::number(start);
    path+=".jpg";
    QPixmap pix(path);
    ui->label->setPixmap(pix);
    start=(++start)%3;
*/

    ui->label_2->setText(this->mm[this->start]);
    start=(++start)%(mm.size());

}

void Widget::on_stopButton_clicked()
{
    this->killTimer(mytimrtid);
}

