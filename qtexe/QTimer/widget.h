#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTimer>
#include <vector>
QT_BEGIN_NAMESPACE
const int STOPTIME=1*1000;
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_startButton_clicked();
    void timeevents();

    //void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Widget *ui;
    QTimer* timer;
    std::vector<QString> pp;
    int start;
};
#endif // WIDGET_H
