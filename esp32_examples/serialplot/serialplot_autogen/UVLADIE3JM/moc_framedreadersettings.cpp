/****************************************************************************
** Meta object code from reading C++ file 'framedreadersettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../src/framedreadersettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'framedreadersettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FramedReaderSettings_t {
    QByteArrayData data[14];
    char stringdata0[205];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FramedReaderSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FramedReaderSettings_t qt_meta_stringdata_FramedReaderSettings = {
    {
QT_MOC_LITERAL(0, 0, 20), // "FramedReaderSettings"
QT_MOC_LITERAL(1, 21, 15), // "syncWordChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 16), // "sizeFieldChanged"
QT_MOC_LITERAL(4, 55, 13), // "SizeFieldType"
QT_MOC_LITERAL(5, 69, 4), // "type"
QT_MOC_LITERAL(6, 74, 4), // "size"
QT_MOC_LITERAL(7, 79, 21), // "fixedFrameSizeChanged"
QT_MOC_LITERAL(8, 101, 15), // "checksumChanged"
QT_MOC_LITERAL(9, 117, 20), // "numOfChannelsChanged"
QT_MOC_LITERAL(10, 138, 19), // "numberFormatChanged"
QT_MOC_LITERAL(11, 158, 12), // "NumberFormat"
QT_MOC_LITERAL(12, 171, 16), // "debugModeChanged"
QT_MOC_LITERAL(13, 188, 16) // "onSyncWordEdited"

    },
    "FramedReaderSettings\0syncWordChanged\0"
    "\0sizeFieldChanged\0SizeFieldType\0type\0"
    "size\0fixedFrameSizeChanged\0checksumChanged\0"
    "numOfChannelsChanged\0numberFormatChanged\0"
    "NumberFormat\0debugModeChanged\0"
    "onSyncWordEdited"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FramedReaderSettings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       3,    2,   57,    2, 0x06 /* Public */,
       7,    1,   62,    2, 0x06 /* Public */,
       8,    1,   65,    2, 0x06 /* Public */,
       9,    1,   68,    2, 0x06 /* Public */,
      10,    1,   71,    2, 0x06 /* Public */,
      12,    1,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,   77,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void, 0x80000000 | 4, QMetaType::UInt,    5,    6,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void FramedReaderSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FramedReaderSettings *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->syncWordChanged((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: _t->sizeFieldChanged((*reinterpret_cast< SizeFieldType(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 2: _t->fixedFrameSizeChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 3: _t->checksumChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->numOfChannelsChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 5: _t->numberFormatChanged((*reinterpret_cast< NumberFormat(*)>(_a[1]))); break;
        case 6: _t->debugModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->onSyncWordEdited(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FramedReaderSettings::*)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FramedReaderSettings::syncWordChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FramedReaderSettings::*)(SizeFieldType , unsigned  );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FramedReaderSettings::sizeFieldChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FramedReaderSettings::*)(unsigned  );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FramedReaderSettings::fixedFrameSizeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FramedReaderSettings::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FramedReaderSettings::checksumChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FramedReaderSettings::*)(unsigned  );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FramedReaderSettings::numOfChannelsChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (FramedReaderSettings::*)(NumberFormat );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FramedReaderSettings::numberFormatChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (FramedReaderSettings::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FramedReaderSettings::debugModeChanged)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FramedReaderSettings::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_FramedReaderSettings.data,
    qt_meta_data_FramedReaderSettings,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FramedReaderSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FramedReaderSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FramedReaderSettings.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FramedReaderSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void FramedReaderSettings::syncWordChanged(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FramedReaderSettings::sizeFieldChanged(SizeFieldType _t1, unsigned  _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FramedReaderSettings::fixedFrameSizeChanged(unsigned  _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FramedReaderSettings::checksumChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void FramedReaderSettings::numOfChannelsChanged(unsigned  _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void FramedReaderSettings::numberFormatChanged(NumberFormat _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void FramedReaderSettings::debugModeChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
