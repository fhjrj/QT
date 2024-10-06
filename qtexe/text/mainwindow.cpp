#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);//The function is used to create a display page, but it has not yet been displayed. To display the interface, the show() method needs to be called.
}

MainWindow::~MainWindow()
{
    delete ui;
}

