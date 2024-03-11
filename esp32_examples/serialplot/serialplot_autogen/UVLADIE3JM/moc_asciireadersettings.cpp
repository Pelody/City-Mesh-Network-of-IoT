/****************************************************************************
** Meta object code from reading C++ file 'asciireadersettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../src/asciireadersettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'asciireadersettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AsciiReaderSettings_t {
    QByteArrayData data[11];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AsciiReaderSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AsciiReaderSettings_t qt_meta_stringdata_AsciiReaderSettings = {
    {
QT_MOC_LITERAL(0, 0, 19), // "AsciiReaderSettings"
QT_MOC_LITERAL(1, 20, 20), // "numOfChannelsChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 16), // "delimiterChanged"
QT_MOC_LITERAL(4, 59, 10), // "hexChanged"
QT_MOC_LITERAL(5, 70, 13), // "filterChanged"
QT_MOC_LITERAL(6, 84, 10), // "FilterMode"
QT_MOC_LITERAL(7, 95, 16), // "delimiterToggled"
QT_MOC_LITERAL(8, 112, 7), // "checked"
QT_MOC_LITERAL(9, 120, 22), // "customDelimiterChanged"
QT_MOC_LITERAL(10, 143, 4) // "text"

    },
    "AsciiReaderSettings\0numOfChannelsChanged\0"
    "\0delimiterChanged\0hexChanged\0filterChanged\0"
    "FilterMode\0delimiterToggled\0checked\0"
    "customDelimiterChanged\0text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AsciiReaderSettings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       3,    1,   47,    2, 0x06 /* Public */,
       4,    1,   50,    2, 0x06 /* Public */,
       5,    2,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   58,    2, 0x08 /* Private */,
       9,    1,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::QChar,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 6, QMetaType::QString,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::QString,   10,

       0        // eod
};

void AsciiReaderSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AsciiReaderSettings *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->numOfChannelsChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 1: _t->delimiterChanged((*reinterpret_cast< QChar(*)>(_a[1]))); break;
        case 2: _t->hexChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->filterChanged((*reinterpret_cast< FilterMode(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->delimiterToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->customDelimiterChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AsciiReaderSettings::*)(unsigned  );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AsciiReaderSettings::numOfChannelsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AsciiReaderSettings::*)(QChar );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AsciiReaderSettings::delimiterChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AsciiReaderSettings::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AsciiReaderSettings::hexChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AsciiReaderSettings::*)(FilterMode , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AsciiReaderSettings::filterChanged)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AsciiReaderSettings::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AsciiReaderSettings.data,
    qt_meta_data_AsciiReaderSettings,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AsciiReaderSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AsciiReaderSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AsciiReaderSettings.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AsciiReaderSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void AsciiReaderSettings::numOfChannelsChanged(unsigned  _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AsciiReaderSettings::delimiterChanged(QChar _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AsciiReaderSettings::hexChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AsciiReaderSettings::filterChanged(FilterMode _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
