/****************************************************************************
** Meta object code from reading C++ file 'MainWindowView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../CDB/MainWindowView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindowView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[13];
    char stringdata0[365];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 31), // "on_pushButton_addPerson_clicked"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 31), // "on_pushButton_newFamily_clicked"
QT_MOC_LITERAL(4, 76, 37), // "on_pushButton_searchForPerson..."
QT_MOC_LITERAL(5, 114, 41), // "on_lineEdit_searchingName_edi..."
QT_MOC_LITERAL(6, 156, 26), // "on_tableView_doubleClicked"
QT_MOC_LITERAL(7, 183, 5), // "index"
QT_MOC_LITERAL(8, 189, 10), // "updateSlot"
QT_MOC_LITERAL(9, 200, 39), // "on_pushButton_searchForFamili..."
QT_MOC_LITERAL(10, 240, 28), // "on_tableView_2_doubleClicked"
QT_MOC_LITERAL(11, 269, 50), // "on_lineEdit_searchingNeighbou..."
QT_MOC_LITERAL(12, 320, 44) // "on_lineEdit_searchingBlockNo_..."

    },
    "MainWindow\0on_pushButton_addPerson_clicked\0"
    "\0on_pushButton_newFamily_clicked\0"
    "on_pushButton_searchForPerson_clicked\0"
    "on_lineEdit_searchingName_editingFinished\0"
    "on_tableView_doubleClicked\0index\0"
    "updateSlot\0on_pushButton_searchForFamilies_clicked\0"
    "on_tableView_2_doubleClicked\0"
    "on_lineEdit_searchingNeighbourhood_editingFinished\0"
    "on_lineEdit_searchingBlockNo_editingFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    1,   68,    2, 0x08 /* Private */,
       8,    0,   71,    2, 0x08 /* Private */,
       9,    0,   72,    2, 0x08 /* Private */,
      10,    1,   73,    2, 0x08 /* Private */,
      11,    0,   76,    2, 0x08 /* Private */,
      12,    0,   77,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_addPerson_clicked(); break;
        case 1: _t->on_pushButton_newFamily_clicked(); break;
        case 2: _t->on_pushButton_searchForPerson_clicked(); break;
        case 3: _t->on_lineEdit_searchingName_editingFinished(); break;
        case 4: _t->on_tableView_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->updateSlot(); break;
        case 6: _t->on_pushButton_searchForFamilies_clicked(); break;
        case 7: _t->on_tableView_2_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 8: _t->on_lineEdit_searchingNeighbourhood_editingFinished(); break;
        case 9: _t->on_lineEdit_searchingBlockNo_editingFinished(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


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
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
