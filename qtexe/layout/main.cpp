#include "login.h"
#include "logger.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    std::shared_ptr<Login> w=std::make_shared<Login> ();
       w->initSignals();
       w->show();
    //logger w;
    //w.show();
    return a.exec();
}
