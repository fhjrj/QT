#include "myaction.h"
#include <QLabel>
#include <QSplitter>
Myaction::Myaction(QObject* parent):QWidgetAction(parent)
{
   lineEdit=new QLineEdit();
   //connect
   connect(lineEdit,&QLineEdit::returnPressed,this,&Myaction::sendText);
}


void Myaction::sendText(){
    emit getText(lineEdit->text());//Send a string as informatio
    lineEdit->clear();
}

QWidget* Myaction::createWidget(QWidget *parent){//The formal parameter is the QMenu class that calls this function
    if(!(parent->inherits("QMenu"))&&!(parent->inherits("QToolBar"))){//Inherited parent node
        return 0;
    }

    QSplitter* spliter=new QSplitter(parent);
    QLabel* label=new QLabel;
    label->setText(tr("insert message"));
    spliter->addWidget(label);
    spliter->addWidget(lineEdit);
    return spliter;
}
