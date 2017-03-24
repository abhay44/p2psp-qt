#ifndef SIMPLEPLAYER_H_
#define SIMPLEPLAYER_H_

#include <QMainWindow>

namespace Ui {
    class SimplePlayer;
}

class VlcInstance;
class VlcMedia;
class VlcMediaPlayer;
class VlcEnums;

//class EqualizerDialog;

class SimplePlayer : public QMainWindow
{
    Q_OBJECT
public:
    explicit SimplePlayer(QWidget *parent = 0);
    ~SimplePlayer();

private slots:
    void openLocal();
//    void openUrl();

    void on_checkBox_clicked(bool checked);


    void on_fullscreen_clicked(bool checked);

/*    void on_fullscreen_clicked()*/;

    void on_pause_clicked(bool checked);

    void on_actionAdd_triggered();

private:
    Ui::SimplePlayer *ui;

    VlcInstance *_instance;
    VlcMedia *_media;
    VlcMediaPlayer *_player;

//    EqualizerDialog *_equalizerDialog;
};

#endif // SIMPLEPLAYER_H_
