/****************************************************************************
** Meta object code from reading C++ file 'demoreader.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../src/demoreader.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'demoreader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DemoReader_t {
    QByteArrayData data[6];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DemoReader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DemoReader_t qt_meta_stringdata_DemoReader = {
    {
QT_MOC_LITERAL(0, 0, 10), // "DemoReader"
QT_MOC_LITERAL(1, 11, 14), // "setNumChannels"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 5), // "value"
QT_MOC_LITERAL(4, 33, 16), // "demoTimerTimeout"
QT_MOC_LITERAL(5, 50, 20) // "onNumChannelsChanged"

    },
    "DemoReader\0setNumChannels\0\0value\0"
    "demoTimerTimeout\0onNumChannelsChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DemoReader[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       4,    0,   32,    2, 0x08 /* Private */,
       5,    1,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,    3,

       0        // eod
};

void DemoReader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DemoReader *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setNumChannels((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 1: _t->demoTimerTimeout(); break;
        case 2: _t->onNumChannelsChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DemoReader::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractReader::staticMetaObject>(),
    qt_meta_stringdata_DemoReader.data,
    qt_meta_data_DemoReader,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DemoReader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DemoReader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DemoReader.stringdata0))
        return static_cast<void*>(this);
    return AbstractReader::qt_metacast(_clname);
}

int DemoReader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractReader::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
