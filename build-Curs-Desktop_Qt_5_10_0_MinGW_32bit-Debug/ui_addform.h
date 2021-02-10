/********************************************************************************
** Form generated from reading UI file 'addform.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDFORM_H
#define UI_ADDFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddForm
{
public:
    QTabWidget *tabWidget;
    QWidget *patient;
    QTextEdit *familyTextEdit;
    QTextEdit *nameTextEdit;
    QTextEdit *fatherTextEdit;
    QLabel *fatherLabel;
    QLabel *nameLabel;
    QLabel *familyLabel;
    QLabel *IDlabel;
    QSpinBox *IDspinBox;
    QGroupBox *sexBox;
    QRadioButton *maleButton;
    QRadioButton *femaleButton;
    QDateEdit *birthDateEdit;
    QLabel *birthDateLabel;
    QTextEdit *phoneTextEdit;
    QLabel *phoneLabel;
    QLabel *registrationDateLabel;
    QDateEdit *registrationDateEdit;
    QPushButton *addPatientButton;
    QLabel *addressLabel;
    QTextEdit *addressTextEdit;
    QWidget *appointment;
    QLabel *cabinetLabel;
    QTextEdit *reasonTextEdit;
    QLabel *doctorLabel;
    QTextEdit *doctorTextEdit;
    QTextEdit *cabinetTextEdit;
    QLabel *appointmentDateLabel;
    QLabel *appointmentIDlabel;
    QDateEdit *appointmentDateEdit;
    QLabel *reasonLabel;
    QTimeEdit *appointmentTimeEdit;
    QLabel *appointmentTimeLabel;
    QPushButton *addAppointmentButton;
    QTextEdit *appointmentIDTextEdit;
    QTextEdit *appIDTextEdit;
    QLabel *appIDlabel;
    QWidget *doctor;
    QLabel *doctorFamilyLabel;
    QTextEdit *doctorNameEdit;
    QLabel *doctorFatherLabel;
    QTextEdit *doctorFatherEdit;
    QTextEdit *doctorFamilyEdit;
    QLabel *specialLabel;
    QLabel *doctorNameLabel;
    QTextEdit *specialEdit;
    QPushButton *addDoctorButton;
    QPushButton *cancelButton;

    void setupUi(QWidget *AddForm)
    {
        if (AddForm->objectName().isEmpty())
            AddForm->setObjectName(QStringLiteral("AddForm"));
        AddForm->resize(699, 598);
        tabWidget = new QTabWidget(AddForm);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 681, 531));
        tabWidget->setFocusPolicy(Qt::ClickFocus);
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Triangular);
        tabWidget->setDocumentMode(false);
        patient = new QWidget();
        patient->setObjectName(QStringLiteral("patient"));
        familyTextEdit = new QTextEdit(patient);
        familyTextEdit->setObjectName(QStringLiteral("familyTextEdit"));
        familyTextEdit->setGeometry(QRect(150, 50, 221, 31));
        familyTextEdit->setFrameShape(QFrame::StyledPanel);
        familyTextEdit->setFrameShadow(QFrame::Sunken);
        familyTextEdit->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        familyTextEdit->setUndoRedoEnabled(true);
        nameTextEdit = new QTextEdit(patient);
        nameTextEdit->setObjectName(QStringLiteral("nameTextEdit"));
        nameTextEdit->setGeometry(QRect(150, 90, 221, 31));
        fatherTextEdit = new QTextEdit(patient);
        fatherTextEdit->setObjectName(QStringLiteral("fatherTextEdit"));
        fatherTextEdit->setGeometry(QRect(150, 130, 221, 31));
        fatherLabel = new QLabel(patient);
        fatherLabel->setObjectName(QStringLiteral("fatherLabel"));
        fatherLabel->setGeometry(QRect(40, 130, 51, 31));
        nameLabel = new QLabel(patient);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setGeometry(QRect(40, 90, 71, 31));
        familyLabel = new QLabel(patient);
        familyLabel->setObjectName(QStringLiteral("familyLabel"));
        familyLabel->setGeometry(QRect(40, 50, 51, 31));
        IDlabel = new QLabel(patient);
        IDlabel->setObjectName(QStringLiteral("IDlabel"));
        IDlabel->setGeometry(QRect(40, 10, 81, 31));
        IDspinBox = new QSpinBox(patient);
        IDspinBox->setObjectName(QStringLiteral("IDspinBox"));
        IDspinBox->setGeometry(QRect(151, 11, 221, 31));
        IDspinBox->setTabletTracking(false);
        IDspinBox->setFocusPolicy(Qt::TabFocus);
        IDspinBox->setAcceptDrops(true);
        IDspinBox->setToolTipDuration(-1);
        IDspinBox->setLayoutDirection(Qt::LeftToRight);
        IDspinBox->setWrapping(true);
        IDspinBox->setFrame(true);
        IDspinBox->setReadOnly(false);
        IDspinBox->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        IDspinBox->setAccelerated(true);
        IDspinBox->setMaximum(10000);
        IDspinBox->setValue(1);
        sexBox = new QGroupBox(patient);
        sexBox->setObjectName(QStringLiteral("sexBox"));
        sexBox->setGeometry(QRect(400, 50, 120, 80));
        maleButton = new QRadioButton(sexBox);
        maleButton->setObjectName(QStringLiteral("maleButton"));
        maleButton->setGeometry(QRect(10, 20, 82, 17));
        maleButton->setChecked(true);
        femaleButton = new QRadioButton(sexBox);
        femaleButton->setObjectName(QStringLiteral("femaleButton"));
        femaleButton->setGeometry(QRect(10, 50, 82, 17));
        birthDateEdit = new QDateEdit(patient);
        birthDateEdit->setObjectName(QStringLiteral("birthDateEdit"));
        birthDateEdit->setGeometry(QRect(150, 170, 221, 31));
        birthDateLabel = new QLabel(patient);
        birthDateLabel->setObjectName(QStringLiteral("birthDateLabel"));
        birthDateLabel->setGeometry(QRect(40, 170, 81, 21));
        birthDateLabel->setFrameShape(QFrame::NoFrame);
        phoneTextEdit = new QTextEdit(patient);
        phoneTextEdit->setObjectName(QStringLiteral("phoneTextEdit"));
        phoneTextEdit->setGeometry(QRect(150, 249, 221, 31));
        phoneLabel = new QLabel(patient);
        phoneLabel->setObjectName(QStringLiteral("phoneLabel"));
        phoneLabel->setGeometry(QRect(40, 250, 81, 21));
        phoneLabel->setFrameShape(QFrame::NoFrame);
        registrationDateLabel = new QLabel(patient);
        registrationDateLabel->setObjectName(QStringLiteral("registrationDateLabel"));
        registrationDateLabel->setGeometry(QRect(40, 290, 101, 21));
        registrationDateLabel->setFrameShape(QFrame::NoFrame);
        registrationDateEdit = new QDateEdit(patient);
        registrationDateEdit->setObjectName(QStringLiteral("registrationDateEdit"));
        registrationDateEdit->setGeometry(QRect(150, 290, 221, 31));
        addPatientButton = new QPushButton(patient);
        addPatientButton->setObjectName(QStringLiteral("addPatientButton"));
        addPatientButton->setGeometry(QRect(110, 460, 481, 41));
        QFont font;
        font.setPointSize(13);
        font.setBold(false);
        font.setWeight(50);
        font.setStrikeOut(false);
        font.setKerning(true);
        font.setStyleStrategy(QFont::PreferDefault);
        addPatientButton->setFont(font);
        addPatientButton->setAutoDefault(false);
        addPatientButton->setFlat(false);
        addressLabel = new QLabel(patient);
        addressLabel->setObjectName(QStringLiteral("addressLabel"));
        addressLabel->setGeometry(QRect(40, 210, 101, 21));
        addressLabel->setFrameShape(QFrame::NoFrame);
        addressTextEdit = new QTextEdit(patient);
        addressTextEdit->setObjectName(QStringLiteral("addressTextEdit"));
        addressTextEdit->setGeometry(QRect(150, 209, 221, 31));
        tabWidget->addTab(patient, QString());
        appointment = new QWidget();
        appointment->setObjectName(QStringLiteral("appointment"));
        cabinetLabel = new QLabel(appointment);
        cabinetLabel->setObjectName(QStringLiteral("cabinetLabel"));
        cabinetLabel->setGeometry(QRect(40, 210, 51, 31));
        reasonTextEdit = new QTextEdit(appointment);
        reasonTextEdit->setObjectName(QStringLiteral("reasonTextEdit"));
        reasonTextEdit->setGeometry(QRect(150, 130, 221, 31));
        doctorLabel = new QLabel(appointment);
        doctorLabel->setObjectName(QStringLiteral("doctorLabel"));
        doctorLabel->setGeometry(QRect(40, 170, 81, 31));
        doctorTextEdit = new QTextEdit(appointment);
        doctorTextEdit->setObjectName(QStringLiteral("doctorTextEdit"));
        doctorTextEdit->setGeometry(QRect(150, 170, 221, 31));
        cabinetTextEdit = new QTextEdit(appointment);
        cabinetTextEdit->setObjectName(QStringLiteral("cabinetTextEdit"));
        cabinetTextEdit->setGeometry(QRect(150, 210, 221, 31));
        cabinetTextEdit->setUndoRedoEnabled(true);
        appointmentDateLabel = new QLabel(appointment);
        appointmentDateLabel->setObjectName(QStringLiteral("appointmentDateLabel"));
        appointmentDateLabel->setGeometry(QRect(40, 90, 91, 31));
        appointmentDateLabel->setFrameShape(QFrame::NoFrame);
        appointmentIDlabel = new QLabel(appointment);
        appointmentIDlabel->setObjectName(QStringLiteral("appointmentIDlabel"));
        appointmentIDlabel->setGeometry(QRect(40, 50, 71, 31));
        appointmentDateEdit = new QDateEdit(appointment);
        appointmentDateEdit->setObjectName(QStringLiteral("appointmentDateEdit"));
        appointmentDateEdit->setGeometry(QRect(150, 91, 221, 31));
        reasonLabel = new QLabel(appointment);
        reasonLabel->setObjectName(QStringLiteral("reasonLabel"));
        reasonLabel->setGeometry(QRect(40, 130, 111, 31));
        appointmentTimeEdit = new QTimeEdit(appointment);
        appointmentTimeEdit->setObjectName(QStringLiteral("appointmentTimeEdit"));
        appointmentTimeEdit->setGeometry(QRect(150, 250, 221, 31));
        appointmentTimeLabel = new QLabel(appointment);
        appointmentTimeLabel->setObjectName(QStringLiteral("appointmentTimeLabel"));
        appointmentTimeLabel->setGeometry(QRect(40, 250, 91, 31));
        addAppointmentButton = new QPushButton(appointment);
        addAppointmentButton->setObjectName(QStringLiteral("addAppointmentButton"));
        addAppointmentButton->setGeometry(QRect(110, 460, 481, 41));
        addAppointmentButton->setFont(font);
        addAppointmentButton->setAutoDefault(false);
        addAppointmentButton->setFlat(false);
        appointmentIDTextEdit = new QTextEdit(appointment);
        appointmentIDTextEdit->setObjectName(QStringLiteral("appointmentIDTextEdit"));
        appointmentIDTextEdit->setGeometry(QRect(150, 50, 221, 31));
        appIDTextEdit = new QTextEdit(appointment);
        appIDTextEdit->setObjectName(QStringLiteral("appIDTextEdit"));
        appIDTextEdit->setGeometry(QRect(150, 10, 221, 31));
        appIDlabel = new QLabel(appointment);
        appIDlabel->setObjectName(QStringLiteral("appIDlabel"));
        appIDlabel->setGeometry(QRect(40, 10, 71, 31));
        tabWidget->addTab(appointment, QString());
        doctor = new QWidget();
        doctor->setObjectName(QStringLiteral("doctor"));
        doctorFamilyLabel = new QLabel(doctor);
        doctorFamilyLabel->setObjectName(QStringLiteral("doctorFamilyLabel"));
        doctorFamilyLabel->setGeometry(QRect(40, 10, 51, 31));
        doctorNameEdit = new QTextEdit(doctor);
        doctorNameEdit->setObjectName(QStringLiteral("doctorNameEdit"));
        doctorNameEdit->setGeometry(QRect(150, 50, 221, 31));
        doctorFatherLabel = new QLabel(doctor);
        doctorFatherLabel->setObjectName(QStringLiteral("doctorFatherLabel"));
        doctorFatherLabel->setGeometry(QRect(40, 90, 51, 31));
        doctorFatherEdit = new QTextEdit(doctor);
        doctorFatherEdit->setObjectName(QStringLiteral("doctorFatherEdit"));
        doctorFatherEdit->setGeometry(QRect(150, 90, 221, 31));
        doctorFamilyEdit = new QTextEdit(doctor);
        doctorFamilyEdit->setObjectName(QStringLiteral("doctorFamilyEdit"));
        doctorFamilyEdit->setGeometry(QRect(150, 10, 221, 31));
        doctorFamilyEdit->setUndoRedoEnabled(true);
        specialLabel = new QLabel(doctor);
        specialLabel->setObjectName(QStringLiteral("specialLabel"));
        specialLabel->setGeometry(QRect(40, 140, 81, 21));
        specialLabel->setFrameShape(QFrame::NoFrame);
        doctorNameLabel = new QLabel(doctor);
        doctorNameLabel->setObjectName(QStringLiteral("doctorNameLabel"));
        doctorNameLabel->setGeometry(QRect(40, 50, 71, 31));
        specialEdit = new QTextEdit(doctor);
        specialEdit->setObjectName(QStringLiteral("specialEdit"));
        specialEdit->setGeometry(QRect(150, 130, 221, 31));
        addDoctorButton = new QPushButton(doctor);
        addDoctorButton->setObjectName(QStringLiteral("addDoctorButton"));
        addDoctorButton->setGeometry(QRect(110, 460, 481, 41));
        addDoctorButton->setFont(font);
        addDoctorButton->setAutoDefault(false);
        addDoctorButton->setFlat(false);
        tabWidget->addTab(doctor, QString());
        cancelButton = new QPushButton(AddForm);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(280, 550, 161, 41));
        QFont font1;
        font1.setPointSize(13);
        cancelButton->setFont(font1);

        retranslateUi(AddForm);

        tabWidget->setCurrentIndex(0);
        addPatientButton->setDefault(true);
        addAppointmentButton->setDefault(true);
        addDoctorButton->setDefault(true);


        QMetaObject::connectSlotsByName(AddForm);
    } // setupUi

    void retranslateUi(QWidget *AddForm)
    {
        AddForm->setWindowTitle(QApplication::translate("AddForm", "Form", nullptr));
        fatherLabel->setText(QApplication::translate("AddForm", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        nameLabel->setText(QApplication::translate("AddForm", "\320\230\320\274\321\217", nullptr));
        familyLabel->setText(QApplication::translate("AddForm", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        IDlabel->setText(QApplication::translate("AddForm", "ID \320\277\320\260\321\206\320\270\320\265\320\275\321\202\320\260", nullptr));
        sexBox->setTitle(QApplication::translate("AddForm", "\320\237\320\276\320\273", nullptr));
        maleButton->setText(QApplication::translate("AddForm", "\320\234\321\203\320\266\321\201\320\272\320\276\320\271", nullptr));
        femaleButton->setText(QApplication::translate("AddForm", "\320\226\320\265\320\275\321\201\320\272\320\270\320\271", nullptr));
        birthDateLabel->setText(QApplication::translate("AddForm", "<html><head/><body><p>\320\224\320\260\321\202\320\260 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217</p></body></html>", nullptr));
        phoneLabel->setText(QApplication::translate("AddForm", "\320\242\320\265\320\273\320\265\321\204\320\276\320\275", nullptr));
        registrationDateLabel->setText(QApplication::translate("AddForm", "\320\224\320\260\321\202\320\260 \321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\320\270", nullptr));
        addPatientButton->setText(QApplication::translate("AddForm", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        addressLabel->setText(QApplication::translate("AddForm", "\320\220\320\264\321\200\320\265\321\201 \320\277\321\200\320\276\320\266\320\270\320\262\320\260\320\275\320\270\321\217", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(patient), QApplication::translate("AddForm", "\320\237\320\260\321\206\320\270\320\265\320\275\321\202\321\213", nullptr));
        cabinetLabel->setText(QApplication::translate("AddForm", "\320\232\320\260\320\261\320\270\320\275\320\265\321\202", nullptr));
        doctorLabel->setText(QApplication::translate("AddForm", "\320\233\320\265\321\207\320\260\321\211\320\270\320\271 \320\262\321\200\320\260\321\207", nullptr));
        appointmentDateLabel->setText(QApplication::translate("AddForm", "\320\224\320\260\321\202\320\260 \320\276\320\261\321\200\320\260\321\211\320\265\320\275\320\270\321\217", nullptr));
        appointmentIDlabel->setText(QApplication::translate("AddForm", "ID \320\277\320\260\321\206\320\270\320\265\320\275\321\202\320\260", nullptr));
        reasonLabel->setText(QApplication::translate("AddForm", "\320\237\321\200\320\270\321\207\320\270\320\275\320\260 \320\276\320\261\321\200\320\260\321\211\320\265\320\275\320\270\321\217", nullptr));
        appointmentTimeLabel->setText(QApplication::translate("AddForm", "\320\222\321\200\320\265\320\274\321\217 \320\276\320\261\321\200\320\260\321\211\320\265\320\275\320\270\321\217", nullptr));
        addAppointmentButton->setText(QApplication::translate("AddForm", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        appIDlabel->setText(QApplication::translate("AddForm", "ID \320\277\321\200\320\270\321\221\320\274\320\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(appointment), QApplication::translate("AddForm", "\320\237\321\200\320\270\321\221\320\274\321\213", nullptr));
        doctorFamilyLabel->setText(QApplication::translate("AddForm", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        doctorFatherLabel->setText(QApplication::translate("AddForm", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        specialLabel->setText(QApplication::translate("AddForm", "\320\241\320\277\320\265\321\206\320\270\320\260\320\273\321\214\320\275\320\276\321\201\321\202\321\214", nullptr));
        doctorNameLabel->setText(QApplication::translate("AddForm", "\320\230\320\274\321\217", nullptr));
        addDoctorButton->setText(QApplication::translate("AddForm", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(doctor), QApplication::translate("AddForm", "\320\222\321\200\320\260\321\207\320\270", nullptr));
        cancelButton->setText(QApplication::translate("AddForm", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddForm: public Ui_AddForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDFORM_H
