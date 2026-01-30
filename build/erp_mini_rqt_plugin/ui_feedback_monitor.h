/********************************************************************************
** Form generated from reading UI file 'feedback_monitor.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FEEDBACK_MONITOR_H
#define UI_FEEDBACK_MONITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FeedbackMonitorWidget
{
public:
    QWidget *widgetContents;
    QGroupBox *groupBox_7;
    QGroupBox *groupBox_6;
    QLabel *label_15;
    QPlainTextEdit *steering_text_box;
    QPlainTextEdit *speed_text_box;
    QLabel *label_17;
    QPlainTextEdit *heartbeat_text_box;
    QLabel *label_19;
    QGroupBox *groupBox_9;
    QLabel *label_21;
    QPlainTextEdit *estop_text_box;
    QPlainTextEdit *gear_text_box;
    QLabel *label_22;
    QPlainTextEdit *control_mode_text_box;
    QLabel *label_23;
    QGroupBox *groupBox_10;
    QGroupBox *groupBox_11;
    QPlainTextEdit *max_speed_text_box;
    QPlainTextEdit *max_steering_text_box;
    QPlainTextEdit *steering_offset_text_box;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QGroupBox *groupBox_12;
    QPlainTextEdit *baud_rate_text_box;
    QPlainTextEdit *serial_port_text_box;
    QLabel *label_27;
    QLabel *label_28;

    void setupUi(QWidget *FeedbackMonitorWidget)
    {
        if (FeedbackMonitorWidget->objectName().isEmpty())
            FeedbackMonitorWidget->setObjectName(QString::fromUtf8("FeedbackMonitorWidget"));
        FeedbackMonitorWidget->resize(400, 520);
        FeedbackMonitorWidget->setMinimumSize(QSize(400, 520));
        widgetContents = new QWidget(FeedbackMonitorWidget);
        widgetContents->setObjectName(QString::fromUtf8("widgetContents"));
        widgetContents->setGeometry(QRect(0, 0, 401, 521));
        groupBox_7 = new QGroupBox(widgetContents);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(10, 270, 381, 241));
        groupBox_6 = new QGroupBox(groupBox_7);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(10, 140, 360, 90));
        label_15 = new QLabel(groupBox_6);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(130, 30, 100, 20));
        steering_text_box = new QPlainTextEdit(groupBox_6);
        steering_text_box->setObjectName(QString::fromUtf8("steering_text_box"));
        steering_text_box->setGeometry(QRect(130, 50, 100, 30));
        steering_text_box->setReadOnly(true);
        speed_text_box = new QPlainTextEdit(groupBox_6);
        speed_text_box->setObjectName(QString::fromUtf8("speed_text_box"));
        speed_text_box->setGeometry(QRect(10, 50, 100, 30));
        speed_text_box->setReadOnly(true);
        label_17 = new QLabel(groupBox_6);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(10, 30, 100, 20));
        heartbeat_text_box = new QPlainTextEdit(groupBox_6);
        heartbeat_text_box->setObjectName(QString::fromUtf8("heartbeat_text_box"));
        heartbeat_text_box->setGeometry(QRect(250, 50, 100, 30));
        heartbeat_text_box->setReadOnly(true);
        label_19 = new QLabel(groupBox_6);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(250, 30, 100, 20));
        groupBox_9 = new QGroupBox(groupBox_7);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        groupBox_9->setGeometry(QRect(10, 30, 360, 90));
        label_21 = new QLabel(groupBox_9);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(250, 30, 100, 20));
        estop_text_box = new QPlainTextEdit(groupBox_9);
        estop_text_box->setObjectName(QString::fromUtf8("estop_text_box"));
        estop_text_box->setGeometry(QRect(130, 50, 100, 30));
        estop_text_box->setReadOnly(true);
        gear_text_box = new QPlainTextEdit(groupBox_9);
        gear_text_box->setObjectName(QString::fromUtf8("gear_text_box"));
        gear_text_box->setGeometry(QRect(250, 50, 100, 30));
        gear_text_box->setReadOnly(true);
        label_22 = new QLabel(groupBox_9);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(10, 30, 100, 20));
        control_mode_text_box = new QPlainTextEdit(groupBox_9);
        control_mode_text_box->setObjectName(QString::fromUtf8("control_mode_text_box"));
        control_mode_text_box->setGeometry(QRect(10, 50, 100, 30));
        control_mode_text_box->setReadOnly(true);
        label_23 = new QLabel(groupBox_9);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(130, 30, 100, 20));
        groupBox_10 = new QGroupBox(widgetContents);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        groupBox_10->setGeometry(QRect(10, 10, 380, 240));
        groupBox_11 = new QGroupBox(groupBox_10);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        groupBox_11->setGeometry(QRect(10, 140, 360, 90));
        max_speed_text_box = new QPlainTextEdit(groupBox_11);
        max_speed_text_box->setObjectName(QString::fromUtf8("max_speed_text_box"));
        max_speed_text_box->setGeometry(QRect(10, 50, 100, 30));
        max_speed_text_box->setReadOnly(true);
        max_steering_text_box = new QPlainTextEdit(groupBox_11);
        max_steering_text_box->setObjectName(QString::fromUtf8("max_steering_text_box"));
        max_steering_text_box->setGeometry(QRect(130, 50, 100, 30));
        max_steering_text_box->setReadOnly(true);
        steering_offset_text_box = new QPlainTextEdit(groupBox_11);
        steering_offset_text_box->setObjectName(QString::fromUtf8("steering_offset_text_box"));
        steering_offset_text_box->setGeometry(QRect(250, 50, 100, 30));
        steering_offset_text_box->setReadOnly(true);
        label_24 = new QLabel(groupBox_11);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(130, 30, 100, 20));
        label_25 = new QLabel(groupBox_11);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(250, 30, 100, 20));
        label_26 = new QLabel(groupBox_11);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(10, 30, 100, 20));
        groupBox_12 = new QGroupBox(groupBox_10);
        groupBox_12->setObjectName(QString::fromUtf8("groupBox_12"));
        groupBox_12->setGeometry(QRect(10, 30, 240, 90));
        baud_rate_text_box = new QPlainTextEdit(groupBox_12);
        baud_rate_text_box->setObjectName(QString::fromUtf8("baud_rate_text_box"));
        baud_rate_text_box->setGeometry(QRect(130, 50, 100, 30));
        baud_rate_text_box->setReadOnly(true);
        serial_port_text_box = new QPlainTextEdit(groupBox_12);
        serial_port_text_box->setObjectName(QString::fromUtf8("serial_port_text_box"));
        serial_port_text_box->setGeometry(QRect(10, 50, 100, 30));
        serial_port_text_box->setReadOnly(true);
        label_27 = new QLabel(groupBox_12);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(130, 30, 100, 20));
        label_28 = new QLabel(groupBox_12);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(10, 30, 100, 20));

        retranslateUi(FeedbackMonitorWidget);

        QMetaObject::connectSlotsByName(FeedbackMonitorWidget);
    } // setupUi

    void retranslateUi(QWidget *FeedbackMonitorWidget)
    {
        FeedbackMonitorWidget->setWindowTitle(QCoreApplication::translate("FeedbackMonitorWidget", "ERP Mini Feedback Monitor", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("FeedbackMonitorWidget", "Feedbacks", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("FeedbackMonitorWidget", "Control Feedbacks", nullptr));
        label_15->setText(QCoreApplication::translate("FeedbackMonitorWidget", "Steering", nullptr));
        steering_text_box->setPlainText(QCoreApplication::translate("FeedbackMonitorWidget", "-", nullptr));
        speed_text_box->setPlainText(QCoreApplication::translate("FeedbackMonitorWidget", "-", nullptr));
        label_17->setText(QCoreApplication::translate("FeedbackMonitorWidget", "Speed", nullptr));
        heartbeat_text_box->setPlainText(QCoreApplication::translate("FeedbackMonitorWidget", "-", nullptr));
        label_19->setText(QCoreApplication::translate("FeedbackMonitorWidget", "Heartbeat", nullptr));
        groupBox_9->setTitle(QCoreApplication::translate("FeedbackMonitorWidget", "Mode Feedbacks", nullptr));
        label_21->setText(QCoreApplication::translate("FeedbackMonitorWidget", "Gear", nullptr));
        estop_text_box->setPlainText(QCoreApplication::translate("FeedbackMonitorWidget", "-", nullptr));
        gear_text_box->setPlainText(QCoreApplication::translate("FeedbackMonitorWidget", "-", nullptr));
        label_22->setText(QCoreApplication::translate("FeedbackMonitorWidget", "Control Mode", nullptr));
        control_mode_text_box->setPlainText(QCoreApplication::translate("FeedbackMonitorWidget", "-", nullptr));
        label_23->setText(QCoreApplication::translate("FeedbackMonitorWidget", "E-Stop", nullptr));
        groupBox_10->setTitle(QCoreApplication::translate("FeedbackMonitorWidget", "Serial Bridge Parameters", nullptr));
        groupBox_11->setTitle(QCoreApplication::translate("FeedbackMonitorWidget", "Control Parameters", nullptr));
        max_speed_text_box->setPlainText(QCoreApplication::translate("FeedbackMonitorWidget", "-", nullptr));
        max_steering_text_box->setPlainText(QCoreApplication::translate("FeedbackMonitorWidget", "-", nullptr));
        steering_offset_text_box->setPlainText(QCoreApplication::translate("FeedbackMonitorWidget", "-", nullptr));
        label_24->setText(QCoreApplication::translate("FeedbackMonitorWidget", "Max Steering", nullptr));
        label_25->setText(QCoreApplication::translate("FeedbackMonitorWidget", "Steering Offset", nullptr));
        label_26->setText(QCoreApplication::translate("FeedbackMonitorWidget", "Max Speed", nullptr));
        groupBox_12->setTitle(QCoreApplication::translate("FeedbackMonitorWidget", "Serial Port Settings", nullptr));
        baud_rate_text_box->setPlainText(QCoreApplication::translate("FeedbackMonitorWidget", "-", nullptr));
        serial_port_text_box->setPlainText(QCoreApplication::translate("FeedbackMonitorWidget", "-", nullptr));
        label_27->setText(QCoreApplication::translate("FeedbackMonitorWidget", "Baud Rate", nullptr));
        label_28->setText(QCoreApplication::translate("FeedbackMonitorWidget", "Serial Port", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FeedbackMonitorWidget: public Ui_FeedbackMonitorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEEDBACK_MONITOR_H
