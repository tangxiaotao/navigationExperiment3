/****************************************************************************
** Meta object code from reading C++ file 'recvthread.h'
**
** Created: Sun Apr 30 15:41:12 2017
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "recvthread.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'recvthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_recvthread[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      25,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      37,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_recvthread[] = {
    "recvthread\0\0send_theta()\0send_data()\0"
    "pilotFlagSlot(int)\0"
};

const QMetaObject recvthread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_recvthread,
      qt_meta_data_recvthread, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &recvthread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *recvthread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *recvthread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_recvthread))
        return static_cast<void*>(const_cast< recvthread*>(this));
    return QThread::qt_metacast(_clname);
}

int recvthread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: send_theta(); break;
        case 1: send_data(); break;
        case 2: pilotFlagSlot((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void recvthread::send_theta()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void recvthread::send_data()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
