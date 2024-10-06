#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QProgressDialog>
#include <QTimer>
#include <QWizard>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_colorButton_clicked();

    void on_txtButton_clicked();

    void on_intergerButton_clicked();

    void on_Floatingpoint_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_ProgresButton_clicked();
     void on_update_processingdialog();

     void on_pushButton_4_clicked();

private:
    Ui::MainWindow *ui;
   QProgressDialog* _processingWindow;
   QTimer* _timer;
   int counter;
   QWizard* wizard;
};
#endif // MAINWINDOW_H
