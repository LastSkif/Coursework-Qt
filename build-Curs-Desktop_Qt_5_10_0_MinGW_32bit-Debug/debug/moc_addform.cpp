/****************************************************************************
** Meta object code from reading C++ file 'addform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Curs/addform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AddForm_t {
    QByteArrayData data[12];
    char stringdata0[183];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddForm_t qt_meta_stringdata_AddForm = {
    {
QT_MOC_LITERAL(0, 0, 7), // "AddForm"
QT_MOC_LITERAL(1, 8, 14), // "addPatientSend"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 13), // "addDoctorSend"
QT_MOC_LITERAL(4, 38, 18), // "addAppointmentSend"
QT_MOC_LITERAL(5, 57, 5), // "getID"
QT_MOC_LITERAL(6, 63, 2), // "id"
QT_MOC_LITERAL(7, 66, 5), // "appID"
QT_MOC_LITERAL(8, 72, 23), // "on_cancelButton_clicked"
QT_MOC_LITERAL(9, 96, 27), // "on_addPatientButton_clicked"
QT_MOC_LITERAL(10, 124, 31), // "on_addAppointmentButton_clicked"
QT_MOC_LITERAL(11, 156, 26) // "on_addDoctorButton_clicked"

    },
    "AddForm\0addPatientSend\0\0addDoctorSend\0"
    "addAppointmentSend\0getID\0id\0appID\0"
    "on_cancelButton_clicked\0"
    "on_addPatientButton_clicked\0"
    "on_addAppointmentButton_clicked\0"
    "on_addDoctorButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    2,   57,    2, 0x08 /* Private */,
       8,    0,   62,    2, 0x08 /* Private */,
       9,    0,   63,    2, 0x08 /* Private */,
      10,    0,   64,    2, 0x08 /* Private */,
      11,    0,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AddForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddForm *_t = static_cast<AddForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addPatientSend(); break;
        case 1: _t->addDoctorSend(); break;
        case 2: _t->addAppointmentSend(); break;
        case 3: _t->getID((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->on_cancelButton_clicked(); break;
        case 5: _t->on_addPatientButton_clicked(); break;
        case 6: _t->on_addAppointmentButton_clicked(); break;
        case 7: _t->on_addDoctorButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (AddForm::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddForm::addPatientSend)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AddForm::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddForm::addDoctorSend)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (AddForm::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddForm::addAppointmentSend)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject AddForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AddForm.data,
      qt_meta_data_AddForm,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AddForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AddForm.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AddForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void AddForm::addPatientSend()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AddForm::addDoctorSend()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void AddForm::addAppointmentSend()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
