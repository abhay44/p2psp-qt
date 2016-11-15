#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
mainwindow::mainwindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mainwindow)
{
    ui->setupUi(this);
//    QPixmap pix("/home/billy/p2psp/mainwindow/playicon.gif");
//    int w = ui->play_label->width();
//    int h = ui->play_label->height();
//    ui->play_label->setPixmap(pix.scaled(w,100,Qt::KeepAspectRatio));
}

mainwindow::~mainwindow()
{
    delete ui;
}
