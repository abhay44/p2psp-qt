#ifndef IMPORTBOX_H
#define IMPORTBOX_H

#include <QMainWindow>

namespace Ui {
class importbox;
}

class importbox : public QMainWindow
{
    Q_OBJECT

public:
    explicit importbox(QWidget *parent = 0);
    ~importbox();

private slots:
    void on_BrowseButton_clicked();

private:
    Ui::importbox *ui;
};

#endif // IMPORTBOX_H
