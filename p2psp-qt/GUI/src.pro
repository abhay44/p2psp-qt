
TARGET      = simple-player
TEMPLATE    = app
CONFIG 	   += c++11

QT         += widgets

SOURCES    += main.cpp \
    SimplePlayer.cpp \
    add_dialog.cpp

HEADERS    += SimplePlayer.h \
    add_dialog.h

FORMS      += SimplePlayer.ui \
    add_dialog.ui
LIBS       += -lVLCQtCore -lVLCQtWidgets


# Edit below for custom library location
LIBS       += -L/Users/tadej/workspace/tanoprojects/install/vlc-qt/lib -lVLCQtCore -lVLCQtWidgets
INCLUDEPATH += /Users/tadej/workspace/tanoprojects/install/vlc-qt/include

RESOURCES += \
    icons.qrc
