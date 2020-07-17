/****************************************************************************
** Meta object code from reading C++ file 'AddFamilyView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../CDB/AddFamilyView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AddFamilyView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AddFamilyView_t {
    QByteArrayData data[14];
    char stringdata0[392];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddFamilyView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddFamilyView_t qt_meta_stringdata_AddFamilyView = {
    {
QT_MOC_LITERAL(0, 0, 13), // "AddFamilyView"
QT_MOC_LITERAL(1, 14, 12), // "updateSignal"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 37), // "on_pushButton_mainWinReturn_2..."
QT_MOC_LITERAL(4, 66, 30), // "on_pushButton_addChild_clicked"
QT_MOC_LITERAL(5, 97, 33), // "on_pushButton_deleteChild_cli..."
QT_MOC_LITERAL(6, 131, 33), // "on_pushButton_addResident_cli..."
QT_MOC_LITERAL(7, 165, 36), // "on_pushButton_deleteResident_..."
QT_MOC_LITERAL(8, 202, 31), // "on_pushButton_addFamily_clicked"
QT_MOC_LITERAL(9, 234, 42), // "on_comboBox_fatherName_curren..."
QT_MOC_LITERAL(10, 277, 5), // "index"
QT_MOC_LITERAL(11, 283, 42), // "on_comboBox_motherName_curren..."
QT_MOC_LITERAL(12, 326, 32), // "on_comboBox_fatherName_activated"
QT_MOC_LITERAL(13, 359, 32) // "on_comboBox_motherName_activated"

    },
    "AddFamilyView\0updateSignal\0\0"
    "on_pushButton_mainWinReturn_2_clicked\0"
    "on_pushButton_addChild_clicked\0"
    "on_pushButton_deleteChild_clicked\0"
    "on_pushButton_addResident_clicked\0"
    "on_pushButton_deleteResident_clicked\0"
    "on_pushButton_addFamily_clicked\0"
    "on_comboBox_fatherName_currentIndexChanged\0"
    "index\0on_comboBox_motherName_currentIndexChanged\0"
    "on_comboBox_fatherName_activated\0"
    "on_comboBox_motherName_activated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddFamilyView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    1,   76,    2, 0x08 /* Private */,
      11,    1,   79,    2, 0x08 /* Private */,
      12,    1,   82,    2, 0x08 /* Private */,
      13,    1,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,

       0        // eod
};

void AddFamilyView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddFamilyView *_t = static_cast<AddFamilyView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateSignal(); break;
        case 1: _t->on_pushButton_mainWinReturn_2_clicked(); break;
        case 2: _t->on_pushButton_addChild_clicked(); break;
        case 3: _t->on_pushButton_deleteChild_clicked(); break;
        case 4: _t->on_pushButton_addResident_clicked(); break;
        case 5: _t->on_pushButton_deleteResident_clicked(); break;
        case 6: _t->on_pushButton_addFamily_clicked(); break;
        case 7: _t->on_comboBox_fatherName_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_comboBox_motherName_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_comboBox_fatherName_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_comboBox_motherName_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (AddFamilyView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddFamilyView::updateSignal)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject AddFamilyView::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddFamilyView.data,
      qt_meta_data_AddFamilyView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AddFamilyView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddFamilyView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AddFamilyView.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FamilyOpAbstractView"))
        return static_cast< FamilyOpAbstractView*>(this);
    return QDialog::qt_metacast(_clname);
}

int AddFamilyView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void AddFamilyView::updateSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
