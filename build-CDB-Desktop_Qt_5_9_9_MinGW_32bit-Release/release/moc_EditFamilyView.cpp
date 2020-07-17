/****************************************************************************
** Meta object code from reading C++ file 'EditFamilyView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../CDB/EditFamilyView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EditFamilyView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EditFamilyView_t {
    QByteArrayData data[9];
    char stringdata0[249];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EditFamilyView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EditFamilyView_t qt_meta_stringdata_EditFamilyView = {
    {
QT_MOC_LITERAL(0, 0, 14), // "EditFamilyView"
QT_MOC_LITERAL(1, 15, 12), // "updateSignal"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 37), // "on_pushButton_mainWinReturn_4..."
QT_MOC_LITERAL(4, 67, 32), // "on_pushButton_addChild_3_clicked"
QT_MOC_LITERAL(5, 100, 35), // "on_pushButton_deleteChild_3_c..."
QT_MOC_LITERAL(6, 136, 35), // "on_pushButton_addResident_3_c..."
QT_MOC_LITERAL(7, 172, 38), // "on_pushButton_deleteResident_..."
QT_MOC_LITERAL(8, 211, 37) // "on_pushButton_applyFamilyEdit..."

    },
    "EditFamilyView\0updateSignal\0\0"
    "on_pushButton_mainWinReturn_4_clicked\0"
    "on_pushButton_addChild_3_clicked\0"
    "on_pushButton_deleteChild_3_clicked\0"
    "on_pushButton_addResident_3_clicked\0"
    "on_pushButton_deleteResident_3_clicked\0"
    "on_pushButton_applyFamilyEdit_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EditFamilyView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void EditFamilyView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EditFamilyView *_t = static_cast<EditFamilyView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateSignal(); break;
        case 1: _t->on_pushButton_mainWinReturn_4_clicked(); break;
        case 2: _t->on_pushButton_addChild_3_clicked(); break;
        case 3: _t->on_pushButton_deleteChild_3_clicked(); break;
        case 4: _t->on_pushButton_addResident_3_clicked(); break;
        case 5: _t->on_pushButton_deleteResident_3_clicked(); break;
        case 6: _t->on_pushButton_applyFamilyEdit_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (EditFamilyView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EditFamilyView::updateSignal)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject EditFamilyView::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_EditFamilyView.data,
      qt_meta_data_EditFamilyView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *EditFamilyView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EditFamilyView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EditFamilyView.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FamilyOpAbstractView"))
        return static_cast< FamilyOpAbstractView*>(this);
    return QDialog::qt_metacast(_clname);
}

int EditFamilyView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void EditFamilyView::updateSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
