/****************************************************************************
** Meta object code from reading C++ file 'barplot.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../src/barplot.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'barplot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BarPlot_t {
    QByteArrayData data[9];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BarPlot_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BarPlot_t qt_meta_stringdata_BarPlot = {
    {
QT_MOC_LITERAL(0, 0, 7), // "BarPlot"
QT_MOC_LITERAL(1, 8, 8), // "setYAxis"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 10), // "autoScaled"
QT_MOC_LITERAL(4, 29, 4), // "yMin"
QT_MOC_LITERAL(5, 34, 4), // "yMax"
QT_MOC_LITERAL(6, 39, 14), // "darkBackground"
QT_MOC_LITERAL(7, 54, 7), // "enabled"
QT_MOC_LITERAL(8, 62, 6) // "update"

    },
    "BarPlot\0setYAxis\0\0autoScaled\0yMin\0"
    "yMax\0darkBackground\0enabled\0update"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BarPlot[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   39,    2, 0x0a /* Public */,
       1,    2,   46,    2, 0x2a /* Public | MethodCloned */,
       1,    1,   51,    2, 0x2a /* Public | MethodCloned */,
       6,    1,   54,    2, 0x0a /* Public */,
       8,    0,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::Double, QMetaType::Double,    3,    4,    5,
    QMetaType::Void, QMetaType::Bool, QMetaType::Double,    3,    4,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,

       0        // eod
};

void BarPlot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BarPlot *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setYAxis((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 1: _t->setYAxis((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 2: _t->setYAxis((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->darkBackground((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->update(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BarPlot::staticMetaObject = { {
    QMetaObject::SuperData::link<QwtPlot::staticMetaObject>(),
    qt_meta_stringdata_BarPlot.data,
    qt_meta_data_BarPlot,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BarPlot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BarPlot::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BarPlot.stringdata0))
        return static_cast<void*>(this);
    return QwtPlot::qt_metacast(_clname);
}

int BarPlot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QwtPlot::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
