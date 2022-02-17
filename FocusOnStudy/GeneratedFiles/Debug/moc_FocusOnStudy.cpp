/****************************************************************************
** Meta object code from reading C++ file 'FocusOnStudy.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../FocusOnStudy.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FocusOnStudy.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CFocusOnStudy_t {
    QByteArrayData data[11];
    char stringdata0[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CFocusOnStudy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CFocusOnStudy_t qt_meta_stringdata_CFocusOnStudy = {
    {
QT_MOC_LITERAL(0, 0, 13), // "CFocusOnStudy"
QT_MOC_LITERAL(1, 14, 17), // "signalModPassword"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 11), // "strUsername"
QT_MOC_LITERAL(4, 45, 20), // "onGetCurrentUsername"
QT_MOC_LITERAL(5, 66, 12), // "onStartStudy"
QT_MOC_LITERAL(6, 79, 18), // "onSelectManagePage"
QT_MOC_LITERAL(7, 98, 17), // "onSelectStudyPage"
QT_MOC_LITERAL(8, 116, 17), // "onSelectPlantPage"
QT_MOC_LITERAL(9, 134, 13), // "onModPassword"
QT_MOC_LITERAL(10, 148, 12) // "onSwitchUser"

    },
    "CFocusOnStudy\0signalModPassword\0\0"
    "strUsername\0onGetCurrentUsername\0"
    "onStartStudy\0onSelectManagePage\0"
    "onSelectStudyPage\0onSelectPlantPage\0"
    "onModPassword\0onSwitchUser"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CFocusOnStudy[] = {

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
       4,    1,   57,    2, 0x0a /* Public */,
       5,    0,   60,    2, 0x08 /* Private */,
       6,    0,   61,    2, 0x08 /* Private */,
       7,    0,   62,    2, 0x08 /* Private */,
       8,    0,   63,    2, 0x08 /* Private */,
       9,    0,   64,    2, 0x08 /* Private */,
      10,    0,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CFocusOnStudy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CFocusOnStudy *_t = static_cast<CFocusOnStudy *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalModPassword((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->onGetCurrentUsername((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->onStartStudy(); break;
        case 3: _t->onSelectManagePage(); break;
        case 4: _t->onSelectStudyPage(); break;
        case 5: _t->onSelectPlantPage(); break;
        case 6: _t->onModPassword(); break;
        case 7: _t->onSwitchUser(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (CFocusOnStudy::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CFocusOnStudy::signalModPassword)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject CFocusOnStudy::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CFocusOnStudy.data,
      qt_meta_data_CFocusOnStudy,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CFocusOnStudy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CFocusOnStudy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CFocusOnStudy.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int CFocusOnStudy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void CFocusOnStudy::signalModPassword(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
