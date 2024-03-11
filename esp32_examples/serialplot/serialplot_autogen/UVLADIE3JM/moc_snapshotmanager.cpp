/****************************************************************************
** Meta object code from reading C++ file 'snapshotmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../src/snapshotmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'snapshotmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SnapshotManager_t {
    QByteArrayData data[10];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SnapshotManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SnapshotManager_t qt_meta_stringdata_SnapshotManager = {
    {
QT_MOC_LITERAL(0, 0, 15), // "SnapshotManager"
QT_MOC_LITERAL(1, 16, 12), // "takeSnapshot"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 14), // "clearSnapshots"
QT_MOC_LITERAL(4, 45, 14), // "deleteSnapshot"
QT_MOC_LITERAL(5, 60, 9), // "Snapshot*"
QT_MOC_LITERAL(6, 70, 8), // "snapshot"
QT_MOC_LITERAL(7, 79, 13), // "loadSnapshots"
QT_MOC_LITERAL(8, 93, 20), // "loadSnapshotFromFile"
QT_MOC_LITERAL(9, 114, 8) // "fileName"

    },
    "SnapshotManager\0takeSnapshot\0\0"
    "clearSnapshots\0deleteSnapshot\0Snapshot*\0"
    "snapshot\0loadSnapshots\0loadSnapshotFromFile\0"
    "fileName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SnapshotManager[] = {

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
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    1,   41,    2, 0x08 /* Private */,
       7,    0,   44,    2, 0x08 /* Private */,
       8,    1,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,

       0        // eod
};

void SnapshotManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SnapshotManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->takeSnapshot(); break;
        case 1: _t->clearSnapshots(); break;
        case 2: _t->deleteSnapshot((*reinterpret_cast< Snapshot*(*)>(_a[1]))); break;
        case 3: _t->loadSnapshots(); break;
        case 4: _t->loadSnapshotFromFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Snapshot* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SnapshotManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SnapshotManager.data,
    qt_meta_data_SnapshotManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SnapshotManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SnapshotManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SnapshotManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SnapshotManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
