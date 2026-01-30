/********************************************************************************
** Form generated from reading UI file 'control_panel.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROL_PANEL_H
#define UI_CONTROL_PANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ControlPanelWidget
{
public:
    QWidget *widgetContents;
    QGroupBox *groupBox_4;
    QGroupBox *groupBox_2;
    QRadioButton *auto_mode_button;
    QRadioButton *manual_mode_button;
    QGroupBox *groupBox_3;
    QRadioButton *backward_button;
    QRadioButton *forward_button;
    QRadioButton *neutral_button;
    QGroupBox *groupBox;
    QRadioButton *estop_off_button;
    QRadioButton *estop_on_button;
    QPushButton *apply_mode_button;
    QGroupBox *groupBox_8;
    QGroupBox *groupBox_5;
    QSlider *speed_slider;
    QDoubleSpinBox *speed_spin_box;
    QLabel *label;
    QLabel *label_2;
    QGroupBox *groupBox_7;
    QSlider *steering_slider;
    QDoubleSpinBox *steering_spin_box;
    QLabel *label_7;
    QLabel *label_8;
    QCheckBox *activate_control_command_checkbox;

    void setupUi(QWidget *ControlPanelWidget)
    {
        if (ControlPanelWidget->objectName().isEmpty())
            ControlPanelWidget->setObjectName(QString::fromUtf8("ControlPanelWidget"));
        ControlPanelWidget->resize(510, 540);
        ControlPanelWidget->setMinimumSize(QSize(510, 510));
        widgetContents = new QWidget(ControlPanelWidget);
        widgetContents->setObjectName(QString::fromUtf8("widgetContents"));
        widgetContents->setGeometry(QRect(0, 0, 511, 520));
        groupBox_4 = new QGroupBox(widgetContents);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(360, 10, 140, 471));
        groupBox_2 = new QGroupBox(groupBox_4);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 40, 120, 90));
        auto_mode_button = new QRadioButton(groupBox_2);
        auto_mode_button->setObjectName(QString::fromUtf8("auto_mode_button"));
        auto_mode_button->setGeometry(QRect(10, 60, 100, 20));
        manual_mode_button = new QRadioButton(groupBox_2);
        manual_mode_button->setObjectName(QString::fromUtf8("manual_mode_button"));
        manual_mode_button->setGeometry(QRect(10, 30, 100, 20));
        manual_mode_button->setChecked(true);
        groupBox_3 = new QGroupBox(groupBox_4);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 260, 120, 120));
        backward_button = new QRadioButton(groupBox_3);
        backward_button->setObjectName(QString::fromUtf8("backward_button"));
        backward_button->setGeometry(QRect(10, 90, 100, 20));
        forward_button = new QRadioButton(groupBox_3);
        forward_button->setObjectName(QString::fromUtf8("forward_button"));
        forward_button->setGeometry(QRect(10, 30, 100, 20));
        neutral_button = new QRadioButton(groupBox_3);
        neutral_button->setObjectName(QString::fromUtf8("neutral_button"));
        neutral_button->setGeometry(QRect(10, 60, 100, 20));
        neutral_button->setChecked(true);
        groupBox = new QGroupBox(groupBox_4);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 150, 120, 90));
        estop_off_button = new QRadioButton(groupBox);
        estop_off_button->setObjectName(QString::fromUtf8("estop_off_button"));
        estop_off_button->setGeometry(QRect(10, 60, 100, 20));
        estop_on_button = new QRadioButton(groupBox);
        estop_on_button->setObjectName(QString::fromUtf8("estop_on_button"));
        estop_on_button->setGeometry(QRect(10, 30, 100, 20));
        estop_on_button->setChecked(true);
        apply_mode_button = new QPushButton(groupBox_4);
        apply_mode_button->setObjectName(QString::fromUtf8("apply_mode_button"));
        apply_mode_button->setGeometry(QRect(20, 410, 101, 23));
        groupBox_8 = new QGroupBox(widgetContents);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setGeometry(QRect(10, 10, 341, 471));
        groupBox_5 = new QGroupBox(groupBox_8);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(120, 40, 101, 301));
        speed_slider = new QSlider(groupBox_5);
        speed_slider->setObjectName(QString::fromUtf8("speed_slider"));
        speed_slider->setGeometry(QRect(20, 60, 60, 160));
        speed_slider->setMaximum(16);
        speed_slider->setOrientation(Qt::Vertical);
        speed_slider->setTickPosition(QSlider::TicksBothSides);
        speed_slider->setTickInterval(1);
        speed_spin_box = new QDoubleSpinBox(groupBox_5);
        speed_spin_box->setObjectName(QString::fromUtf8("speed_spin_box"));
        speed_spin_box->setGeometry(QRect(20, 260, 60, 25));
        label = new QLabel(groupBox_5);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 30, 60, 20));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(groupBox_5);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 230, 60, 20));
        label_2->setAlignment(Qt::AlignCenter);
        groupBox_7 = new QGroupBox(groupBox_8);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(10, 360, 321, 91));
        steering_slider = new QSlider(groupBox_7);
        steering_slider->setObjectName(QString::fromUtf8("steering_slider"));
        steering_slider->setGeometry(QRect(80, 30, 160, 20));
        steering_slider->setMinimum(-16);
        steering_slider->setMaximum(16);
        steering_slider->setOrientation(Qt::Horizontal);
        steering_slider->setInvertedAppearance(true);
        steering_slider->setTickPosition(QSlider::TicksBothSides);
        steering_slider->setTickInterval(4);
        steering_spin_box = new QDoubleSpinBox(groupBox_7);
        steering_spin_box->setObjectName(QString::fromUtf8("steering_spin_box"));
        steering_spin_box->setGeometry(QRect(130, 60, 60, 25));
        label_7 = new QLabel(groupBox_7);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 30, 60, 20));
        label_7->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(groupBox_7);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(250, 30, 60, 20));
        label_8->setAlignment(Qt::AlignCenter);
        activate_control_command_checkbox = new QCheckBox(widgetContents);
        activate_control_command_checkbox->setObjectName(QString::fromUtf8("activate_control_command_checkbox"));
        activate_control_command_checkbox->setGeometry(QRect(10, 490, 491, 20));
        activate_control_command_checkbox->raise();
        groupBox_8->raise();
        groupBox_4->raise();

        retranslateUi(ControlPanelWidget);

        QMetaObject::connectSlotsByName(ControlPanelWidget);
    } // setupUi

    void retranslateUi(QWidget *ControlPanelWidget)
    {
        ControlPanelWidget->setWindowTitle(QCoreApplication::translate("ControlPanelWidget", "ERP Mini Controller", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("ControlPanelWidget", "Mode Command", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ControlPanelWidget", "Control Mode", nullptr));
        auto_mode_button->setText(QCoreApplication::translate("ControlPanelWidget", "Auto", nullptr));
        manual_mode_button->setText(QCoreApplication::translate("ControlPanelWidget", "Manual", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("ControlPanelWidget", "Gear", nullptr));
        backward_button->setText(QCoreApplication::translate("ControlPanelWidget", "Backward", nullptr));
        forward_button->setText(QCoreApplication::translate("ControlPanelWidget", "Forward", nullptr));
        neutral_button->setText(QCoreApplication::translate("ControlPanelWidget", "Neutral", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ControlPanelWidget", "E-Stop", nullptr));
        estop_off_button->setText(QCoreApplication::translate("ControlPanelWidget", "E-Stop OFF", nullptr));
        estop_on_button->setText(QCoreApplication::translate("ControlPanelWidget", "E-Stop ON", nullptr));
        apply_mode_button->setText(QCoreApplication::translate("ControlPanelWidget", "Apply Mode", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("ControlPanelWidget", "Control Command", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("ControlPanelWidget", "Speed [m/s]", nullptr));
        label->setText(QCoreApplication::translate("ControlPanelWidget", "1.60 m/s", nullptr));
        label_2->setText(QCoreApplication::translate("ControlPanelWidget", "0.00 m/s", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("ControlPanelWidget", "Steering [deg]", nullptr));
        label_7->setText(QCoreApplication::translate("ControlPanelWidget", "16.00\302\260", nullptr));
        label_8->setText(QCoreApplication::translate("ControlPanelWidget", "-16.00\302\260", nullptr));
        activate_control_command_checkbox->setText(QCoreApplication::translate("ControlPanelWidget", "Activate Control Command", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ControlPanelWidget: public Ui_ControlPanelWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROL_PANEL_H
