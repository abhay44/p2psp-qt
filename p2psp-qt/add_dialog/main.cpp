#include "add_dialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    add_dialog w;
    w.show();

    return a.exec();
}
