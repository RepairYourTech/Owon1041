/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../MainWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[67];
    char stringdata0[948];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 12), // "onVoltage50V"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 13), // "onVoltageAuto"
QT_MOC_LITERAL(4, 39, 7), // "onShort"
QT_MOC_LITERAL(5, 47, 7), // "onDiode"
QT_MOC_LITERAL(6, 55, 15), // "onResistance50K"
QT_MOC_LITERAL(7, 71, 16), // "onResistanceAuto"
QT_MOC_LITERAL(8, 88, 17), // "onCapacitance50uF"
QT_MOC_LITERAL(9, 106, 17), // "onCapacitanceAuto"
QT_MOC_LITERAL(10, 124, 11), // "onFrequency"
QT_MOC_LITERAL(11, 136, 8), // "onPeriod"
QT_MOC_LITERAL(12, 145, 19), // "onToggleDualDisplay"
QT_MOC_LITERAL(13, 165, 12), // "onToggleHold"
QT_MOC_LITERAL(14, 178, 13), // "onSaveSession"
QT_MOC_LITERAL(15, 192, 13), // "onLoadSession"
QT_MOC_LITERAL(16, 206, 10), // "onRateFast"
QT_MOC_LITERAL(17, 217, 12), // "onRateMedium"
QT_MOC_LITERAL(18, 230, 10), // "onRateSlow"
QT_MOC_LITERAL(19, 241, 12), // "onNullToggle"
QT_MOC_LITERAL(20, 254, 10), // "onDbToggle"
QT_MOC_LITERAL(21, 265, 11), // "onDbmToggle"
QT_MOC_LITERAL(22, 277, 14), // "onMinMaxToggle"
QT_MOC_LITERAL(23, 292, 20), // "onLimitTestingToggle"
QT_MOC_LITERAL(24, 313, 14), // "onStartLogging"
QT_MOC_LITERAL(25, 328, 13), // "onStopLogging"
QT_MOC_LITERAL(26, 342, 12), // "onClearGraph"
QT_MOC_LITERAL(27, 355, 12), // "onExportData"
QT_MOC_LITERAL(28, 368, 11), // "updateGraph"
QT_MOC_LITERAL(29, 380, 5), // "value"
QT_MOC_LITERAL(30, 386, 19), // "onAutoScaleYToggled"
QT_MOC_LITERAL(31, 406, 7), // "checked"
QT_MOC_LITERAL(32, 414, 19), // "onAutoScaleXToggled"
QT_MOC_LITERAL(33, 434, 19), // "onManualMinYChanged"
QT_MOC_LITERAL(34, 454, 19), // "onManualMaxYChanged"
QT_MOC_LITERAL(35, 474, 17), // "onTimeSpanChanged"
QT_MOC_LITERAL(36, 492, 5), // "index"
QT_MOC_LITERAL(37, 498, 19), // "updateYAxisSegments"
QT_MOC_LITERAL(38, 518, 3), // "min"
QT_MOC_LITERAL(39, 522, 3), // "max"
QT_MOC_LITERAL(40, 526, 19), // "updateXAxisSegments"
QT_MOC_LITERAL(41, 546, 15), // "timeSpanSeconds"
QT_MOC_LITERAL(42, 562, 12), // "onAcDcToggle"
QT_MOC_LITERAL(43, 575, 17), // "onTemperatureMode"
QT_MOC_LITERAL(44, 593, 13), // "onCurrentMode"
QT_MOC_LITERAL(45, 607, 18), // "on2Wire4WireToggle"
QT_MOC_LITERAL(46, 626, 14), // "onBeeperToggle"
QT_MOC_LITERAL(47, 641, 19), // "onBrightnessChanged"
QT_MOC_LITERAL(48, 661, 16), // "onAutoZeroToggle"
QT_MOC_LITERAL(49, 678, 19), // "onRemoteLocalToggle"
QT_MOC_LITERAL(50, 698, 17), // "onToggleConfigTab"
QT_MOC_LITERAL(51, 716, 18), // "onConfigureHotkeys"
QT_MOC_LITERAL(52, 735, 16), // "showHotkeyDialog"
QT_MOC_LITERAL(53, 752, 18), // "saveHotkeySettings"
QT_MOC_LITERAL(54, 771, 18), // "loadHotkeySettings"
QT_MOC_LITERAL(55, 790, 12), // "applyHotkeys"
QT_MOC_LITERAL(56, 803, 20), // "onTriggerModeChanged"
QT_MOC_LITERAL(57, 824, 21), // "onTriggerDelayChanged"
QT_MOC_LITERAL(58, 846, 5), // "delay"
QT_MOC_LITERAL(59, 852, 20), // "onSampleCountChanged"
QT_MOC_LITERAL(60, 873, 5), // "count"
QT_MOC_LITERAL(61, 879, 11), // "eventFilter"
QT_MOC_LITERAL(62, 891, 3), // "obj"
QT_MOC_LITERAL(63, 895, 7), // "QEvent*"
QT_MOC_LITERAL(64, 903, 5), // "event"
QT_MOC_LITERAL(65, 909, 20), // "onMeasurementClicked"
QT_MOC_LITERAL(66, 930, 17) // "updateMeasurement"

    },
    "MainWindow\0onVoltage50V\0\0onVoltageAuto\0"
    "onShort\0onDiode\0onResistance50K\0"
    "onResistanceAuto\0onCapacitance50uF\0"
    "onCapacitanceAuto\0onFrequency\0onPeriod\0"
    "onToggleDualDisplay\0onToggleHold\0"
    "onSaveSession\0onLoadSession\0onRateFast\0"
    "onRateMedium\0onRateSlow\0onNullToggle\0"
    "onDbToggle\0onDbmToggle\0onMinMaxToggle\0"
    "onLimitTestingToggle\0onStartLogging\0"
    "onStopLogging\0onClearGraph\0onExportData\0"
    "updateGraph\0value\0onAutoScaleYToggled\0"
    "checked\0onAutoScaleXToggled\0"
    "onManualMinYChanged\0onManualMaxYChanged\0"
    "onTimeSpanChanged\0index\0updateYAxisSegments\0"
    "min\0max\0updateXAxisSegments\0timeSpanSeconds\0"
    "onAcDcToggle\0onTemperatureMode\0"
    "onCurrentMode\0on2Wire4WireToggle\0"
    "onBeeperToggle\0onBrightnessChanged\0"
    "onAutoZeroToggle\0onRemoteLocalToggle\0"
    "onToggleConfigTab\0onConfigureHotkeys\0"
    "showHotkeyDialog\0saveHotkeySettings\0"
    "loadHotkeySettings\0applyHotkeys\0"
    "onTriggerModeChanged\0onTriggerDelayChanged\0"
    "delay\0onSampleCountChanged\0count\0"
    "eventFilter\0obj\0QEvent*\0event\0"
    "onMeasurementClicked\0updateMeasurement"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      54,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  284,    2, 0x08 /* Private */,
       3,    0,  285,    2, 0x08 /* Private */,
       4,    0,  286,    2, 0x08 /* Private */,
       5,    0,  287,    2, 0x08 /* Private */,
       6,    0,  288,    2, 0x08 /* Private */,
       7,    0,  289,    2, 0x08 /* Private */,
       8,    0,  290,    2, 0x08 /* Private */,
       9,    0,  291,    2, 0x08 /* Private */,
      10,    0,  292,    2, 0x08 /* Private */,
      11,    0,  293,    2, 0x08 /* Private */,
      12,    0,  294,    2, 0x08 /* Private */,
      13,    0,  295,    2, 0x08 /* Private */,
      14,    0,  296,    2, 0x08 /* Private */,
      15,    0,  297,    2, 0x08 /* Private */,
      16,    0,  298,    2, 0x08 /* Private */,
      17,    0,  299,    2, 0x08 /* Private */,
      18,    0,  300,    2, 0x08 /* Private */,
      19,    0,  301,    2, 0x08 /* Private */,
      20,    0,  302,    2, 0x08 /* Private */,
      21,    0,  303,    2, 0x08 /* Private */,
      22,    0,  304,    2, 0x08 /* Private */,
      23,    0,  305,    2, 0x08 /* Private */,
      24,    0,  306,    2, 0x08 /* Private */,
      25,    0,  307,    2, 0x08 /* Private */,
      26,    0,  308,    2, 0x08 /* Private */,
      27,    0,  309,    2, 0x08 /* Private */,
      28,    1,  310,    2, 0x08 /* Private */,
      30,    1,  313,    2, 0x08 /* Private */,
      32,    1,  316,    2, 0x08 /* Private */,
      33,    1,  319,    2, 0x08 /* Private */,
      34,    1,  322,    2, 0x08 /* Private */,
      35,    1,  325,    2, 0x08 /* Private */,
      37,    2,  328,    2, 0x08 /* Private */,
      40,    1,  333,    2, 0x08 /* Private */,
      42,    0,  336,    2, 0x08 /* Private */,
      43,    0,  337,    2, 0x08 /* Private */,
      44,    0,  338,    2, 0x08 /* Private */,
      45,    0,  339,    2, 0x08 /* Private */,
      46,    0,  340,    2, 0x08 /* Private */,
      47,    1,  341,    2, 0x08 /* Private */,
      48,    0,  344,    2, 0x08 /* Private */,
      49,    0,  345,    2, 0x08 /* Private */,
      50,    0,  346,    2, 0x08 /* Private */,
      51,    0,  347,    2, 0x08 /* Private */,
      52,    0,  348,    2, 0x08 /* Private */,
      53,    0,  349,    2, 0x08 /* Private */,
      54,    0,  350,    2, 0x08 /* Private */,
      55,    0,  351,    2, 0x08 /* Private */,
      56,    1,  352,    2, 0x08 /* Private */,
      57,    1,  355,    2, 0x08 /* Private */,
      59,    1,  358,    2, 0x08 /* Private */,
      61,    2,  361,    2, 0x08 /* Private */,
      65,    0,  366,    2, 0x08 /* Private */,
      66,    0,  367,    2, 0x08 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void, QMetaType::Bool,   31,
    QMetaType::Void, QMetaType::Bool,   31,
    QMetaType::Void, QMetaType::Double,   29,
    QMetaType::Void, QMetaType::Double,   29,
    QMetaType::Void, QMetaType::Int,   36,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   38,   39,
    QMetaType::Void, QMetaType::Double,   41,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   29,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   36,
    QMetaType::Void, QMetaType::Int,   58,
    QMetaType::Void, QMetaType::Int,   60,
    QMetaType::Bool, QMetaType::QObjectStar, 0x80000000 | 63,   62,   64,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onVoltage50V(); break;
        case 1: _t->onVoltageAuto(); break;
        case 2: _t->onShort(); break;
        case 3: _t->onDiode(); break;
        case 4: _t->onResistance50K(); break;
        case 5: _t->onResistanceAuto(); break;
        case 6: _t->onCapacitance50uF(); break;
        case 7: _t->onCapacitanceAuto(); break;
        case 8: _t->onFrequency(); break;
        case 9: _t->onPeriod(); break;
        case 10: _t->onToggleDualDisplay(); break;
        case 11: _t->onToggleHold(); break;
        case 12: _t->onSaveSession(); break;
        case 13: _t->onLoadSession(); break;
        case 14: _t->onRateFast(); break;
        case 15: _t->onRateMedium(); break;
        case 16: _t->onRateSlow(); break;
        case 17: _t->onNullToggle(); break;
        case 18: _t->onDbToggle(); break;
        case 19: _t->onDbmToggle(); break;
        case 20: _t->onMinMaxToggle(); break;
        case 21: _t->onLimitTestingToggle(); break;
        case 22: _t->onStartLogging(); break;
        case 23: _t->onStopLogging(); break;
        case 24: _t->onClearGraph(); break;
        case 25: _t->onExportData(); break;
        case 26: _t->updateGraph((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 27: _t->onAutoScaleYToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->onAutoScaleXToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: _t->onManualMinYChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 30: _t->onManualMaxYChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 31: _t->onTimeSpanChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->updateYAxisSegments((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 33: _t->updateXAxisSegments((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 34: _t->onAcDcToggle(); break;
        case 35: _t->onTemperatureMode(); break;
        case 36: _t->onCurrentMode(); break;
        case 37: _t->on2Wire4WireToggle(); break;
        case 38: _t->onBeeperToggle(); break;
        case 39: _t->onBrightnessChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 40: _t->onAutoZeroToggle(); break;
        case 41: _t->onRemoteLocalToggle(); break;
        case 42: _t->onToggleConfigTab(); break;
        case 43: _t->onConfigureHotkeys(); break;
        case 44: _t->showHotkeyDialog(); break;
        case 45: _t->saveHotkeySettings(); break;
        case 46: _t->loadHotkeySettings(); break;
        case 47: _t->applyHotkeys(); break;
        case 48: _t->onTriggerModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 49: _t->onTriggerDelayChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 50: _t->onSampleCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 51: { bool _r = _t->eventFilter((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 52: _t->onMeasurementClicked(); break;
        case 53: _t->updateMeasurement(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 54)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 54;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 54)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 54;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
