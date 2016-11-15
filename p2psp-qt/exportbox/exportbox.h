#ifndef EXPORTBOX_H
#define EXPORTBOX_H

#include <QMainWindow>

namespace Ui {
class exportbox;
}

class exportbox : public QMainWindow
{
    Q_OBJECT

public:
    explicit exportbox(QWidget *parent = 0);
    ~exportbox();

private:
    Ui::exportbox *ui;
};

#endif // EXPORTBOX_H
