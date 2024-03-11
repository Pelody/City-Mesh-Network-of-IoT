/****************************************************************************
** Meta object code from reading C++ file 'plotmenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../src/plotmenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'plotmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PlotMenu_t {
    QByteArrayData data[8];
    char stringdata0[97];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlotMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlotMenu_t qt_meta_stringdata_PlotMenu = {
    {
QT_MOC_LITERAL(0, 0, 8), // "PlotMenu"
QT_MOC_LITERAL(1, 9, 17), // "symbolShowChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 17), // "Plot::ShowSymbols"
QT_MOC_LITERAL(4, 46, 5), // "shown"
QT_MOC_LITERAL(5, 52, 16), // "legendPosChanged"
QT_MOC_LITERAL(6, 69, 17), // "Qt::AlignmentFlag"
QT_MOC_LITERAL(7, 87, 9) // "alignment"

    },
    "PlotMenu\0symbolShowChanged\0\0"
    "Plot::ShowSymbols\0shown\0legendPosChanged\0"
    "Qt::AlignmentFlag\0alignment"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlotMenu[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       5,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void PlotMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PlotMenu *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->symbolShowChanged((*reinterpret_cast< Plot::ShowSymbols(*)>(_a[1]))); break;
        case 1: _t->legendPosChanged((*reinterpret_cast< Qt::AlignmentFlag(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PlotMenu::*)(Plot::ShowSymbols );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlotMenu::symbolShowChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PlotMenu::*)(Qt::AlignmentFlag );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlotMenu::legendPosChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PlotMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QMenu::staticMetaObject>(),
    qt_meta_stringdata_PlotMenu.data,
    qt_meta_data_PlotMenu,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PlotMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlotMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlotMenu.stringdata0))
        return static_cast<void*>(this);
    return QMenu::qt_metacast(_clname);
}

int PlotMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void PlotMenu::symbolShowChanged(Plot::ShowSymbols _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PlotMenu::legendPosChanged(Qt::AlignmentFlag _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
