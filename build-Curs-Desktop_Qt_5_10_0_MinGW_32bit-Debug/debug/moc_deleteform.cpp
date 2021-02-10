/****************************************************************************
** Meta object code from reading C++ file 'deleteform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Curs/deleteform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'deleteform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DeleteForm_t {
    QByteArrayData data[9];
    char stringdata0[189];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DeleteForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DeleteForm_t qt_meta_stringdata_DeleteForm = {
    {
QT_MOC_LITERAL(0, 0, 10), // "DeleteForm"
QT_MOC_LITERAL(1, 11, 17), // "deletePatientSend"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 21), // "deleteAppointmentSend"
QT_MOC_LITERAL(4, 52, 16), // "deleteDoctorSend"
QT_MOC_LITERAL(5, 69, 30), // "on_patientDeleteButton_clicked"
QT_MOC_LITERAL(6, 100, 23), // "on_cancelButton_clicked"
QT_MOC_LITERAL(7, 124, 34), // "on_appointmentDeleteButton_cl..."
QT_MOC_LITERAL(8, 159, 29) // "on_doctorDeleteButton_clicked"

    },
    "DeleteForm\0deletePatientSend\0\0"
    "deleteAppointmentSend\0deleteDoctorSend\0"
    "on_patientDeleteButton_clicked\0"
    "on_cancelButton_clicked\0"
    "on_appointmentDeleteButton_clicked\0"
    "on_doctorDeleteButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DeleteForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DeleteForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DeleteForm *_t = static_cast<DeleteForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->deletePatientSend(); break;
        case 1: _t->deleteAppointmentSend(); break;
        case 2: _t->deleteDoctorSend(); break;
        case 3: _t->on_patientDeleteButton_clicked(); break;
        case 4: _t->on_cancelButton_clicked(); break;
        case 5: _t->on_appointmentDeleteButton_clicked(); break;
        case 6: _t->on_doctorDeleteButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (DeleteForm::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeleteForm::deletePatientSend)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DeleteForm::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeleteForm::deleteAppointmentSend)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DeleteForm::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeleteForm::deleteDoctorSend)) {
                *result = 2;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject DeleteForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_DeleteForm.data,
      qt_meta_data_DeleteForm,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DeleteForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeleteForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DeleteForm.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int DeleteForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void DeleteForm::deletePatientSend()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DeleteForm::deleteAppointmentSend()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DeleteForm::deleteDoctorSend()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
