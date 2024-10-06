#include "login.h"
#include "ui_login.h"
#include "logger.h"
using namespace std;
Login::Login(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);

}

Login::~Login()
{
    delete ui;
}


void Login::on_pushButton_clicked()
{
this->close();
    _logger->show();
}

void Login::initSignals(){
    _logger=std::make_shared<logger> ();
    _logger->set_login(shared_from_this());
}

