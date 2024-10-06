#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextDocument>
#include <QTextFrame>
#include <QTextFrameFormat>
#include <QTextCursor>//The cursor of the text box in QTextEdit
#include <QAction>
#include <QDebug>
#include <QTextBlockFormat>//Text Block Design Class
#include <QTextCharFormat>
#include <QTextTableFormat>
#include <QTextListFormat>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QTextDocument* dos=ui->textEdit->document();//Obtain the ontology
    QTextFrame* root_frame=dos->rootFrame();
    QTextFrameFormat format;//THE style of QTextFeame
    format.setBorderBrush(Qt::blue);
    format.setBorder(3);
    root_frame->setFrameFormat(format);
    //Change the color of the text box

    QTextFrameFormat framestyle;
    framestyle.setBackground(Qt::lightGray);
    framestyle.setMargin(10);//length
    framestyle.setPadding(3);//At the beginning, the starting line number of the input box
    framestyle.setBorder(2);//The dashed interval of the input box
    framestyle.setBorderStyle(QTextFrameFormat::BorderStyle_Dashed);//Background color of input box
    QTextCursor curse=ui->textEdit->textCursor();
    curse.insertFrame(framestyle);//Set the style of the input box where the cursor is located
    ui->textEdit->insertPlainText("haha\n");
    ui->textEdit->insertPlainText("666\n");

    QAction* actionfree=new QAction("Frame",this);//Frame is the action of the name
    connect(actionfree,&QAction::triggered,this,&MainWindow::showTextFrame);
    ui->toolBar->addAction(actionfree);

    QAction* action_textblock=new QAction(tr("text block"),this);
    connect(action_textblock,&QAction::triggered,this,&MainWindow::showtextblock);
    ui->toolBar->addAction(action_textblock);

    QAction* action_font=new QAction(tr("style"),this);
    action_font->setCheckable(true);//Set the action type as optional or not
    connect(action_font,&QAction::toggled,this,&MainWindow::getstyle);//The signal corresponding to the optional state of the action isQAction::toggled
    //Optional and non optional correspond to two actions that the signal slot needs to take.
    ui->toolBar->addAction(action_font);


    QAction* action_texttable= new QAction(tr("biaoge"),this);
    QAction* action_textlist=new QAction(tr("liebiao"),this);
    connect(action_texttable,&QAction::triggered,this,&MainWindow::inserttable);
    ui->toolBar->addAction(action_texttable);
    connect(action_texttable,&QAction::triggered,this,&MainWindow::insertlist);
    ui->toolBar->addAction(action_textlist);


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::showTextFrame()
{
auto doc=ui->textEdit->document();
auto rootframe=doc->rootFrame();//Returns the document's root frame,Obtain operable objects
for(auto it=rootframe->begin();it!=rootframe->end();it++)//6
{
    auto cur_frame=it.currentFrame();
    auto p=it.currentBlock();
    if(cur_frame)
    {
        qDebug()<<"cur node is frame";
    }else if(p.isValid())
    {
        qDebug()<<"cur node is text block,text is"<<p.text();
    }
}
}
void MainWindow::showtextblock()
{
    QTextDocument* doc=ui->textEdit->document();
    QTextBlock block=doc->firstBlock();
    for(int i=0;i<doc->blockCount();i++)
    {
        qDebug()<<tr("textblock%1,lang%2,len%3,text%4").arg(i).arg(block.firstLineNumber()).arg(block.length())
                  .arg(block.text());
        block=block.next();
    }//Loop traversal to obtain text blocks
}

void MainWindow::getstyle(bool check)
{
      if(check)
      {
          QTextCursor cur=ui->textEdit->textCursor();
          QTextBlockFormat bb;
          bb.setAlignment(Qt::AlignCenter);
          cur.insertBlock(bb);//Set the style of the text block, it must be inserted to take effect
          QTextCharFormat charfor;
          charfor.setBackground(Qt::lightGray);//the current cursor of style
          charfor.setForeground(Qt::blue);//
          charfor.setFontUnderline(true);
          cur.setCharFormat(charfor);
          cur.insertText(tr("insert"));
      }else

      { QTextCursor cur=ui->textEdit->textCursor();
          QTextBlockFormat bb;
          bb.setAlignment(Qt::AlignLeft);
          cur.insertBlock(bb);//Set the style of the text block, it must be inserted to take effect
          QTextCharFormat charfor;
          cur.setCharFormat(charfor);
      }
}


void MainWindow::inserttable()
{
    QTextCursor cursor=ui->textEdit->textCursor();
    QTextTableFormat format;
    format.setCellSpacing(2);//kuan de jianju
    format.setCellPadding(10);//chang de jian ju
    cursor.insertTable(2,2,format);
}
void MainWindow::insertlist()
{
QTextListFormat format;
format.setStyle(QTextListFormat::ListCircle);
ui->textEdit->textCursor().insertList(format);
}
