#include "add_dialog.h"
#include "ui_add_dialog.h"

add_dialog::add_dialog(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::add_dialog)
{
    ui->setupUi(this);
}

add_dialog::~add_dialog()
{
    delete ui;
}
