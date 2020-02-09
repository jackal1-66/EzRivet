#include "ezrivet.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    EzRivet w;
    w.show();
    return a.exec();
}
