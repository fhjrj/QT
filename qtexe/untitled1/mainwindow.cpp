#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "myaction.h"
#include <QDebug>
#include <QTextEdit>
#include <QMdiSubWindow>
#include <QMenu>
#include <QIcon>
#include <QAction>
#include <QKeySequence>
#include <QActionGroup>
#include <QToolButton>
#include <QToolBar>
#include <QSpinBox>
#include <QLabel>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //ui->openACtion->setShortcut(QKeySequence("Ctrl+O"));
    //connect(ui->openACtion,&QAction::triggered,this,&MainWindow::on_CTL_O);


 QMenu* editmune=ui->menubar->addMenu(tr("editor__(&P)"));//menubar>QMenu>QAction
 auto* action_Open=editmune->addAction(QIcon(":/../mainwindow/res/new2.png"),tr("open(&O)"));
 action_Open->setShortcut(QKeySequence("Ctrl+O"));
 connect(action_Open,&QAction::triggered,this,&MainWindow::on_CTL_O);


auto* p=new QActionGroup(this);//Create Action Group
QAction* action_L=p->addAction(tr("left(&L)"));
action_L->setCheckable(true);
QAction* action_R=p->addAction(tr("right(&R)"));
action_R->setCheckable(true);
QAction* action_C=p->addAction(tr("Centered(&C)"));
action_C->setCheckable(true);//A continuous selectable state
editmune->addSeparator();//Added a delimiter
editmune->addAction(action_L);
editmune->addAction(action_R);
editmune->addAction(action_C);

Myaction* action=new Myaction(this);//Myaction<--------QWidgetAction<---------QAction
editmune->addAction(action);//
connect(action,&Myaction::getText,this,&MainWindow::slot_t);

QToolButton* toolBtin=new QToolButton(this);
toolBtin->setText(tr("coloer"));
ui->toolBar->addWidget(toolBtin);
QMenu* coloermune=new QMenu(this);
coloermune->addAction(tr("red"));
coloermune->addAction(tr("bule"));
toolBtin->setMenu(coloermune);//Tool buttons can also add menus,not only menubar
toolBtin->setPopupMode(QToolButton::MenuButtonPopup);
ui->toolBar->addSeparator();

QSpinBox* ss=new QSpinBox(this);
ui->toolBar->addWidget(ss);

QLabel* ever=new QLabel(this);
ever->setFrameStyle(QFrame::Box|QFrame::Sunken);
ever->setText("hello");
ui->statusbar->addPermanentWidget(ever);//Each UI contains a statusbar,You don't have to generate it yourself

}
MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_showDockAct_triggered()
{
    qDebug()<<"show dock_widget"<<endl;
   ui->dockWidget->show();
}


void MainWindow::on_DockerButton_clicked()
{
    qDebug()<<"close dock_widgrt"<<endl;
    ui->dockWidget->close();
}


void MainWindow::on_NewAction_triggered()
{
    QTextEdit* p=new QTextEdit(this);
    auto childwindow=ui->mdiArea->addSubWindow(p);//Plugin that can store multiple windows
    childwindow->setWindowTitle(tr("child window"));
    childwindow->show();
}

void MainWindow::on_openACtion_triggered()
{
     qDebug()<<"open the file"<<endl;
}


void MainWindow::on_CTL_O(){
       qDebug()<<"open the file11111"<<endl;
}


void MainWindow::slot_t(const QString & p){
ui->textEdit->setText(p);
}
