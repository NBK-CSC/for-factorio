/****************************************************************************
** Meta object code from reading C++ file 'secondwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../secondwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'secondwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_secondwindow_t {
    const uint offsetsAndSize[16];
    char stringdata0[182];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_secondwindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_secondwindow_t qt_meta_stringdata_secondwindow = {
    {
QT_MOC_LITERAL(0, 12), // "secondwindow"
QT_MOC_LITERAL(13, 39), // "on_number_of_layers_Slider_va..."
QT_MOC_LITERAL(53, 0), // ""
QT_MOC_LITERAL(54, 5), // "value"
QT_MOC_LITERAL(60, 29), // "on_pushButton_of_save_clicked"
QT_MOC_LITERAL(90, 31), // "on_pushButton_of_delete_clicked"
QT_MOC_LITERAL(122, 28), // "on_pushButton_of_add_clicked"
QT_MOC_LITERAL(151, 30) // "on_pushButton_of_clear_clicked"

    },
    "secondwindow\0on_number_of_layers_Slider_valueChanged\0"
    "\0value\0on_pushButton_of_save_clicked\0"
    "on_pushButton_of_delete_clicked\0"
    "on_pushButton_of_add_clicked\0"
    "on_pushButton_of_clear_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_secondwindow[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x0a,    0 /* Public */,
       4,    0,   47,    2, 0x08,    2 /* Private */,
       5,    0,   48,    2, 0x08,    3 /* Private */,
       6,    0,   49,    2, 0x08,    4 /* Private */,
       7,    0,   50,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void secondwindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<secondwindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_number_of_layers_Slider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_pushButton_of_save_clicked(); break;
        case 2: _t->on_pushButton_of_delete_clicked(); break;
        case 3: _t->on_pushButton_of_add_clicked(); break;
        case 4: _t->on_pushButton_of_clear_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject secondwindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_secondwindow.offsetsAndSize,
    qt_meta_data_secondwindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_secondwindow_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *secondwindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *secondwindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_secondwindow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int secondwindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
