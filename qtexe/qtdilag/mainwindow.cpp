#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QColorDialog>
#include <QDir>
#include <QFileDialog>
#include <QDebug>
#include <QInputDialog>
#include <QMessageBox>
#include <QProgressDialog>
#include <QTimer>
#include  <QLabel>
#include <QVBoxLayout>
#include <QButtonGroup>
#include <QRadioButton>// A single button


// QVBoxLayout::addWidget   This function can layout any QWevice and its inherited classes
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),counter(0)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_colorButton_clicked()
{
    QColorDialog colorDig(Qt::blue,this);
    colorDig.setOption(QColorDialog::ShowAlphaChannel);
    colorDig.exec();
    QColor color=colorDig.currentColor();
}


void MainWindow::on_txtButton_clicked()
{
    QString path=QDir::currentPath();
    QString title=tr("allfile");
    QString fitle=tr("text(*.txt);;all(*.*)");
    QString afilename=QFileDialog::getOpenFileName(this,title,path,fitle);
    qDebug()<<afilename;
}


void MainWindow::on_intergerButton_clicked()
{
    bool ok=false;
    auto intdata=QInputDialog::getInt(this,tr("Integer input dialog box"),tr("Enter numbers"),200,-200,400,10,&ok);//-200~200 is the range
    if(ok){
        qDebug()<<intdata<<endl;
    }
}


void MainWindow::on_Floatingpoint_clicked()
{
    bool ok=false;
    auto floatdata=QInputDialog::getDouble(this,tr("float input dialog box"),tr("Enter numbers"),0.1,-2,4,2,&ok);
    if(ok){
        qDebug()<<floatdata<<endl;
    }
}


void MainWindow::on_pushButton_clicked()
{
    QStringList intm;//This is a list
    intm<<tr("first")<<tr("second");//Add elements to the list
    bool ok=false;
    auto p=QInputDialog::getItem(this,tr("test"),tr("input number"),intm,0,true,&ok);
    if(ok){
        qDebug()<<p<<endl;
    }
}


void MainWindow::on_pushButton_2_clicked()
{
   auto ret=QMessageBox::question(this,tr("question box"),tr("are you humman?")/*,QMessageBox::Yes,QMessageBox::No*/);
   if(ret==QMessageBox::Yes){
       qDebug()<<"ret is"<<ret<<endl;
         qDebug()<<"hello "<<endl;
   }else{
       return;
   }

   auto gg=QMessageBox::warning(this,tr("warning box"),tr("this is faile"),QMessageBox::Yes);
   if(gg==QMessageBox::Yes){
       qDebug()<<"gg is"<<gg;
       return ;
   }
}


void MainWindow::on_pushButton_3_clicked()
{
    auto p=QMessageBox::information(this,tr("Notification dialog box"),tr("i am your dad"),QMessageBox::StandardButton::Yes);
    if(p==QMessageBox::Yes){
        qDebug()<<"p is"<<p;
        qDebug()<<"hehe";
    }
}

void MainWindow::on_update_processingdialog(){
    counter++;
    if(counter>5000||_processingWindow->wasCanceled()){
        _timer->stop();
        delete _timer;
        _timer=nullptr;
        delete _processingWindow;
        counter=0;
        return ;
    }else{
        _processingWindow->setValue(counter);//Display progress bar
        _processingWindow->update();//Handle multi-threaded situations to keep values up-to-date
    }
}

void MainWindow::on_ProgresButton_clicked()
{
   this->_processingWindow =new QProgressDialog(tr("prodessing"),tr("stop processing"),0,5000,this);//0~5000  is the scope of the progress bar
    _processingWindow->setWindowTitle(tr("processing title"));
    _processingWindow->setWindowModality(Qt::ApplicationModal);
    _timer=new QTimer(this);
    connect(_timer,&QTimer::timeout,this,&MainWindow::on_update_processingdialog);
    _timer->start(2);
    _processingWindow->show();
}


void MainWindow::on_pushButton_4_clicked()
{
     wizard=new QWizard(this);
     wizard->setWindowTitle(tr("i am handsome"));
     auto page=new QWizardPage();
     page->setTitle(tr("Interface guidance"));
     auto label_=new QLabel();
     label_->setText(tr("hello"));
     auto layout=new QVBoxLayout();//Create a vertical layout where you can lay out some things

     layout->addWidget(label_);//This method is to add things to the vertical layout

     page->setLayout(layout);//To add a vertical layout to a page, you need to call a function----->setLayout

     wizard->addPage(page);//Add the created page to the dialog box

     QWizardPage* page2=new QWizardPage();
     page2->setTitle(tr("please to choose"));
     QButtonGroup* groupbutton=new QButtonGroup(page2);


     auto mp=new QRadioButton();
     mp->setText(tr("one"));
     groupbutton->addButton(mp);

     auto mp1=new QRadioButton();
     mp1->setText(tr("two"));
     groupbutton->addButton(mp1);

     auto mp2=new QRadioButton();
     mp2->setText(tr("three"));
     groupbutton->addButton(mp2);

     auto mp3=new QRadioButton();
     mp3->setText(tr("four"));
     groupbutton->addButton(mp3);
     /*A QButtonGroup variable can add multiple QRadioButton variables to it*/

     auto layout2=new QVBoxLayout();
     for(int i=0;i<groupbutton->buttons().size();i++){
         layout2->addWidget(groupbutton->buttons()[i]);
     }

     //groupbutton->buttons() ,  It is a QRadioButton array

     page2->setLayout(layout2);
     wizard->addPage(page2);

     auto page3=new QWizardPage();
     page2->setTitle(tr("no plase"));

     auto label2=new QLabel();
     label2->setText(tr("thanks"));
     auto layout3=new QVBoxLayout();
     layout3->addWidget(label2);
     page3->setLayout(layout3);
     wizard->addPage(page3);
     wizard->show();
     wizard->exec();

//

}

