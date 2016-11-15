#include "exportbox.h"
#include "ui_exportbox.h"

exportbox::exportbox(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::exportbox)
{
    ui->setupUi(this);
}

exportbox::~exportbox()
{
    delete ui;
}
