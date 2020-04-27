/****************************************************************************
** Meta object code from reading C++ file 'commandetrain.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../QtrainSim/src/commandetrain.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'commandetrain.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CommandeTrain_t {
    QByteArrayData data[25];
    char stringdata0[288];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CommandeTrain_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CommandeTrain_t qt_meta_stringdata_CommandeTrain = {
    {
QT_MOC_LITERAL(0, 0, 13), // "CommandeTrain"
QT_MOC_LITERAL(1, 14, 7), // "addLoco"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 7), // "no_loco"
QT_MOC_LITERAL(4, 31, 7), // "setLoco"
QT_MOC_LITERAL(5, 39, 8), // "contactA"
QT_MOC_LITERAL(6, 48, 8), // "contactB"
QT_MOC_LITERAL(7, 57, 7), // "numLoco"
QT_MOC_LITERAL(8, 65, 11), // "vitesseLoco"
QT_MOC_LITERAL(9, 77, 7), // "askLoco"
QT_MOC_LITERAL(10, 85, 14), // "setVitesseLoco"
QT_MOC_LITERAL(11, 100, 11), // "reverseLoco"
QT_MOC_LITERAL(12, 112, 25), // "setVitesseProgressiveLoco"
QT_MOC_LITERAL(13, 138, 8), // "stopLoco"
QT_MOC_LITERAL(14, 147, 15), // "setVoieVariable"
QT_MOC_LITERAL(15, 163, 15), // "numVoieVariable"
QT_MOC_LITERAL(16, 179, 9), // "direction"
QT_MOC_LITERAL(17, 189, 14), // "selectMaquette"
QT_MOC_LITERAL(18, 204, 8), // "maquette"
QT_MOC_LITERAL(19, 213, 14), // "afficheMessage"
QT_MOC_LITERAL(20, 228, 7), // "message"
QT_MOC_LITERAL(21, 236, 18), // "afficheMessageLoco"
QT_MOC_LITERAL(22, 255, 11), // "commandSent"
QT_MOC_LITERAL(23, 267, 7), // "command"
QT_MOC_LITERAL(24, 275, 12) // "timerTrigger"

    },
    "CommandeTrain\0addLoco\0\0no_loco\0setLoco\0"
    "contactA\0contactB\0numLoco\0vitesseLoco\0"
    "askLoco\0setVitesseLoco\0reverseLoco\0"
    "setVitesseProgressiveLoco\0stopLoco\0"
    "setVoieVariable\0numVoieVariable\0"
    "direction\0selectMaquette\0maquette\0"
    "afficheMessage\0message\0afficheMessageLoco\0"
    "commandSent\0command\0timerTrigger"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CommandeTrain[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       4,    4,   82,    2, 0x06 /* Public */,
       9,    2,   91,    2, 0x06 /* Public */,
      10,    2,   96,    2, 0x06 /* Public */,
      11,    1,  101,    2, 0x06 /* Public */,
      12,    2,  104,    2, 0x06 /* Public */,
      13,    1,  109,    2, 0x06 /* Public */,
      14,    2,  112,    2, 0x06 /* Public */,
      17,    1,  117,    2, 0x06 /* Public */,
      19,    1,  120,    2, 0x06 /* Public */,
      21,    2,  123,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      22,    1,  128,    2, 0x0a /* Public */,
      24,    0,  131,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    5,    6,    7,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    7,    8,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    7,    8,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   15,   16,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    7,   20,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void,

       0        // eod
};

void CommandeTrain::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CommandeTrain *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addLoco((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setLoco((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 2: _t->askLoco((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->setVitesseLoco((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->reverseLoco((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setVitesseProgressiveLoco((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->stopLoco((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setVoieVariable((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->selectMaquette((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->afficheMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->afficheMessageLoco((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 11: _t->commandSent((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->timerTrigger(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CommandeTrain::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CommandeTrain::addLoco)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CommandeTrain::*)(int , int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CommandeTrain::setLoco)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CommandeTrain::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CommandeTrain::askLoco)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CommandeTrain::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CommandeTrain::setVitesseLoco)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CommandeTrain::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CommandeTrain::reverseLoco)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (CommandeTrain::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CommandeTrain::setVitesseProgressiveLoco)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (CommandeTrain::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CommandeTrain::stopLoco)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (CommandeTrain::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CommandeTrain::setVoieVariable)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (CommandeTrain::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CommandeTrain::selectMaquette)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (CommandeTrain::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CommandeTrain::afficheMessage)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (CommandeTrain::*)(int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CommandeTrain::afficheMessageLoco)) {
                *result = 10;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CommandeTrain::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_CommandeTrain.data,
    qt_meta_data_CommandeTrain,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CommandeTrain::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CommandeTrain::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CommandeTrain.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CommandeTrain::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void CommandeTrain::addLoco(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CommandeTrain::setLoco(int _t1, int _t2, int _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CommandeTrain::askLoco(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CommandeTrain::setVitesseLoco(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CommandeTrain::reverseLoco(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void CommandeTrain::setVitesseProgressiveLoco(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void CommandeTrain::stopLoco(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void CommandeTrain::setVoieVariable(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void CommandeTrain::selectMaquette(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void CommandeTrain::afficheMessage(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void CommandeTrain::afficheMessageLoco(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
