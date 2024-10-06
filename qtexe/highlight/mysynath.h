#ifndef MYSYNATH_H
#define MYSYNATH_H
#include <QSyntaxHighlighter>
#include <QTextDocument>
#include <QObject>
class MySynatH : public QSyntaxHighlighter
{
public:
    explicit MySynatH(QObject* parent=nullptr);
    ~MySynatH();
protected:
    virtual void highlightBlock(const QString& text);
};

#endif // MYSYNATH_H
