/****************************************************************************
** Meta object code from reading C++ file 'mainwindow3.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../stopwatchv03/mainwindow3.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow3.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow3_t {
    QByteArrayData data[9];
    char stringdata0[164];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow3_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow3_t qt_meta_stringdata_MainWindow3 = {
    {
QT_MOC_LITERAL(0, 0, 11), // "MainWindow3"
QT_MOC_LITERAL(1, 12, 27), // "on_actionMinutnik_triggered"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 25), // "on_actionStoper_triggered"
QT_MOC_LITERAL(4, 67, 28), // "on_actionO_autorze_triggered"
QT_MOC_LITERAL(5, 96, 23), // "on_actionWyjd_triggered"
QT_MOC_LITERAL(6, 120, 18), // "on_b_25min_clicked"
QT_MOC_LITERAL(7, 139, 17), // "on_b_5min_clicked"
QT_MOC_LITERAL(8, 157, 6) // "wypisz"

    },
    "MainWindow3\0on_actionMinutnik_triggered\0"
    "\0on_actionStoper_triggered\0"
    "on_actionO_autorze_triggered\0"
    "on_actionWyjd_triggered\0on_b_25min_clicked\0"
    "on_b_5min_clicked\0wypisz"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow3[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow3::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow3 *_t = static_cast<MainWindow3 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actionMinutnik_triggered(); break;
        case 1: _t->on_actionStoper_triggered(); break;
        case 2: _t->on_actionO_autorze_triggered(); break;
        case 3: _t->on_actionWyjd_triggered(); break;
        case 4: _t->on_b_25min_clicked(); break;
        case 5: _t->on_b_5min_clicked(); break;
        case 6: _t->wypisz(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject MainWindow3::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow3.data,
      qt_meta_data_MainWindow3,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow3::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow3::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow3.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow3::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
