#include "maindialog.h"
#include "ui_maindialog.h"

MainDialog::MainDialog(QWidget *parent/*,QWidget* mm*/)
    : QDialog(parent)/*,_child(mm)*/
    , ui(new Ui::MainDialog)
{
    ui->setupUi(this);
}

MainDialog::~MainDialog()
{
    delete ui;
}


void MainDialog::on_intoButton_clicked()
{
  this->close();
   //_child->show();
    childDialog p;
    if(p.exec()==QDialog::Accepted){
      this->show();
    }else{
        return ;
    }
}

