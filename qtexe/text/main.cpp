#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();//Display the page
    return a.exec();//Block the main process to keep the page displayed indefinitely. Until clicking on x, the reject () signal is emitted, captured by exec(), and return 0.
}
