/****************************************************************************
** Meta object code from reading C++ file 'Janela_Principal.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Janela_Principal.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Janela_Principal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Janela_Principal_t {
    QByteArrayData data[12];
    char stringdata0[231];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Janela_Principal_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Janela_Principal_t qt_meta_stringdata_Janela_Principal = {
    {
QT_MOC_LITERAL(0, 0, 16), // "Janela_Principal"
QT_MOC_LITERAL(1, 17, 17), // "obter_informacoes"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 17), // "mostrar_resultado"
QT_MOC_LITERAL(4, 54, 25), // "verificar_entradas_vazias"
QT_MOC_LITERAL(5, 80, 15), // "on_Soma_clicked"
QT_MOC_LITERAL(6, 96, 19), // "on_Subtrair_clicked"
QT_MOC_LITERAL(7, 116, 26), // "on_converter_botao_clicked"
QT_MOC_LITERAL(8, 143, 16), // "on_zerar_clicked"
QT_MOC_LITERAL(9, 160, 18), // "on_Dividir_clicked"
QT_MOC_LITERAL(10, 179, 22), // "on_Multiplicar_clicked"
QT_MOC_LITERAL(11, 202, 28) // "on_Calcular_Eletrica_clicked"

    },
    "Janela_Principal\0obter_informacoes\0\0"
    "mostrar_resultado\0verificar_entradas_vazias\0"
    "on_Soma_clicked\0on_Subtrair_clicked\0"
    "on_converter_botao_clicked\0on_zerar_clicked\0"
    "on_Dividir_clicked\0on_Multiplicar_clicked\0"
    "on_Calcular_Eletrica_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Janela_Principal[] = {

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
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Janela_Principal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Janela_Principal *_t = static_cast<Janela_Principal *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->obter_informacoes(); break;
        case 1: _t->mostrar_resultado(); break;
        case 2: { bool _r = _t->verificar_entradas_vazias();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->on_Soma_clicked(); break;
        case 4: _t->on_Subtrair_clicked(); break;
        case 5: _t->on_converter_botao_clicked(); break;
        case 6: _t->on_zerar_clicked(); break;
        case 7: _t->on_Dividir_clicked(); break;
        case 8: _t->on_Multiplicar_clicked(); break;
        case 9: _t->on_Calcular_Eletrica_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Janela_Principal::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Janela_Principal.data,
      qt_meta_data_Janela_Principal,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Janela_Principal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Janela_Principal::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Janela_Principal.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Janela_Principal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
