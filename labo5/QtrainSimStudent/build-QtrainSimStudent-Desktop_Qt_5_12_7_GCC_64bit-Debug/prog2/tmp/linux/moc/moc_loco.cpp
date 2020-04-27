/****************************************************************************
** Meta object code from reading C++ file 'loco.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../QtrainSim/src/loco.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'loco.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_panneauNumLoco_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_panneauNumLoco_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_panneauNumLoco_t qt_meta_stringdata_panneauNumLoco = {
    {
QT_MOC_LITERAL(0, 0, 14) // "panneauNumLoco"

    },
    "panneauNumLoco"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_panneauNumLoco[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void panneauNumLoco::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject panneauNumLoco::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_panneauNumLoco.data,
    qt_meta_data_panneauNumLoco,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *panneauNumLoco::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *panneauNumLoco::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_panneauNumLoco.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QAbstractGraphicsShapeItem"))
        return static_cast< QAbstractGraphicsShapeItem*>(this);
    return QObject::qt_metacast(_clname);
}

int panneauNumLoco::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_Loco_t {
    QByteArrayData data[16];
    char stringdata0[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Loco_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Loco_t qt_meta_stringdata_Loco = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Loco"
QT_MOC_LITERAL(1, 5, 14), // "nouveauSegment"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 8), // "Contact*"
QT_MOC_LITERAL(4, 30, 4), // "ctc1"
QT_MOC_LITERAL(5, 35, 4), // "ctc2"
QT_MOC_LITERAL(6, 40, 5), // "Loco*"
QT_MOC_LITERAL(7, 46, 1), // "l"
QT_MOC_LITERAL(8, 48, 12), // "deraillement"
QT_MOC_LITERAL(9, 61, 14), // "locoSurSegment"
QT_MOC_LITERAL(10, 76, 8), // "Segment*"
QT_MOC_LITERAL(11, 85, 1), // "s"
QT_MOC_LITERAL(12, 87, 20), // "voieVariableModifiee"
QT_MOC_LITERAL(13, 108, 5), // "Voie*"
QT_MOC_LITERAL(14, 114, 1), // "v"
QT_MOC_LITERAL(15, 116, 14) // "adapterVitesse"

    },
    "Loco\0nouveauSegment\0\0Contact*\0ctc1\0"
    "ctc2\0Loco*\0l\0deraillement\0locoSurSegment\0"
    "Segment*\0s\0voieVariableModifiee\0Voie*\0"
    "v\0adapterVitesse"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Loco[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   39,    2, 0x06 /* Public */,
       8,    1,   46,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   49,    2, 0x0a /* Public */,
      12,    1,   52,    2, 0x0a /* Public */,
      15,    0,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 6,    4,    5,    7,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,

       0        // eod
};

void Loco::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Loco *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nouveauSegment((*reinterpret_cast< Contact*(*)>(_a[1])),(*reinterpret_cast< Contact*(*)>(_a[2])),(*reinterpret_cast< Loco*(*)>(_a[3]))); break;
        case 1: _t->deraillement((*reinterpret_cast< Loco*(*)>(_a[1]))); break;
        case 2: _t->locoSurSegment((*reinterpret_cast< Segment*(*)>(_a[1]))); break;
        case 3: _t->voieVariableModifiee((*reinterpret_cast< Voie*(*)>(_a[1]))); break;
        case 4: _t->adapterVitesse(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Contact* >(); break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Loco* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Loco* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Segment* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Voie* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Loco::*)(Contact * , Contact * , Loco * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Loco::nouveauSegment)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Loco::*)(Loco * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Loco::deraillement)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Loco::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Loco.data,
    qt_meta_data_Loco,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Loco::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Loco::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Loco.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QAbstractGraphicsShapeItem"))
        return static_cast< QAbstractGraphicsShapeItem*>(this);
    return QObject::qt_metacast(_clname);
}

int Loco::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Loco::nouveauSegment(Contact * _t1, Contact * _t2, Loco * _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Loco::deraillement(Loco * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
