#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <vector>

const int TIMEOUT=1*1000;
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    virtual void  timerEvent(QTimerEvent* event);
    ~Widget();

private slots:
    void on_startButton_clicked();

    void on_stopButton_clicked();

private:
    Ui::Widget *ui;
    int mytimrtid;
    std::vector<QString> mm;
    int start;
};
#endif // WIDGET_H
