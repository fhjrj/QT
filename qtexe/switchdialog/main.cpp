#include "maindialog.h"

#include <QApplication>
#include "childdialog.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
      childDialog p;
    MainDialog w(nullptr/*,&p*/);

    auto g=p.exec();
    if(g==QDialog::Accepted){
        w.show();
        a.exec();
    }else{
        return 0;
    }
   // w.show();
   // return a.exec();
}
