#ifndef ADD_DIALOG_H
#define ADD_DIALOG_H

#include <QMainWindow>

namespace Ui {
class add_dialog;
}

class add_dialog : public QMainWindow
{
    Q_OBJECT

public:
    explicit add_dialog(QWidget *parent = 0);
    ~add_dialog();

private:
    Ui::add_dialog *ui;
};

#endif // ADD_DIALOG_H
