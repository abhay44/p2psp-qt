#ifndef EDIT_DIALOG_H
#define EDIT_DIALOG_H

#include <QMainWindow>

namespace Ui {
class edit_dialog;
}

class edit_dialog : public QMainWindow
{
    Q_OBJECT

public:
    explicit edit_dialog(QWidget *parent = 0);
    ~edit_dialog();

private:
    Ui::edit_dialog *ui;
};

#endif // EDIT_DIALOG_H
