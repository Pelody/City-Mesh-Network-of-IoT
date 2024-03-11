/****************************************************************************
** Meta object code from reading C++ file 'plotcontrolpanel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../src/plotcontrolpanel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'plotcontrolpanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PlotControlPanel_t {
    QByteArrayData data[25];
    char stringdata0[303];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlotControlPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlotControlPanel_t qt_meta_stringdata_PlotControlPanel = {
    {
QT_MOC_LITERAL(0, 0, 16), // "PlotControlPanel"
QT_MOC_LITERAL(1, 17, 19), // "numOfSamplesChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 5), // "value"
QT_MOC_LITERAL(4, 44, 13), // "yScaleChanged"
QT_MOC_LITERAL(5, 58, 10), // "autoScaled"
QT_MOC_LITERAL(6, 69, 4), // "yMin"
QT_MOC_LITERAL(7, 74, 4), // "yMax"
QT_MOC_LITERAL(8, 79, 13), // "xScaleChanged"
QT_MOC_LITERAL(9, 93, 7), // "asIndex"
QT_MOC_LITERAL(10, 101, 4), // "xMin"
QT_MOC_LITERAL(11, 106, 4), // "xMax"
QT_MOC_LITERAL(12, 111, 16), // "plotWidthChanged"
QT_MOC_LITERAL(13, 128, 5), // "width"
QT_MOC_LITERAL(14, 134, 20), // "lineThicknessChanged"
QT_MOC_LITERAL(15, 155, 9), // "thickness"
QT_MOC_LITERAL(16, 165, 14), // "onNumOfSamples"
QT_MOC_LITERAL(17, 180, 18), // "onAutoScaleChecked"
QT_MOC_LITERAL(18, 199, 7), // "checked"
QT_MOC_LITERAL(19, 207, 15), // "onYScaleChanged"
QT_MOC_LITERAL(20, 223, 15), // "onRangeSelected"
QT_MOC_LITERAL(21, 239, 14), // "onIndexChecked"
QT_MOC_LITERAL(22, 254, 15), // "onXScaleChanged"
QT_MOC_LITERAL(23, 270, 18), // "onPlotWidthChanged"
QT_MOC_LITERAL(24, 289, 13) // "onColorSelect"

    },
    "PlotControlPanel\0numOfSamplesChanged\0"
    "\0value\0yScaleChanged\0autoScaled\0yMin\0"
    "yMax\0xScaleChanged\0asIndex\0xMin\0xMax\0"
    "plotWidthChanged\0width\0lineThicknessChanged\0"
    "thickness\0onNumOfSamples\0onAutoScaleChecked\0"
    "checked\0onYScaleChanged\0onRangeSelected\0"
    "onIndexChecked\0onXScaleChanged\0"
    "onPlotWidthChanged\0onColorSelect"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlotControlPanel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06 /* Public */,
       4,    3,  102,    2, 0x06 /* Public */,
       4,    2,  109,    2, 0x26 /* Public | MethodCloned */,
       4,    1,  114,    2, 0x26 /* Public | MethodCloned */,
       8,    3,  117,    2, 0x06 /* Public */,
       8,    2,  124,    2, 0x26 /* Public | MethodCloned */,
       8,    1,  129,    2, 0x26 /* Public | MethodCloned */,
      12,    1,  132,    2, 0x06 /* Public */,
      14,    1,  135,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    1,  138,    2, 0x08 /* Private */,
      17,    1,  141,    2, 0x08 /* Private */,
      19,    0,  144,    2, 0x08 /* Private */,
      20,    0,  145,    2, 0x08 /* Private */,
      21,    1,  146,    2, 0x08 /* Private */,
      22,    0,  149,    2, 0x08 /* Private */,
      23,    0,  150,    2, 0x08 /* Private */,
      24,    0,  151,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool, QMetaType::Double, QMetaType::Double,    5,    6,    7,
    QMetaType::Void, QMetaType::Bool, QMetaType::Double,    5,    6,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool, QMetaType::Double, QMetaType::Double,    9,   10,   11,
    QMetaType::Void, QMetaType::Bool, QMetaType::Double,    9,   10,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Int,   15,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PlotControlPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PlotControlPanel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->numOfSamplesChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->yScaleChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 2: _t->yScaleChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 3: _t->yScaleChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->xScaleChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 5: _t->xScaleChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 6: _t->xScaleChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->plotWidthChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->lineThicknessChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->onNumOfSamples((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->onAutoScaleChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->onYScaleChanged(); break;
        case 12: _t->onRangeSelected(); break;
        case 13: _t->onIndexChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->onXScaleChanged(); break;
        case 15: _t->onPlotWidthChanged(); break;
        case 16: _t->onColorSelect(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PlotControlPanel::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlotControlPanel::numOfSamplesChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PlotControlPanel::*)(bool , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlotControlPanel::yScaleChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PlotControlPanel::*)(bool , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlotControlPanel::xScaleChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (PlotControlPanel::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlotControlPanel::plotWidthChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (PlotControlPanel::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlotControlPanel::lineThicknessChanged)) {
                *result = 8;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PlotControlPanel::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_PlotControlPanel.data,
    qt_meta_data_PlotControlPanel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PlotControlPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlotControlPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlotControlPanel.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PlotControlPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void PlotControlPanel::numOfSamplesChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PlotControlPanel::yScaleChanged(bool _t1, double _t2, double _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 4
void PlotControlPanel::xScaleChanged(bool _t1, double _t2, double _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 7
void PlotControlPanel::plotWidthChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void PlotControlPanel::lineThicknessChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
