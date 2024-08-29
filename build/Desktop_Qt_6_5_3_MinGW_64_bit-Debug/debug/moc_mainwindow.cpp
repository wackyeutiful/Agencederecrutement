/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCharts/qlineseries.h>
#include <QtCharts/qabstractbarseries.h>
#include <QtCharts/qvbarmodelmapper.h>
#include <QtCharts/qboxplotseries.h>
#include <QtCharts/qcandlestickseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qpieseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qboxplotseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qpieseries.h>
#include <QtCharts/qpieseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qxyseries.h>
#include <QtCharts/qxyseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qboxplotseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qpieseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qxyseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "on_pushButton_clicked",
    "",
    "on_pushButton_3_clicked",
    "on_pushButton_2_clicked",
    "on_afficher_activated",
    "QModelIndex",
    "index",
    "on_lineEdit_textChanged",
    "arg1",
    "on_pushButton_4_clicked",
    "on_pushButton_6_clicked",
    "on_pushButton_5_clicked",
    "on_affichagef_activated",
    "on_lineEdit_3_textChanged",
    "on_pushButton_7_clicked",
    "on_pdf_clicked",
    "on_comboBox_activated",
    "on_comboBox_2_activated",
    "on_stat_clicked",
    "on_statf_clicked",
    "on_pushButton_8_clicked",
    "on_pushButton_9_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[46];
    char stringdata0[11];
    char stringdata1[22];
    char stringdata2[1];
    char stringdata3[24];
    char stringdata4[24];
    char stringdata5[22];
    char stringdata6[12];
    char stringdata7[6];
    char stringdata8[24];
    char stringdata9[5];
    char stringdata10[24];
    char stringdata11[24];
    char stringdata12[24];
    char stringdata13[24];
    char stringdata14[26];
    char stringdata15[24];
    char stringdata16[15];
    char stringdata17[22];
    char stringdata18[24];
    char stringdata19[16];
    char stringdata20[17];
    char stringdata21[24];
    char stringdata22[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 21),  // "on_pushButton_clicked"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 23),  // "on_pushButton_3_clicked"
        QT_MOC_LITERAL(58, 23),  // "on_pushButton_2_clicked"
        QT_MOC_LITERAL(82, 21),  // "on_afficher_activated"
        QT_MOC_LITERAL(104, 11),  // "QModelIndex"
        QT_MOC_LITERAL(116, 5),  // "index"
        QT_MOC_LITERAL(122, 23),  // "on_lineEdit_textChanged"
        QT_MOC_LITERAL(146, 4),  // "arg1"
        QT_MOC_LITERAL(151, 23),  // "on_pushButton_4_clicked"
        QT_MOC_LITERAL(175, 23),  // "on_pushButton_6_clicked"
        QT_MOC_LITERAL(199, 23),  // "on_pushButton_5_clicked"
        QT_MOC_LITERAL(223, 23),  // "on_affichagef_activated"
        QT_MOC_LITERAL(247, 25),  // "on_lineEdit_3_textChanged"
        QT_MOC_LITERAL(273, 23),  // "on_pushButton_7_clicked"
        QT_MOC_LITERAL(297, 14),  // "on_pdf_clicked"
        QT_MOC_LITERAL(312, 21),  // "on_comboBox_activated"
        QT_MOC_LITERAL(334, 23),  // "on_comboBox_2_activated"
        QT_MOC_LITERAL(358, 15),  // "on_stat_clicked"
        QT_MOC_LITERAL(374, 16),  // "on_statf_clicked"
        QT_MOC_LITERAL(391, 23),  // "on_pushButton_8_clicked"
        QT_MOC_LITERAL(415, 23)   // "on_pushButton_9_clicked"
    },
    "MainWindow",
    "on_pushButton_clicked",
    "",
    "on_pushButton_3_clicked",
    "on_pushButton_2_clicked",
    "on_afficher_activated",
    "QModelIndex",
    "index",
    "on_lineEdit_textChanged",
    "arg1",
    "on_pushButton_4_clicked",
    "on_pushButton_6_clicked",
    "on_pushButton_5_clicked",
    "on_affichagef_activated",
    "on_lineEdit_3_textChanged",
    "on_pushButton_7_clicked",
    "on_pdf_clicked",
    "on_comboBox_activated",
    "on_comboBox_2_activated",
    "on_stat_clicked",
    "on_statf_clicked",
    "on_pushButton_8_clicked",
    "on_pushButton_9_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  122,    2, 0x08,    1 /* Private */,
       3,    0,  123,    2, 0x08,    2 /* Private */,
       4,    0,  124,    2, 0x08,    3 /* Private */,
       5,    1,  125,    2, 0x08,    4 /* Private */,
       8,    1,  128,    2, 0x08,    6 /* Private */,
      10,    0,  131,    2, 0x08,    8 /* Private */,
      11,    0,  132,    2, 0x08,    9 /* Private */,
      12,    0,  133,    2, 0x08,   10 /* Private */,
      13,    1,  134,    2, 0x08,   11 /* Private */,
      14,    1,  137,    2, 0x08,   13 /* Private */,
      15,    0,  140,    2, 0x08,   15 /* Private */,
      16,    0,  141,    2, 0x08,   16 /* Private */,
      17,    1,  142,    2, 0x08,   17 /* Private */,
      18,    1,  145,    2, 0x08,   19 /* Private */,
      19,    0,  148,    2, 0x08,   21 /* Private */,
      20,    0,  149,    2, 0x08,   22 /* Private */,
      21,    0,  150,    2, 0x08,   23 /* Private */,
      22,    0,  151,    2, 0x08,   24 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'on_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_3_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_afficher_activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_lineEdit_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_pushButton_4_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_6_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_5_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_affichagef_activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_lineEdit_3_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_pushButton_7_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pdf_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_comboBox_activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_comboBox_2_activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_stat_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_statf_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_8_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_9_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_pushButton_3_clicked(); break;
        case 2: _t->on_pushButton_2_clicked(); break;
        case 3: _t->on_afficher_activated((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 4: _t->on_lineEdit_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->on_pushButton_4_clicked(); break;
        case 6: _t->on_pushButton_6_clicked(); break;
        case 7: _t->on_pushButton_5_clicked(); break;
        case 8: _t->on_affichagef_activated((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 9: _t->on_lineEdit_3_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->on_pushButton_7_clicked(); break;
        case 11: _t->on_pdf_clicked(); break;
        case 12: _t->on_comboBox_activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->on_comboBox_2_activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 14: _t->on_stat_clicked(); break;
        case 15: _t->on_statf_clicked(); break;
        case 16: _t->on_pushButton_8_clicked(); break;
        case 17: _t->on_pushButton_9_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 18;
    }
    return _id;
}
QT_WARNING_POP
