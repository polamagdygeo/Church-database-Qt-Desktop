/****************************************************************************
** Meta object code from reading C++ file 'FamilyInfoView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../CDB/FamilyInfoView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FamilyInfoView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FamilyInfoView_t {
    QByteArrayData data[8];
    char stringdata0[179];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FamilyInfoView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FamilyInfoView_t qt_meta_stringdata_FamilyInfoView = {
    {
QT_MOC_LITERAL(0, 0, 14), // "FamilyInfoView"
QT_MOC_LITERAL(1, 15, 12), // "updateSignal"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 37), // "on_pushButton_mainWinReturn_2..."
QT_MOC_LITERAL(4, 67, 32), // "on_pushButton_goToVisits_clicked"
QT_MOC_LITERAL(5, 100, 34), // "on_pushButton_deleteFamily_cl..."
QT_MOC_LITERAL(6, 135, 32), // "on_pushButton_editFamily_clicked"
QT_MOC_LITERAL(7, 168, 10) // "updateSlot"

    },
    "FamilyInfoView\0updateSignal\0\0"
    "on_pushButton_mainWinReturn_2_clicked\0"
    "on_pushButton_goToVisits_clicked\0"
    "on_pushButton_deleteFamily_clicked\0"
    "on_pushButton_editFamily_clicked\0"
    "updateSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FamilyInfoView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FamilyInfoView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FamilyInfoView *_t = static_cast<FamilyInfoView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateSignal(); break;
        case 1: _t->on_pushButton_mainWinReturn_2_clicked(); break;
        case 2: _t->on_pushButton_goToVisits_clicked(); break;
        case 3: _t->on_pushButton_deleteFamily_clicked(); break;
        case 4: _t->on_pushButton_editFamily_clicked(); break;
        case 5: _t->updateSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (FamilyInfoView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FamilyInfoView::updateSignal)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject FamilyInfoView::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_FamilyInfoView.data,
      qt_meta_data_FamilyInfoView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *FamilyInfoView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FamilyInfoView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FamilyInfoView.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int FamilyInfoView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void FamilyInfoView::updateSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
