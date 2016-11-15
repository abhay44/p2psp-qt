#include "importbox.h"
#include "ui_importbox.h"
#include <QFileDialog>

importbox::importbox(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::importbox)
{
    ui->setupUi(this);
}

importbox::~importbox()
{
    delete ui;
}

void importbox::on_BrowseButton_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this,tr("Select files"),ui->FileEntry->text(),tr("Video files"));
    if(!fileName.isEmpty())
        ui->FileEntry->setText(fileName);
}
