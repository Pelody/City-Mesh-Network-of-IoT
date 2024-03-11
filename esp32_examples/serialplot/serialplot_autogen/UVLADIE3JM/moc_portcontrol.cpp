/****************************************************************************
** Meta object code from reading C++ file 'portcontrol.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../src/portcontrol.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'portcontrol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PortControl_t {
    QByteArrayData data[28];
    char stringdata0[359];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PortControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PortControl_t qt_meta_stringdata_PortControl = {
    {
QT_MOC_LITERAL(0, 0, 11), // "PortControl"
QT_MOC_LITERAL(1, 12, 11), // "portToggled"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 4), // "open"
QT_MOC_LITERAL(4, 30, 12), // "loadPortList"
QT_MOC_LITERAL(5, 43, 16), // "loadBaudRateList"
QT_MOC_LITERAL(6, 60, 10), // "togglePort"
QT_MOC_LITERAL(7, 71, 16), // "selectListedPort"
QT_MOC_LITERAL(8, 88, 8), // "portName"
QT_MOC_LITERAL(9, 97, 15), // "_selectBaudRate"
QT_MOC_LITERAL(10, 113, 8), // "baudRate"
QT_MOC_LITERAL(11, 122, 12), // "selectParity"
QT_MOC_LITERAL(12, 135, 6), // "parity"
QT_MOC_LITERAL(13, 142, 14), // "selectDataBits"
QT_MOC_LITERAL(14, 157, 8), // "dataBits"
QT_MOC_LITERAL(15, 166, 14), // "selectStopBits"
QT_MOC_LITERAL(16, 181, 8), // "stopBits"
QT_MOC_LITERAL(17, 190, 17), // "selectFlowControl"
QT_MOC_LITERAL(18, 208, 11), // "flowControl"
QT_MOC_LITERAL(19, 220, 19), // "openActionTriggered"
QT_MOC_LITERAL(20, 240, 7), // "checked"
QT_MOC_LITERAL(21, 248, 21), // "onCbPortListActivated"
QT_MOC_LITERAL(22, 270, 5), // "index"
QT_MOC_LITERAL(23, 276, 21), // "onTbPortListActivated"
QT_MOC_LITERAL(24, 298, 11), // "onPortError"
QT_MOC_LITERAL(25, 310, 28), // "QSerialPort::SerialPortError"
QT_MOC_LITERAL(26, 339, 5), // "error"
QT_MOC_LITERAL(27, 345, 13) // "updatePinLeds"

    },
    "PortControl\0portToggled\0\0open\0"
    "loadPortList\0loadBaudRateList\0togglePort\0"
    "selectListedPort\0portName\0_selectBaudRate\0"
    "baudRate\0selectParity\0parity\0"
    "selectDataBits\0dataBits\0selectStopBits\0"
    "stopBits\0selectFlowControl\0flowControl\0"
    "openActionTriggered\0checked\0"
    "onCbPortListActivated\0index\0"
    "onTbPortListActivated\0onPortError\0"
    "QSerialPort::SerialPortError\0error\0"
    "updatePinLeds"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PortControl[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   92,    2, 0x08 /* Private */,
       5,    0,   93,    2, 0x08 /* Private */,
       6,    0,   94,    2, 0x08 /* Private */,
       7,    1,   95,    2, 0x08 /* Private */,
       9,    1,   98,    2, 0x08 /* Private */,
      11,    1,  101,    2, 0x08 /* Private */,
      13,    1,  104,    2, 0x08 /* Private */,
      15,    1,  107,    2, 0x08 /* Private */,
      17,    1,  110,    2, 0x08 /* Private */,
      19,    1,  113,    2, 0x08 /* Private */,
      21,    1,  116,    2, 0x08 /* Private */,
      23,    1,  119,    2, 0x08 /* Private */,
      24,    1,  122,    2, 0x08 /* Private */,
      27,    0,  125,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void,

       0        // eod
};

void PortControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PortControl *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->portToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->loadPortList(); break;
        case 2: _t->loadBaudRateList(); break;
        case 3: _t->togglePort(); break;
        case 4: _t->selectListedPort((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->_selectBaudRate((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->selectParity((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->selectDataBits((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->selectStopBits((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->selectFlowControl((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->openActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->onCbPortListActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->onTbPortListActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->onPortError((*reinterpret_cast< QSerialPort::SerialPortError(*)>(_a[1]))); break;
        case 14: _t->updatePinLeds(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PortControl::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PortControl::portToggled)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PortControl::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_PortControl.data,
    qt_meta_data_PortControl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PortControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PortControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PortControl.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PortControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void PortControl::portToggled(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
