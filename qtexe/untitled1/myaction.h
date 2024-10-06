#ifndef MYACTION_H
#define MYACTION_H
#include <QWidgetAction>
#include <QLineEdit>
#include <QObject>
class Myaction:public QWidgetAction
{

   Q_OBJECT
signals:
    void getText(const QString& string_);
public:
    Myaction(QObject* parent);
protected:
    virtual  QWidget* createWidget(QWidget* parent=nullptr) ;//This function is usually set in QAction or its inheritance class.
    //If QMenu adds behavior, this function will be automatically called
private:
    QLineEdit* lineEdit;
private :
    void sendText();
};

#endif // MYACTION_H
