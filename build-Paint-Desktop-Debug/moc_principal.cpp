/****************************************************************************
** Meta object code from reading C++ file 'principal.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Q-Mi-Paint/principal.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'principal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Principal_t {
    QByteArrayData data[13];
    char stringdata0[307];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Principal_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Principal_t qt_meta_stringdata_Principal = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Principal"
QT_MOC_LITERAL(1, 10, 24), // "on_actionAncho_triggered"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 24), // "on_actionSalir_triggered"
QT_MOC_LITERAL(4, 61, 24), // "on_actionColor_triggered"
QT_MOC_LITERAL(5, 86, 24), // "on_actionNuevo_triggered"
QT_MOC_LITERAL(6, 111, 26), // "on_actionGuardar_triggered"
QT_MOC_LITERAL(7, 138, 25), // "on_actionLineas_triggered"
QT_MOC_LITERAL(8, 164, 30), // "on_actionRect_nculos_triggered"
QT_MOC_LITERAL(9, 195, 34), // "on_actionCircunferencias_trig..."
QT_MOC_LITERAL(10, 230, 24), // "on_actionAbrir_triggered"
QT_MOC_LITERAL(11, 255, 24), // "on_actionLibre_triggered"
QT_MOC_LITERAL(12, 280, 26) // "on_actionLimpiar_triggered"

    },
    "Principal\0on_actionAncho_triggered\0\0"
    "on_actionSalir_triggered\0"
    "on_actionColor_triggered\0"
    "on_actionNuevo_triggered\0"
    "on_actionGuardar_triggered\0"
    "on_actionLineas_triggered\0"
    "on_actionRect_nculos_triggered\0"
    "on_actionCircunferencias_triggered\0"
    "on_actionAbrir_triggered\0"
    "on_actionLibre_triggered\0"
    "on_actionLimpiar_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Principal[] = {

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
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Principal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Principal *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_actionAncho_triggered(); break;
        case 1: _t->on_actionSalir_triggered(); break;
        case 2: _t->on_actionColor_triggered(); break;
        case 3: _t->on_actionNuevo_triggered(); break;
        case 4: _t->on_actionGuardar_triggered(); break;
        case 5: _t->on_actionLineas_triggered(); break;
        case 6: _t->on_actionRect_nculos_triggered(); break;
        case 7: _t->on_actionCircunferencias_triggered(); break;
        case 8: _t->on_actionAbrir_triggered(); break;
        case 9: _t->on_actionLibre_triggered(); break;
        case 10: _t->on_actionLimpiar_triggered(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Principal::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_Principal.data,
    qt_meta_data_Principal,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Principal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Principal::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Principal.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Principal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
