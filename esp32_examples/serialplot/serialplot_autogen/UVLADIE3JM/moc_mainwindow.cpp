/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../src/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[20];
    char stringdata0[207];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 13), // "onPortToggled"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 4), // "open"
QT_MOC_LITERAL(4, 31, 15), // "onSourceChanged"
QT_MOC_LITERAL(5, 47, 7), // "Source*"
QT_MOC_LITERAL(6, 55, 6), // "source"
QT_MOC_LITERAL(7, 62, 21), // "onNumOfSamplesChanged"
QT_MOC_LITERAL(8, 84, 5), // "value"
QT_MOC_LITERAL(9, 90, 9), // "clearPlot"
QT_MOC_LITERAL(10, 100, 12), // "onSpsChanged"
QT_MOC_LITERAL(11, 113, 3), // "sps"
QT_MOC_LITERAL(12, 117, 10), // "enableDemo"
QT_MOC_LITERAL(13, 128, 7), // "enabled"
QT_MOC_LITERAL(14, 136, 11), // "showBarPlot"
QT_MOC_LITERAL(15, 148, 4), // "show"
QT_MOC_LITERAL(16, 153, 11), // "onExportCsv"
QT_MOC_LITERAL(17, 165, 11), // "onExportSvg"
QT_MOC_LITERAL(18, 177, 14), // "onSaveSettings"
QT_MOC_LITERAL(19, 192, 14) // "onLoadSettings"

    },
    "MainWindow\0onPortToggled\0\0open\0"
    "onSourceChanged\0Source*\0source\0"
    "onNumOfSamplesChanged\0value\0clearPlot\0"
    "onSpsChanged\0sps\0enableDemo\0enabled\0"
    "showBarPlot\0show\0onExportCsv\0onExportSvg\0"
    "onSaveSettings\0onLoadSettings"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x08 /* Private */,
       4,    1,   72,    2, 0x08 /* Private */,
       7,    1,   75,    2, 0x08 /* Private */,
       9,    0,   78,    2, 0x08 /* Private */,
      10,    1,   79,    2, 0x08 /* Private */,
      12,    1,   82,    2, 0x08 /* Private */,
      14,    1,   85,    2, 0x08 /* Private */,
      16,    0,   88,    2, 0x08 /* Private */,
      17,    0,   89,    2, 0x08 /* Private */,
      18,    0,   90,    2, 0x08 /* Private */,
      19,    0,   91,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,   11,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onPortToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->onSourceChanged((*reinterpret_cast< Source*(*)>(_a[1]))); break;
        case 2: _t->onNumOfSamplesChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->clearPlot(); break;
        case 4: _t->onSpsChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->enableDemo((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->showBarPlot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->onExportCsv(); break;
        case 8: _t->onExportSvg(); break;
        case 9: _t->onSaveSettings(); break;
        case 10: _t->onLoadSettings(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
