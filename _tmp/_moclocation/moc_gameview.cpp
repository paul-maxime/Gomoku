/****************************************************************************
** Meta object code from reading C++ file 'gameview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Interface/gameview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gameview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GameView_t {
    QByteArrayData data[17];
    char stringdata[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GameView_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GameView_t qt_meta_stringdata_GameView = {
    {
QT_MOC_LITERAL(0, 0, 8),
QT_MOC_LITERAL(1, 9, 10),
QT_MOC_LITERAL(2, 20, 0),
QT_MOC_LITERAL(3, 21, 6),
QT_MOC_LITERAL(4, 28, 15),
QT_MOC_LITERAL(5, 44, 12),
QT_MOC_LITERAL(6, 57, 5),
QT_MOC_LITERAL(7, 63, 11),
QT_MOC_LITERAL(8, 75, 13),
QT_MOC_LITERAL(9, 89, 12),
QT_MOC_LITERAL(10, 102, 13),
QT_MOC_LITERAL(11, 116, 6),
QT_MOC_LITERAL(12, 123, 1),
QT_MOC_LITERAL(13, 125, 1),
QT_MOC_LITERAL(14, 127, 11),
QT_MOC_LITERAL(15, 139, 11),
QT_MOC_LITERAL(16, 151, 5)
    },
    "GameView\0mouseEvent\0\0redraw\0mousePressEvent\0"
    "QMouseEvent*\0event\0resizeEvent\0"
    "QResizeEvent*\0onGamePlayed\0Logic::Player\0"
    "player\0x\0y\0onGameError\0std::string\0"
    "error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GameView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   49,    2, 0x0a /* Public */,
       4,    1,   50,    2, 0x0a /* Public */,
       7,    1,   53,    2, 0x0a /* Public */,
       9,    3,   56,    2, 0x08 /* Private */,
      14,    1,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    6,
    QMetaType::Void, 0x80000000 | 10, QMetaType::UInt, QMetaType::UInt,   11,   12,   13,
    QMetaType::Void, 0x80000000 | 15,   16,

       0        // eod
};

void GameView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GameView *_t = static_cast<GameView *>(_o);
        switch (_id) {
        case 0: _t->mouseEvent((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 1: _t->redraw(); break;
        case 2: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 3: _t->resizeEvent((*reinterpret_cast< QResizeEvent*(*)>(_a[1]))); break;
        case 4: _t->onGamePlayed((*reinterpret_cast< const Logic::Player(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 5: _t->onGameError((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GameView::*_t)(unsigned int , unsigned int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GameView::mouseEvent)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject GameView::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_GameView.data,
      qt_meta_data_GameView,  qt_static_metacall, 0, 0}
};


const QMetaObject *GameView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GameView.stringdata))
        return static_cast<void*>(const_cast< GameView*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int GameView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void GameView::mouseEvent(unsigned int _t1, unsigned int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
