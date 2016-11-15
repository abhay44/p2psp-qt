#include "edit_dialog.h"
#include "ui_edit_dialog.h"

edit_dialog::edit_dialog(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::edit_dialog)
{
    ui->setupUi(this);
}

edit_dialog::~edit_dialog()
{
    delete ui;
}
