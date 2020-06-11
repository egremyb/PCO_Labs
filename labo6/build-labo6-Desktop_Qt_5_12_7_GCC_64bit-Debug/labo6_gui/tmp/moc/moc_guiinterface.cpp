/****************************************************************************
** Meta object code from reading C++ file 'guiinterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../code/labo6_gui/gui/src/guiinterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'guiinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GuiInterface_t {
    QByteArrayData data[32];
    char stringdata0[362];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GuiInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GuiInterface_t qt_meta_stringdata_GuiInterface = {
    {
QT_MOC_LITERAL(0, 0, 12), // "GuiInterface"
QT_MOC_LITERAL(1, 13, 20), // "sig_addThreadTrigger"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 8), // "threadId"
QT_MOC_LITERAL(4, 44, 4), // "time"
QT_MOC_LITERAL(5, 49, 11), // "sig_addTask"
QT_MOC_LITERAL(6, 61, 9), // "starttime"
QT_MOC_LITERAL(7, 71, 7), // "endtime"
QT_MOC_LITERAL(8, 79, 21), // "sid_addComputeRequest"
QT_MOC_LITERAL(9, 101, 4), // "text"
QT_MOC_LITERAL(10, 106, 19), // "sig_addRequestStart"
QT_MOC_LITERAL(11, 126, 2), // "id"
QT_MOC_LITERAL(12, 129, 13), // "sig_addResult"
QT_MOC_LITERAL(13, 143, 16), // "sig_addTaskStart"
QT_MOC_LITERAL(14, 160, 14), // "sig_addTaskEnd"
QT_MOC_LITERAL(15, 175, 18), // "sig_addTaskExecute"
QT_MOC_LITERAL(16, 194, 14), // "sig_logSpecial"
QT_MOC_LITERAL(17, 209, 4), // "what"
QT_MOC_LITERAL(18, 214, 5), // "char*"
QT_MOC_LITERAL(19, 220, 7), // "message"
QT_MOC_LITERAL(20, 228, 7), // "curTime"
QT_MOC_LITERAL(21, 236, 5), // "value"
QT_MOC_LITERAL(22, 242, 14), // "sig_logMessage"
QT_MOC_LITERAL(23, 257, 19), // "sig_addPeriodicTask"
QT_MOC_LITERAL(24, 277, 8), // "taskName"
QT_MOC_LITERAL(25, 286, 5), // "idate"
QT_MOC_LITERAL(26, 292, 6), // "period"
QT_MOC_LITERAL(27, 299, 8), // "deadline"
QT_MOC_LITERAL(28, 308, 25), // "sig_registerComputeEngine"
QT_MOC_LITERAL(29, 334, 4), // "name"
QT_MOC_LITERAL(30, 339, 14), // "sig_setNbTasks"
QT_MOC_LITERAL(31, 354, 7) // "nbTasks"

    },
    "GuiInterface\0sig_addThreadTrigger\0\0"
    "threadId\0time\0sig_addTask\0starttime\0"
    "endtime\0sid_addComputeRequest\0text\0"
    "sig_addRequestStart\0id\0sig_addResult\0"
    "sig_addTaskStart\0sig_addTaskEnd\0"
    "sig_addTaskExecute\0sig_logSpecial\0"
    "what\0char*\0message\0curTime\0value\0"
    "sig_logMessage\0sig_addPeriodicTask\0"
    "taskName\0idate\0period\0deadline\0"
    "sig_registerComputeEngine\0name\0"
    "sig_setNbTasks\0nbTasks"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GuiInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   79,    2, 0x06 /* Public */,
       5,    3,   84,    2, 0x06 /* Public */,
       8,    2,   91,    2, 0x06 /* Public */,
      10,    2,   96,    2, 0x06 /* Public */,
      12,    2,  101,    2, 0x06 /* Public */,
      13,    2,  106,    2, 0x06 /* Public */,
      14,    2,  111,    2, 0x06 /* Public */,
      15,    3,  116,    2, 0x06 /* Public */,
      16,    5,  123,    2, 0x06 /* Public */,
      22,    2,  134,    2, 0x06 /* Public */,
      23,    5,  139,    2, 0x06 /* Public */,
      28,    2,  150,    2, 0x06 /* Public */,
      30,    1,  155,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::LongLong,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::LongLong, QMetaType::LongLong,    3,    6,    7,
    QMetaType::Void, QMetaType::LongLong, QMetaType::QString,    4,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::LongLong,   11,    4,
    QMetaType::Void, QMetaType::LongLong, QMetaType::QString,    4,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::LongLong,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::LongLong,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::LongLong, QMetaType::LongLong,    3,    6,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 18, QMetaType::LongLong, QMetaType::LongLong,    3,   17,   19,   20,   21,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,   19,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 18, QMetaType::LongLong, QMetaType::LongLong, QMetaType::LongLong,    3,   24,   25,   26,   27,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,   29,
    QMetaType::Void, QMetaType::Int,   31,

       0        // eod
};

void GuiInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GuiInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_addThreadTrigger((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< long long(*)>(_a[2]))); break;
        case 1: _t->sig_addTask((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< long long(*)>(_a[2])),(*reinterpret_cast< long long(*)>(_a[3]))); break;
        case 2: _t->sid_addComputeRequest((*reinterpret_cast< long long(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->sig_addRequestStart((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< long long(*)>(_a[2]))); break;
        case 4: _t->sig_addResult((*reinterpret_cast< long long(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->sig_addTaskStart((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< long long(*)>(_a[2]))); break;
        case 6: _t->sig_addTaskEnd((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< long long(*)>(_a[2]))); break;
        case 7: _t->sig_addTaskExecute((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< long long(*)>(_a[2])),(*reinterpret_cast< long long(*)>(_a[3]))); break;
        case 8: _t->sig_logSpecial((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< char*(*)>(_a[3])),(*reinterpret_cast< long long(*)>(_a[4])),(*reinterpret_cast< long long(*)>(_a[5]))); break;
        case 9: _t->sig_logMessage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 10: _t->sig_addPeriodicTask((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< char*(*)>(_a[2])),(*reinterpret_cast< long long(*)>(_a[3])),(*reinterpret_cast< long long(*)>(_a[4])),(*reinterpret_cast< long long(*)>(_a[5]))); break;
        case 11: _t->sig_registerComputeEngine((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 12: _t->sig_setNbTasks((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GuiInterface::*)(int , long long );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiInterface::sig_addThreadTrigger)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GuiInterface::*)(int , long long , long long );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiInterface::sig_addTask)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GuiInterface::*)(long long , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiInterface::sid_addComputeRequest)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GuiInterface::*)(int , long long );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiInterface::sig_addRequestStart)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (GuiInterface::*)(long long , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiInterface::sig_addResult)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (GuiInterface::*)(int , long long );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiInterface::sig_addTaskStart)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (GuiInterface::*)(int , long long );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiInterface::sig_addTaskEnd)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (GuiInterface::*)(int , long long , long long );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiInterface::sig_addTaskExecute)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (GuiInterface::*)(int , int , char * , long long , long long );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiInterface::sig_logSpecial)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (GuiInterface::*)(int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiInterface::sig_logMessage)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (GuiInterface::*)(int , char * , long long , long long , long long );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiInterface::sig_addPeriodicTask)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (GuiInterface::*)(int , const QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiInterface::sig_registerComputeEngine)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (GuiInterface::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiInterface::sig_setNbTasks)) {
                *result = 12;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GuiInterface::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_GuiInterface.data,
    qt_meta_data_GuiInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GuiInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GuiInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GuiInterface.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GuiInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void GuiInterface::sig_addThreadTrigger(int _t1, long long _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GuiInterface::sig_addTask(int _t1, long long _t2, long long _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GuiInterface::sid_addComputeRequest(long long _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GuiInterface::sig_addRequestStart(int _t1, long long _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GuiInterface::sig_addResult(long long _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void GuiInterface::sig_addTaskStart(int _t1, long long _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void GuiInterface::sig_addTaskEnd(int _t1, long long _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void GuiInterface::sig_addTaskExecute(int _t1, long long _t2, long long _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void GuiInterface::sig_logSpecial(int _t1, int _t2, char * _t3, long long _t4, long long _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void GuiInterface::sig_logMessage(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void GuiInterface::sig_addPeriodicTask(int _t1, char * _t2, long long _t3, long long _t4, long long _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void GuiInterface::sig_registerComputeEngine(int _t1, const QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void GuiInterface::sig_setNbTasks(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
