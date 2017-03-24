/********************************************************************************
** Form generated from reading UI file 'SimplePlayer.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMPLEPLAYER_H
#define UI_SIMPLEPLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include <VLCQtWidgets/WidgetVideo.h>
#include "VLCQtWidgets/WidgetVolumeSlider.h"

QT_BEGIN_NAMESPACE

class Ui_SimplePlayer
{
public:
    QAction *actionQuit;
    QAction *actionPause;
    QAction *actionStop;
    QAction *actionOpenLocal;
    QAction *actionAdd;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    VlcWidgetVideo *video;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pause;
    QPushButton *stop;
    QPushButton *openLocal;
    QLabel *label;
    VlcWidgetVolumeSlider *volume;
    QPushButton *fullscreen;
    QLabel *seaprator_full;
    QLabel *download_icon;
    QLabel *download_speed;
    QLabel *upload_icon;
    QLabel *upload_speed;
    QLabel *Separator_icon;
    QLabel *users;
    QCheckBox *checkBox;
    QSpacerItem *horizontalSpacer;
    QMenuBar *menubar;
    QMenu *menuMedia;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SimplePlayer)
    {
        if (SimplePlayer->objectName().isEmpty())
            SimplePlayer->setObjectName(QStringLiteral("SimplePlayer"));
        SimplePlayer->resize(812, 478);
        actionQuit = new QAction(SimplePlayer);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        actionPause = new QAction(SimplePlayer);
        actionPause->setObjectName(QStringLiteral("actionPause"));
        actionPause->setCheckable(true);
        actionStop = new QAction(SimplePlayer);
        actionStop->setObjectName(QStringLiteral("actionStop"));
        actionOpenLocal = new QAction(SimplePlayer);
        actionOpenLocal->setObjectName(QStringLiteral("actionOpenLocal"));
        actionAdd = new QAction(SimplePlayer);
        actionAdd->setObjectName(QStringLiteral("actionAdd"));
        centralwidget = new QWidget(SimplePlayer);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        video = new VlcWidgetVideo(centralwidget);
        video->setObjectName(QStringLiteral("video"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(video->sizePolicy().hasHeightForWidth());
        video->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(video);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(groupBox);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pause = new QPushButton(centralwidget);
        pause->setObjectName(QStringLiteral("pause"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QStringLiteral(":/icons/pause.png"), QSize(), QIcon::Normal, QIcon::On);
        pause->setIcon(icon);
        pause->setCheckable(true);

        horizontalLayout_4->addWidget(pause);

        stop = new QPushButton(centralwidget);
        stop->setObjectName(QStringLiteral("stop"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/stop.png"), QSize(), QIcon::Normal, QIcon::On);
        stop->setIcon(icon1);

        horizontalLayout_4->addWidget(stop);

        openLocal = new QPushButton(centralwidget);
        openLocal->setObjectName(QStringLiteral("openLocal"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/file.png"), QSize(), QIcon::Normal, QIcon::On);
        openLocal->setIcon(icon2);

        horizontalLayout_4->addWidget(openLocal);

        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/icons/volume_1.png")));

        horizontalLayout_4->addWidget(label);

        volume = new VlcWidgetVolumeSlider(centralwidget);
        volume->setObjectName(QStringLiteral("volume"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(volume->sizePolicy().hasHeightForWidth());
        volume->setSizePolicy(sizePolicy2);
        volume->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(volume);

        fullscreen = new QPushButton(centralwidget);
        fullscreen->setObjectName(QStringLiteral("fullscreen"));
        fullscreen->setStyleSheet(QStringLiteral(""));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/full_in.png"), QSize(), QIcon::Normal, QIcon::Off);
        fullscreen->setIcon(icon3);

        horizontalLayout_4->addWidget(fullscreen);

        seaprator_full = new QLabel(centralwidget);
        seaprator_full->setObjectName(QStringLiteral("seaprator_full"));
        seaprator_full->setPixmap(QPixmap(QString::fromUtf8("icons/vertical_separator.png")));

        horizontalLayout_4->addWidget(seaprator_full);

        download_icon = new QLabel(centralwidget);
        download_icon->setObjectName(QStringLiteral("download_icon"));
        download_icon->setPixmap(QPixmap(QString::fromUtf8(":/icons/download.png")));

        horizontalLayout_4->addWidget(download_icon);

        download_speed = new QLabel(centralwidget);
        download_speed->setObjectName(QStringLiteral("download_speed"));

        horizontalLayout_4->addWidget(download_speed);

        upload_icon = new QLabel(centralwidget);
        upload_icon->setObjectName(QStringLiteral("upload_icon"));
        upload_icon->setPixmap(QPixmap(QString::fromUtf8(":/icons/upload.png")));

        horizontalLayout_4->addWidget(upload_icon);

        upload_speed = new QLabel(centralwidget);
        upload_speed->setObjectName(QStringLiteral("upload_speed"));

        horizontalLayout_4->addWidget(upload_speed);

        Separator_icon = new QLabel(centralwidget);
        Separator_icon->setObjectName(QStringLiteral("Separator_icon"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(Separator_icon->sizePolicy().hasHeightForWidth());
        Separator_icon->setSizePolicy(sizePolicy3);
        Separator_icon->setPixmap(QPixmap(QString::fromUtf8(":/icons/vertical_separator.png")));

        horizontalLayout_4->addWidget(Separator_icon);

        users = new QLabel(centralwidget);
        users->setObjectName(QStringLiteral("users"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(users->sizePolicy().hasHeightForWidth());
        users->setSizePolicy(sizePolicy4);

        horizontalLayout_4->addWidget(users);

        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        horizontalLayout_4->addWidget(checkBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout_4, 1, 0, 1, 3);

        SimplePlayer->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SimplePlayer);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 812, 27));
        menuMedia = new QMenu(menubar);
        menuMedia->setObjectName(QStringLiteral("menuMedia"));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        SimplePlayer->setMenuBar(menubar);
        statusbar = new QStatusBar(SimplePlayer);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        SimplePlayer->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuMedia->menuAction());
        menuMedia->addAction(actionPause);
        menuMedia->addAction(actionStop);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuFile->addAction(actionAdd);

        retranslateUi(SimplePlayer);
        QObject::connect(actionQuit, SIGNAL(triggered()), SimplePlayer, SLOT(close()));

        QMetaObject::connectSlotsByName(SimplePlayer);
    } // setupUi

    void retranslateUi(QMainWindow *SimplePlayer)
    {
        SimplePlayer->setWindowTitle(QApplication::translate("SimplePlayer", "Demo Player", Q_NULLPTR));
        actionQuit->setText(QApplication::translate("SimplePlayer", "Quit", Q_NULLPTR));
        actionPause->setText(QApplication::translate("SimplePlayer", "Pause", Q_NULLPTR));
        actionStop->setText(QApplication::translate("SimplePlayer", "Stop", Q_NULLPTR));
        actionOpenLocal->setText(QApplication::translate("SimplePlayer", "Open local file", Q_NULLPTR));
        actionAdd->setText(QApplication::translate("SimplePlayer", " Add Chnnels", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("SimplePlayer", "Channels", Q_NULLPTR));
        pause->setText(QString());
        stop->setText(QString());
        openLocal->setText(QString());
        label->setText(QString());
        fullscreen->setText(QString());
        seaprator_full->setText(QString());
        download_icon->setText(QString());
        download_speed->setText(QApplication::translate("SimplePlayer", "0 kbps", Q_NULLPTR));
        upload_icon->setText(QString());
        upload_speed->setText(QApplication::translate("SimplePlayer", "0 kbps", Q_NULLPTR));
        Separator_icon->setText(QString());
        users->setText(QApplication::translate("SimplePlayer", "Users Online : 0", Q_NULLPTR));
        checkBox->setText(QApplication::translate("SimplePlayer", "Show Channels", Q_NULLPTR));
        menuMedia->setTitle(QApplication::translate("SimplePlayer", "Media", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("SimplePlayer", "File", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SimplePlayer: public Ui_SimplePlayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMPLEPLAYER_H
