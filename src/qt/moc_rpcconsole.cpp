/****************************************************************************
** Meta object code from reading C++ file 'rpcconsole.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/rpcconsole.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rpcconsole.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RPCConsole_t {
    QByteArrayData data[54];
    char stringdata0[732];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RPCConsole_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RPCConsole_t qt_meta_stringdata_RPCConsole = {
    {
QT_MOC_LITERAL(0, 0, 10), // "RPCConsole"
QT_MOC_LITERAL(1, 11, 12), // "stopExecutor"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 10), // "cmdRequest"
QT_MOC_LITERAL(4, 36, 7), // "command"
QT_MOC_LITERAL(5, 44, 25), // "on_lineEdit_returnPressed"
QT_MOC_LITERAL(6, 70, 27), // "on_tabWidget_currentChanged"
QT_MOC_LITERAL(7, 98, 5), // "index"
QT_MOC_LITERAL(8, 104, 33), // "on_openDebugLogfileButton_cli..."
QT_MOC_LITERAL(9, 138, 29), // "on_sldGraphRange_valueChanged"
QT_MOC_LITERAL(10, 168, 5), // "value"
QT_MOC_LITERAL(11, 174, 18), // "updateTrafficStats"
QT_MOC_LITERAL(12, 193, 12), // "totalBytesIn"
QT_MOC_LITERAL(13, 206, 13), // "totalBytesOut"
QT_MOC_LITERAL(14, 220, 11), // "resizeEvent"
QT_MOC_LITERAL(15, 232, 13), // "QResizeEvent*"
QT_MOC_LITERAL(16, 246, 5), // "event"
QT_MOC_LITERAL(17, 252, 9), // "showEvent"
QT_MOC_LITERAL(18, 262, 11), // "QShowEvent*"
QT_MOC_LITERAL(19, 274, 9), // "hideEvent"
QT_MOC_LITERAL(20, 284, 11), // "QHideEvent*"
QT_MOC_LITERAL(21, 296, 25), // "showPeersTableContextMenu"
QT_MOC_LITERAL(22, 322, 5), // "point"
QT_MOC_LITERAL(23, 328, 23), // "showBanTableContextMenu"
QT_MOC_LITERAL(24, 352, 28), // "showOrHideBanTableIfRequired"
QT_MOC_LITERAL(25, 381, 17), // "clearSelectedNode"
QT_MOC_LITERAL(26, 399, 5), // "clear"
QT_MOC_LITERAL(27, 405, 7), // "message"
QT_MOC_LITERAL(28, 413, 8), // "category"
QT_MOC_LITERAL(29, 422, 4), // "html"
QT_MOC_LITERAL(30, 427, 17), // "setNumConnections"
QT_MOC_LITERAL(31, 445, 5), // "count"
QT_MOC_LITERAL(32, 451, 12), // "setNumBlocks"
QT_MOC_LITERAL(33, 464, 9), // "blockDate"
QT_MOC_LITERAL(34, 474, 21), // "nVerificationProgress"
QT_MOC_LITERAL(35, 496, 14), // "setMempoolSize"
QT_MOC_LITERAL(36, 511, 11), // "numberOfTxs"
QT_MOC_LITERAL(37, 523, 6), // "size_t"
QT_MOC_LITERAL(38, 530, 8), // "dynUsage"
QT_MOC_LITERAL(39, 539, 13), // "browseHistory"
QT_MOC_LITERAL(40, 553, 6), // "offset"
QT_MOC_LITERAL(41, 560, 11), // "scrollToEnd"
QT_MOC_LITERAL(42, 572, 12), // "peerSelected"
QT_MOC_LITERAL(43, 585, 14), // "QItemSelection"
QT_MOC_LITERAL(44, 600, 8), // "selected"
QT_MOC_LITERAL(45, 609, 10), // "deselected"
QT_MOC_LITERAL(46, 620, 17), // "peerLayoutChanged"
QT_MOC_LITERAL(47, 638, 22), // "disconnectSelectedNode"
QT_MOC_LITERAL(48, 661, 15), // "banSelectedNode"
QT_MOC_LITERAL(49, 677, 7), // "bantime"
QT_MOC_LITERAL(50, 685, 17), // "unbanSelectedNode"
QT_MOC_LITERAL(51, 703, 11), // "setTabFocus"
QT_MOC_LITERAL(52, 715, 8), // "TabTypes"
QT_MOC_LITERAL(53, 724, 7) // "tabType"

    },
    "RPCConsole\0stopExecutor\0\0cmdRequest\0"
    "command\0on_lineEdit_returnPressed\0"
    "on_tabWidget_currentChanged\0index\0"
    "on_openDebugLogfileButton_clicked\0"
    "on_sldGraphRange_valueChanged\0value\0"
    "updateTrafficStats\0totalBytesIn\0"
    "totalBytesOut\0resizeEvent\0QResizeEvent*\0"
    "event\0showEvent\0QShowEvent*\0hideEvent\0"
    "QHideEvent*\0showPeersTableContextMenu\0"
    "point\0showBanTableContextMenu\0"
    "showOrHideBanTableIfRequired\0"
    "clearSelectedNode\0clear\0message\0"
    "category\0html\0setNumConnections\0count\0"
    "setNumBlocks\0blockDate\0nVerificationProgress\0"
    "setMempoolSize\0numberOfTxs\0size_t\0"
    "dynUsage\0browseHistory\0offset\0scrollToEnd\0"
    "peerSelected\0QItemSelection\0selected\0"
    "deselected\0peerLayoutChanged\0"
    "disconnectSelectedNode\0banSelectedNode\0"
    "bantime\0unbanSelectedNode\0setTabFocus\0"
    "TabTypes\0tabType"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RPCConsole[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  154,    2, 0x06 /* Public */,
       3,    1,  155,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,  158,    2, 0x08 /* Private */,
       6,    1,  159,    2, 0x08 /* Private */,
       8,    0,  162,    2, 0x08 /* Private */,
       9,    1,  163,    2, 0x08 /* Private */,
      11,    2,  166,    2, 0x08 /* Private */,
      14,    1,  171,    2, 0x08 /* Private */,
      17,    1,  174,    2, 0x08 /* Private */,
      19,    1,  177,    2, 0x08 /* Private */,
      21,    1,  180,    2, 0x08 /* Private */,
      23,    1,  183,    2, 0x08 /* Private */,
      24,    0,  186,    2, 0x08 /* Private */,
      25,    0,  187,    2, 0x08 /* Private */,
      26,    0,  188,    2, 0x0a /* Public */,
      27,    3,  189,    2, 0x0a /* Public */,
      27,    2,  196,    2, 0x2a /* Public | MethodCloned */,
      30,    1,  201,    2, 0x0a /* Public */,
      32,    3,  204,    2, 0x0a /* Public */,
      35,    2,  211,    2, 0x0a /* Public */,
      39,    1,  216,    2, 0x0a /* Public */,
      41,    0,  219,    2, 0x0a /* Public */,
      42,    2,  220,    2, 0x0a /* Public */,
      46,    0,  225,    2, 0x0a /* Public */,
      47,    0,  226,    2, 0x0a /* Public */,
      48,    1,  227,    2, 0x0a /* Public */,
      50,    0,  230,    2, 0x0a /* Public */,
      51,    1,  231,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::ULongLong,   12,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 18,   16,
    QMetaType::Void, 0x80000000 | 20,   16,
    QMetaType::Void, QMetaType::QPoint,   22,
    QMetaType::Void, QMetaType::QPoint,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Bool,   28,   27,   29,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   28,   27,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void, QMetaType::Int, QMetaType::QDateTime, QMetaType::Double,   31,   33,   34,
    QMetaType::Void, QMetaType::Long, 0x80000000 | 37,   36,   38,
    QMetaType::Void, QMetaType::Int,   40,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 43, 0x80000000 | 43,   44,   45,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   49,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 52,   53,

       0        // eod
};

void RPCConsole::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RPCConsole *_t = static_cast<RPCConsole *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stopExecutor(); break;
        case 1: _t->cmdRequest((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_lineEdit_returnPressed(); break;
        case 3: _t->on_tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_openDebugLogfileButton_clicked(); break;
        case 5: _t->on_sldGraphRange_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->updateTrafficStats((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2]))); break;
        case 7: _t->resizeEvent((*reinterpret_cast< QResizeEvent*(*)>(_a[1]))); break;
        case 8: _t->showEvent((*reinterpret_cast< QShowEvent*(*)>(_a[1]))); break;
        case 9: _t->hideEvent((*reinterpret_cast< QHideEvent*(*)>(_a[1]))); break;
        case 10: _t->showPeersTableContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 11: _t->showBanTableContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 12: _t->showOrHideBanTableIfRequired(); break;
        case 13: _t->clearSelectedNode(); break;
        case 14: _t->clear(); break;
        case 15: _t->message((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 16: _t->message((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 17: _t->setNumConnections((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->setNumBlocks((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QDateTime(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 19: _t->setMempoolSize((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< size_t(*)>(_a[2]))); break;
        case 20: _t->browseHistory((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->scrollToEnd(); break;
        case 22: _t->peerSelected((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 23: _t->peerLayoutChanged(); break;
        case 24: _t->disconnectSelectedNode(); break;
        case 25: _t->banSelectedNode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->unbanSelectedNode(); break;
        case 27: _t->setTabFocus((*reinterpret_cast< TabTypes(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QItemSelection >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (RPCConsole::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RPCConsole::stopExecutor)) {
                *result = 0;
            }
        }
        {
            typedef void (RPCConsole::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RPCConsole::cmdRequest)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject RPCConsole::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_RPCConsole.data,
      qt_meta_data_RPCConsole,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RPCConsole::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RPCConsole::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RPCConsole.stringdata0))
        return static_cast<void*>(const_cast< RPCConsole*>(this));
    return QWidget::qt_metacast(_clname);
}

int RPCConsole::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    }
    return _id;
}

// SIGNAL 0
void RPCConsole::stopExecutor()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void RPCConsole::cmdRequest(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
