/****************************************************************************
** Meta object code from reading C++ file 'SimplePlayer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "SimplePlayer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SimplePlayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SimplePlayer_t {
    QByteArrayData data[8];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SimplePlayer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SimplePlayer_t qt_meta_stringdata_SimplePlayer = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SimplePlayer"
QT_MOC_LITERAL(1, 13, 9), // "openLocal"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 19), // "on_checkBox_clicked"
QT_MOC_LITERAL(4, 44, 7), // "checked"
QT_MOC_LITERAL(5, 52, 21), // "on_fullscreen_clicked"
QT_MOC_LITERAL(6, 74, 16), // "on_pause_clicked"
QT_MOC_LITERAL(7, 91, 22) // "on_actionAdd_triggered"

    },
    "SimplePlayer\0openLocal\0\0on_checkBox_clicked\0"
    "checked\0on_fullscreen_clicked\0"
    "on_pause_clicked\0on_actionAdd_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SimplePlayer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    1,   40,    2, 0x08 /* Private */,
       5,    1,   43,    2, 0x08 /* Private */,
       6,    1,   46,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,

       0        // eod
};

void SimplePlayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SimplePlayer *_t = static_cast<SimplePlayer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->openLocal(); break;
        case 1: _t->on_checkBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_fullscreen_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_pause_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_actionAdd_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject SimplePlayer::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_SimplePlayer.data,
      qt_meta_data_SimplePlayer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SimplePlayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SimplePlayer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SimplePlayer.stringdata0))
        return static_cast<void*>(const_cast< SimplePlayer*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int SimplePlayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
