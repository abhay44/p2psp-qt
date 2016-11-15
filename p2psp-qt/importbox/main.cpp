#include "importbox.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    importbox w;
    w.show();

    return a.exec();
}
