#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QKeyEvent>
#include <QMouseEvent>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void KeyPressEvent(QKeyEvent* k);
    void mousePressEvent(QMouseEvent* m);
    ~MainWindow();

private slots:
    void newActionslot();
    void openActionslot();
    void saveActionslot();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
