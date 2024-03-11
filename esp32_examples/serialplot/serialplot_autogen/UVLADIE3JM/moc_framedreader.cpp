/****************************************************************************
** Meta object code from reading C++ file 'framedreader.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../src/framedreader.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'framedreader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FramedReader_t {
    QByteArrayData data[10];
    char stringdata0[164];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FramedReader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FramedReader_t qt_meta_stringdata_FramedReader = {
    {
QT_MOC_LITERAL(0, 0, 12), // "FramedReader"
QT_MOC_LITERAL(1, 13, 21), // "onNumberFormatChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 12), // "NumberFormat"
QT_MOC_LITERAL(4, 49, 12), // "numberFormat"
QT_MOC_LITERAL(5, 62, 22), // "onNumOfChannelsChanged"
QT_MOC_LITERAL(6, 85, 5), // "value"
QT_MOC_LITERAL(7, 91, 17), // "onSyncWordChanged"
QT_MOC_LITERAL(8, 109, 18), // "onSizeFieldChanged"
QT_MOC_LITERAL(9, 128, 35) // "FramedReaderSettings::SizeFie..."

    },
    "FramedReader\0onNumberFormatChanged\0\0"
    "NumberFormat\0numberFormat\0"
    "onNumOfChannelsChanged\0value\0"
    "onSyncWordChanged\0onSizeFieldChanged\0"
    "FramedReaderSettings::SizeFieldType"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FramedReader[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x08 /* Private */,
       5,    1,   37,    2, 0x08 /* Private */,
       7,    1,   40,    2, 0x08 /* Private */,
       8,    2,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::UInt,    6,
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void, 0x80000000 | 9, QMetaType::UInt,    2,    2,

       0        // eod
};

void FramedReader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FramedReader *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onNumberFormatChanged((*reinterpret_cast< NumberFormat(*)>(_a[1]))); break;
        case 1: _t->onNumOfChannelsChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 2: _t->onSyncWordChanged((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 3: _t->onSizeFieldChanged((*reinterpret_cast< FramedReaderSettings::SizeFieldType(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FramedReader::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractReader::staticMetaObject>(),
    qt_meta_stringdata_FramedReader.data,
    qt_meta_data_FramedReader,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FramedReader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FramedReader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FramedReader.stringdata0))
        return static_cast<void*>(this);
    return AbstractReader::qt_metacast(_clname);
}

int FramedReader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractReader::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
