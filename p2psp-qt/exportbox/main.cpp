#include "exportbox.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    exportbox w;
    w.show();

    return a.exec();
}
