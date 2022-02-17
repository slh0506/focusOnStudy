/****************************************************************************
** Meta object code from reading C++ file 'StudyLogin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../StudyLogin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StudyLogin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CStudyLogin_t {
    QByteArrayData data[11];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CStudyLogin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CStudyLogin_t qt_meta_stringdata_CStudyLogin = {
    {
QT_MOC_LITERAL(0, 0, 11), // "CStudyLogin"
QT_MOC_LITERAL(1, 12, 14), // "signalUsername"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 11), // "strUsername"
QT_MOC_LITERAL(4, 40, 17), // "onLoginToRegister"
QT_MOC_LITERAL(5, 58, 17), // "onRegisterToLogin"
QT_MOC_LITERAL(6, 76, 10), // "onRegister"
QT_MOC_LITERAL(7, 87, 7), // "onLogin"
QT_MOC_LITERAL(8, 95, 13), // "onModPassword"
QT_MOC_LITERAL(9, 109, 20), // "onConfirmModPassword"
QT_MOC_LITERAL(10, 130, 11) // "onCancelMod"

    },
    "CStudyLogin\0signalUsername\0\0strUsername\0"
    "onLoginToRegister\0onRegisterToLogin\0"
    "onRegister\0onLogin\0onModPassword\0"
    "onConfirmModPassword\0onCancelMod"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CStudyLogin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   57,    2, 0x08 /* Private */,
       5,    0,   58,    2, 0x08 /* Private */,
       6,    0,   59,    2, 0x08 /* Private */,
       7,    0,   60,    2, 0x08 /* Private */,
       8,    1,   61,    2, 0x08 /* Private */,
       9,    0,   64,    2, 0x08 /* Private */,
      10,    0,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CStudyLogin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CStudyLogin *_t = static_cast<CStudyLogin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalUsername((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->onLoginToRegister(); break;
        case 2: _t->onRegisterToLogin(); break;
        case 3: _t->onRegister(); break;
        case 4: _t->onLogin(); break;
        case 5: _t->onModPassword((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->onConfirmModPassword(); break;
        case 7: _t->onCancelMod(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (CStudyLogin::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CStudyLogin::signalUsername)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject CStudyLogin::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CStudyLogin.data,
      qt_meta_data_CStudyLogin,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CStudyLogin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CStudyLogin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CStudyLogin.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int CStudyLogin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void CStudyLogin::signalUsername(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
