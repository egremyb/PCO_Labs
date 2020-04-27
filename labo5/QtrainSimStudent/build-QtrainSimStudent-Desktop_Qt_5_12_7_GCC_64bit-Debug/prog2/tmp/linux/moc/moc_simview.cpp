/****************************************************************************
** Meta object code from reading C++ file 'simview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../QtrainSim/src/simview.h"
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
struct qt_meta_stringdata_ExplosionItem_t {
    QByteArrayData data[3];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ExplosionItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ExplosionItem_t qt_meta_stringdata_ExplosionItem = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ExplosionItem"
QT_MOC_LITERAL(1, 14, 3), // "pos"
QT_MOC_LITERAL(2, 18, 5) // "scale"

    },
    "ExplosionItem\0pos\0scale"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ExplosionItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QPointF, 0x00095103,
       2, QMetaType::QReal, 0x00095103,

       0        // eod
};

void ExplosionItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ExplosionItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPointF*>(_v) = _t->pos(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->scale(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ExplosionItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPos(*reinterpret_cast< QPointF*>(_v)); break;
        case 1: _t->setScale(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ExplosionItem::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ExplosionItem.data,
    qt_meta_data_ExplosionItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ExplosionItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExplosionItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ExplosionItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QGraphicsPixmapItem"))
        return static_cast< QGraphicsPixmapItem*>(this);
    return QObject::qt_metacast(_clname);
}

int ExplosionItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_SimView_t {
    QByteArrayData data[31];
    char stringdata0[347];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SimView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SimView_t qt_meta_stringdata_SimView = {
    {
QT_MOC_LITERAL(0, 0, 7), // "SimView"
QT_MOC_LITERAL(1, 8, 14), // "locoSurSegment"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 8), // "Segment*"
QT_MOC_LITERAL(4, 33, 1), // "s"
QT_MOC_LITERAL(5, 35, 32), // "notificationVoieVariableModifiee"
QT_MOC_LITERAL(6, 68, 5), // "Voie*"
QT_MOC_LITERAL(7, 74, 1), // "v"
QT_MOC_LITERAL(8, 76, 13), // "animationStep"
QT_MOC_LITERAL(9, 90, 14), // "animationStart"
QT_MOC_LITERAL(10, 105, 13), // "animationStop"
QT_MOC_LITERAL(11, 119, 7), // "setLoco"
QT_MOC_LITERAL(12, 127, 8), // "contactA"
QT_MOC_LITERAL(13, 136, 8), // "contactB"
QT_MOC_LITERAL(14, 145, 7), // "numLoco"
QT_MOC_LITERAL(15, 153, 11), // "vitesseLoco"
QT_MOC_LITERAL(16, 165, 7), // "askLoco"
QT_MOC_LITERAL(17, 173, 14), // "setVitesseLoco"
QT_MOC_LITERAL(18, 188, 11), // "reverseLoco"
QT_MOC_LITERAL(19, 200, 25), // "setVitesseProgressiveLoco"
QT_MOC_LITERAL(20, 226, 8), // "stopLoco"
QT_MOC_LITERAL(21, 235, 15), // "setVoieVariable"
QT_MOC_LITERAL(22, 251, 15), // "numVoieVariable"
QT_MOC_LITERAL(23, 267, 9), // "direction"
QT_MOC_LITERAL(24, 277, 21), // "locoSurNouveauSegment"
QT_MOC_LITERAL(25, 299, 8), // "Contact*"
QT_MOC_LITERAL(26, 308, 4), // "ctc1"
QT_MOC_LITERAL(27, 313, 4), // "ctc2"
QT_MOC_LITERAL(28, 318, 5), // "Loco*"
QT_MOC_LITERAL(29, 324, 1), // "l"
QT_MOC_LITERAL(30, 326, 20) // "voieVariableModifiee"

    },
    "SimView\0locoSurSegment\0\0Segment*\0s\0"
    "notificationVoieVariableModifiee\0Voie*\0"
    "v\0animationStep\0animationStart\0"
    "animationStop\0setLoco\0contactA\0contactB\0"
    "numLoco\0vitesseLoco\0askLoco\0setVitesseLoco\0"
    "reverseLoco\0setVitesseProgressiveLoco\0"
    "stopLoco\0setVoieVariable\0numVoieVariable\0"
    "direction\0locoSurNouveauSegment\0"
    "Contact*\0ctc1\0ctc2\0Loco*\0l\0"
    "voieVariableModifiee"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SimView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       5,    1,   87,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   90,    2, 0x0a /* Public */,
       9,    0,   91,    2, 0x0a /* Public */,
      10,    0,   92,    2, 0x0a /* Public */,
      11,    4,   93,    2, 0x0a /* Public */,
      16,    2,  102,    2, 0x0a /* Public */,
      17,    2,  107,    2, 0x0a /* Public */,
      18,    1,  112,    2, 0x0a /* Public */,
      19,    2,  115,    2, 0x0a /* Public */,
      20,    1,  120,    2, 0x0a /* Public */,
      21,    2,  123,    2, 0x0a /* Public */,
      24,    3,  128,    2, 0x0a /* Public */,
      30,    1,  135,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   12,   13,   14,   15,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   14,   15,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   14,   15,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   22,   23,
    QMetaType::Void, 0x80000000 | 25, 0x80000000 | 25, 0x80000000 | 28,   26,   27,   29,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void SimView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SimView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->locoSurSegment((*reinterpret_cast< Segment*(*)>(_a[1]))); break;
        case 1: _t->notificationVoieVariableModifiee((*reinterpret_cast< Voie*(*)>(_a[1]))); break;
        case 2: _t->animationStep(); break;
        case 3: _t->animationStart(); break;
        case 4: _t->animationStop(); break;
        case 5: _t->setLoco((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 6: _t->askLoco((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->setVitesseLoco((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->reverseLoco((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->setVitesseProgressiveLoco((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->stopLoco((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->setVoieVariable((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->locoSurNouveauSegment((*reinterpret_cast< Contact*(*)>(_a[1])),(*reinterpret_cast< Contact*(*)>(_a[2])),(*reinterpret_cast< Loco*(*)>(_a[3]))); break;
        case 13: _t->voieVariableModifiee((*reinterpret_cast< Voie*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Segment* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Voie* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Contact* >(); break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Loco* >(); break;
            }
            break;
        case 13:
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
            using _t = void (SimView::*)(Segment * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SimView::locoSurSegment)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SimView::*)(Voie * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SimView::notificationVoieVariableModifiee)) {
                *result = 1;
                return;
            }
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
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void SimView::locoSurSegment(Segment * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SimView::notificationVoieVariableModifiee(Voie * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
