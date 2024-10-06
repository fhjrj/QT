#include "logger.h"
#include "ui_logger.h"
#include <QVBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include "login.h"
logger::logger(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::logger)
{
    ui->setupUi(this);
    this->setMaximumSize(QSize(400,550));
    this->setMinimumSize(QSize(400,550));
    auto vbox_layout=new QVBoxLayout();
    auto verticalspacer1=new QSpacerItem(40,20,QSizePolicy::Minimum,QSizePolicy::Expanding);//
    vbox_layout->addItem(verticalspacer1);//Create a spring, place it in a vertical layout

    QLabel* name_label=new QLabel();
    name_label->setText(tr("Mailbox:"));
    QLineEdit* name_deit=new QLineEdit();
      auto name_layout=new QHBoxLayout();
      auto name_space1=new QSpacerItem(45,20,QSizePolicy::Minimum,QSizePolicy::Expanding);
       auto name_space2=new QSpacerItem(45,20,QSizePolicy::Minimum,QSizePolicy::Expanding);
      name_layout->addItem(name_space1);
      name_layout->addWidget(name_label);
      name_layout->addWidget(name_deit);
      name_layout->addItem(name_space2);
      vbox_layout->addLayout(name_layout);

      auto vertivalspaceer2=new QSpacerItem(40,20,QSizePolicy::Minimum,QSizePolicy::Expanding);//
      vbox_layout->addItem(vertivalspaceer2);//Create another spring, place it in a vertical layout,The mailbox is placed in the middle of the vertical layout

      auto pass_layout=new QHBoxLayout();
      QLabel* PASS_label=new QLabel();
      PASS_label->setText(tr("password:"));
      QLineEdit* pass_deit=new QLineEdit();
      auto pass_space1=new QSpacerItem(40,20,QSizePolicy::Minimum,QSizePolicy::Expanding);
      auto pass_space2=new QSpacerItem(40,20,QSizePolicy::Minimum,QSizePolicy::Expanding);
      pass_layout->addItem(pass_space1);
      pass_layout->addWidget(PASS_label);
      pass_layout->addWidget(pass_deit);
      pass_layout->addItem(pass_space2);
      vbox_layout->addLayout(pass_layout);

       auto vertivalspaceer3=new QSpacerItem(40,20,QSizePolicy::Minimum,QSizePolicy::Expanding);
       vbox_layout->addItem(vertivalspaceer3);

       auto reg_space1=new QSpacerItem(150,20,QSizePolicy::Minimum,QSizePolicy::Expanding);
       auto reg_space2=new QSpacerItem(150,20,QSizePolicy::Minimum,QSizePolicy::Expanding);

       auto _reg_bin_=new QPushButton();
       _reg_bin_->setText(tr("register"));
       auto rebin_layout=new QHBoxLayout();
       rebin_layout->addItem(reg_space1);
       rebin_layout->addWidget(_reg_bin_,5);
       rebin_layout->addItem(reg_space2);


       vbox_layout->addLayout(rebin_layout);

        auto vertivalspaceer4=new QSpacerItem(40,20,QSizePolicy::Minimum,QSizePolicy::Expanding);
        vbox_layout->addItem(vertivalspaceer4);

        connect(_reg_bin_,&QPushButton::clicked,this,&logger::slog_reginst);



  this->setLayout(vbox_layout);
}

void logger::set_login(const weak_ptr<Login>& _loginn){
    _login=_loginn;
}
void logger::slog_reginst(){
    this->close();
    if(_login.lock()){
    std::shared_ptr<Login> newLogin=_login.lock();
    newLogin->close();
    }

}

logger::~logger()
{
    delete ui;
}
