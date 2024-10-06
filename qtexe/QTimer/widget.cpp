#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent),pp{"a","b","c","e"},start(0)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    timer=new QTimer;
    connect(this->timer,&QTimer::timeout,this,&Widget::timeevents);//QTimer need connect,but QObject not needs connect
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_startButton_clicked()
{
    timer->start(STOPTIME);//The Qtimer class requires the function connect() to capture signals and signal processing functions, and the signals emitted by the Qtimer class are also continuous
}

void Widget::timeevents(){
 ui->label->setText(pp[start]);
 start=(++start)%pp.size();
}



void Widget::on_pushButton_clicked()
{
    timer->stop();
}


void Widget::on_pushButton_2_clicked()
{
    QTimer::singleShot(1000,this,SLOT(on_startButton_clicked()));
}

