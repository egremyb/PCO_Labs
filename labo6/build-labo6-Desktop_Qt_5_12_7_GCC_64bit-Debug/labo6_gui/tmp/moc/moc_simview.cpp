/****************************************************************************
** Meta object code from reading C++ file 'simview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../code/labo6_gui/gui/src/simview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'simview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SimView_t {
    QByteArrayData data[34];
    char stringdata0[329];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SimView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SimView_t qt_meta_stringdata_SimView = {
    {
QT_MOC_LITERAL(0, 0, 7), // "SimView"
QT_MOC_LITERAL(1, 8, 16), // "addThreadTrigger"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 8), // "threadId"
QT_MOC_LITERAL(4, 35, 4), // "time"
QT_MOC_LITERAL(5, 40, 17), // "addComputeRequest"
QT_MOC_LITERAL(6, 58, 4), // "text"
QT_MOC_LITERAL(7, 63, 15), // "addRequestStart"
QT_MOC_LITERAL(8, 79, 2), // "id"
QT_MOC_LITERAL(9, 82, 9), // "addResult"
QT_MOC_LITERAL(10, 92, 12), // "addTaskStart"
QT_MOC_LITERAL(11, 105, 10), // "addTaskEnd"
QT_MOC_LITERAL(12, 116, 7), // "addTask"
QT_MOC_LITERAL(13, 124, 9), // "starttime"
QT_MOC_LITERAL(14, 134, 7), // "endtime"
QT_MOC_LITERAL(15, 142, 14), // "addTaskExecute"
QT_MOC_LITERAL(16, 157, 15), // "addPeriodicTask"
QT_MOC_LITERAL(17, 173, 5), // "char*"
QT_MOC_LITERAL(18, 179, 8), // "taskName"
QT_MOC_LITERAL(19, 188, 5), // "idate"
QT_MOC_LITERAL(20, 194, 6), // "period"
QT_MOC_LITERAL(21, 201, 8), // "deadline"
QT_MOC_LITERAL(22, 210, 21), // "registerComputeEngine"
QT_MOC_LITERAL(23, 232, 4), // "name"
QT_MOC_LITERAL(24, 237, 10), // "setNbTasks"
QT_MOC_LITERAL(25, 248, 7), // "nbTasks"
QT_MOC_LITERAL(26, 256, 10), // "logSpecial"
QT_MOC_LITERAL(27, 267, 4), // "what"
QT_MOC_LITERAL(28, 272, 7), // "message"
QT_MOC_LITERAL(29, 280, 7), // "curTime"
QT_MOC_LITERAL(30, 288, 5), // "value"
QT_MOC_LITERAL(31, 294, 15), // "mousePressEvent"
QT_MOC_LITERAL(32, 310, 12), // "QMouseEvent*"
QT_MOC_LITERAL(33, 323, 5) // "event"

    },
    "SimView\0addThreadTrigger\0\0threadId\0"
    "time\0addComputeRequest\0text\0addRequestStart\0"
    "id\0addResult\0addTaskStart\0addTaskEnd\0"
    "addTask\0starttime\0endtime\0addTaskExecute\0"
    "addPeriodicTask\0char*\0taskName\0idate\0"
    "period\0deadline\0registerComputeEngine\0"
    "name\0setNbTasks\0nbTasks\0logSpecial\0"
    "what\0message\0curTime\0value\0mousePressEvent\0"
    "QMouseEvent*\0event"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SimView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   79,    2, 0x0a /* Public */,
       5,    2,   84,    2, 0x0a /* Public */,
       7,    2,   89,    2, 0x0a /* Public */,
       9,    2,   94,    2, 0x0a /* Public */,
      10,    2,   99,    2, 0x0a /* Public */,
      11,    2,  104,    2, 0x0a /* Public */,
      12,    3,  109,    2, 0x0a /* Public */,
      15,    3,  116,    2, 0x0a /* Public */,
      16,    5,  123,    2, 0x0a /* Public */,
      22,    2,  134,    2, 0x0a /* Public */,
      24,    1,  139,    2, 0x0a /* Public */,
      26,    5,  142,    2, 0x0a /* Public */,
      31,    1,  153,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::LongLong,    3,    4,
    QMetaType::Void, QMetaType::LongLong, QMetaType::QString,    4,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::LongLong,    8,    4,
    QMetaType::Void, QMetaType::LongLong, QMetaType::QString,    4,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::LongLong,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::LongLong,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::LongLong, QMetaType::LongLong,    3,   13,   14,
    QMetaType::Void, QMetaType::Int, QMetaType::LongLong, QMetaType::LongLong,    3,   13,   14,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 17, QMetaType::LongLong, QMetaType::LongLong, QMetaType::LongLong,    3,   18,   19,   20,   21,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,   23,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 17, QMetaType::LongLong, QMetaType::LongLong,    3,   27,   28,   29,   30,
    QMetaType::Void, 0x80000000 | 32,   33,

       0        // eod
};

void SimView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SimView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addThreadTrigger((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< long long(*)>(_a[2]))); break;
        case 1: _t->addComputeRequest((*reinterpret_cast< long long(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->addRequestStart((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< long long(*)>(_a[2]))); break;
        case 3: _t->addResult((*reinterpret_cast< long long(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->addTaskStart((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< long long(*)>(_a[2]))); break;
        case 5: _t->addTaskEnd((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< long long(*)>(_a[2]))); break;
        case 6: _t->addTask((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< long long(*)>(_a[2])),(*reinterpret_cast< long long(*)>(_a[3]))); break;
        case 7: _t->addTaskExecute((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< long long(*)>(_a[2])),(*reinterpret_cast< long long(*)>(_a[3]))); break;
        case 8: _t->addPeriodicTask((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< char*(*)>(_a[2])),(*reinterpret_cast< long long(*)>(_a[3])),(*reinterpret_cast< long long(*)>(_a[4])),(*reinterpret_cast< long long(*)>(_a[5]))); break;
        case 9: _t->registerComputeEngine((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 10: _t->setNbTasks((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->logSpecial((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< char*(*)>(_a[3])),(*reinterpret_cast< long long(*)>(_a[4])),(*reinterpret_cast< long long(*)>(_a[5]))); break;
        case 12: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SimView::staticMetaObject = { {
    &QGraphicsView::staticMetaObject,
    qt_meta_stringdata_SimView.data,
    qt_meta_data_SimView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SimView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SimView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SimView.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsView::qt_metacast(_clname);
}

int SimView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
