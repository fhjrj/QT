#include "mysynath.h"
#include <QTextCharFormat>
#include <QString>
#include <QRegExp>
MySynatH::MySynatH(QObject *parent):QSyntaxHighlighter(parent)
{

}

MySynatH::~MySynatH()
{

}

void MySynatH::highlightBlock(const QString &text)
{
    QTextCharFormat myformat;
    myformat.setFontWeight(QFont::Bold);
    myformat.setForeground(Qt::green);

    QString patten="\\bchar\\b";
    QRegExp express(patten);
    int index=text.indexOf(express);
while(index>0)
{
    int match=express.matchedLength();
    setFormat(index,match,myformat);
    index=text.indexOf(express,index+match);
}



}
