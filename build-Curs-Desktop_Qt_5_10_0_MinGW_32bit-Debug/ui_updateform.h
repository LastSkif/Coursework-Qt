/********************************************************************************
** Form generated from reading UI file 'updateform.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEFORM_H
#define UI_UPDATEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UpdateForm
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
    QLabel *birthDateLabel;
    QTextEdit *phoneTextEdit;
    QLabel *phoneLabel;
    QLabel *registrationDateLabel;
    QPushButton *addPatientButton;
    QLabel *addressLabel;
    QTextEdit *addressTextEdit;
    QTextEdit *birthDateEdit;
    QTextEdit *registrationDateEdit;
    QTextEdit *IDtextEdit;
    QWidget *appointment;
    QLabel *cabinetLabel;
    QTextEdit *reasonTextEdit;
    QLabel *doctorLabel;
    QTextEdit *doctorTextEdit;
    QTextEdit *cabinetTextEdit;
    QLabel *appointmentDateLabel;
    QLabel *reasonLabel;
    QLabel *appointmentTimeLabel;
    QPushButton *addAppointmentButton;
    QTextEdit *appIDTextEdit;
    QLabel *appIDlabel;
    QTextEdit *appDateTextEdit;
    QTextEdit *appTimeTextEdit;
    QPushButton *cancelButton;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *UpdateForm)
    {
        if (UpdateForm->objectName().isEmpty())
            UpdateForm->setObjectName(QStringLiteral("UpdateForm"));
        UpdateForm->resize(699, 555);
        tabWidget = new QTabWidget(UpdateForm);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 50, 681, 421));
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
        birthDateLabel = new QLabel(patient);
        birthDateLabel->setObjectName(QStringLiteral("birthDateLabel"));
        birthDateLabel->setGeometry(QRect(40, 170, 81, 31));
        birthDateLabel->setFrameShape(QFrame::NoFrame);
        phoneTextEdit = new QTextEdit(patient);
        phoneTextEdit->setObjectName(QStringLiteral("phoneTextEdit"));
        phoneTextEdit->setGeometry(QRect(150, 249, 221, 31));
        phoneLabel = new QLabel(patient);
        phoneLabel->setObjectName(QStringLiteral("phoneLabel"));
        phoneLabel->setGeometry(QRect(40, 250, 81, 31));
        phoneLabel->setFrameShape(QFrame::NoFrame);
        registrationDateLabel = new QLabel(patient);
        registrationDateLabel->setObjectName(QStringLiteral("registrationDateLabel"));
        registrationDateLabel->setGeometry(QRect(40, 290, 101, 31));
        registrationDateLabel->setFrameShape(QFrame::NoFrame);
        addPatientButton = new QPushButton(patient);
        addPatientButton->setObjectName(QStringLiteral("addPatientButton"));
        addPatientButton->setGeometry(QRect(100, 350, 481, 41));
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
        addressLabel->setGeometry(QRect(40, 210, 101, 31));
        addressLabel->setFrameShape(QFrame::NoFrame);
        addressTextEdit = new QTextEdit(patient);
        addressTextEdit->setObjectName(QStringLiteral("addressTextEdit"));
        addressTextEdit->setGeometry(QRect(150, 209, 221, 31));
        birthDateEdit = new QTextEdit(patient);
        birthDateEdit->setObjectName(QStringLiteral("birthDateEdit"));
        birthDateEdit->setGeometry(QRect(150, 170, 221, 31));
        registrationDateEdit = new QTextEdit(patient);
        registrationDateEdit->setObjectName(QStringLiteral("registrationDateEdit"));
        registrationDateEdit->setGeometry(QRect(150, 290, 221, 31));
        IDtextEdit = new QTextEdit(patient);
        IDtextEdit->setObjectName(QStringLiteral("IDtextEdit"));
        IDtextEdit->setGeometry(QRect(150, 10, 221, 31));
        IDtextEdit->setFrameShape(QFrame::StyledPanel);
        IDtextEdit->setFrameShadow(QFrame::Sunken);
        IDtextEdit->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        IDtextEdit->setUndoRedoEnabled(true);
        tabWidget->addTab(patient, QString());
        appointment = new QWidget();
        appointment->setObjectName(QStringLiteral("appointment"));
        cabinetLabel = new QLabel(appointment);
        cabinetLabel->setObjectName(QStringLiteral("cabinetLabel"));
        cabinetLabel->setGeometry(QRect(40, 170, 51, 31));
        reasonTextEdit = new QTextEdit(appointment);
        reasonTextEdit->setObjectName(QStringLiteral("reasonTextEdit"));
        reasonTextEdit->setGeometry(QRect(150, 90, 221, 31));
        doctorLabel = new QLabel(appointment);
        doctorLabel->setObjectName(QStringLiteral("doctorLabel"));
        doctorLabel->setGeometry(QRect(40, 130, 81, 31));
        doctorTextEdit = new QTextEdit(appointment);
        doctorTextEdit->setObjectName(QStringLiteral("doctorTextEdit"));
        doctorTextEdit->setGeometry(QRect(150, 130, 221, 31));
        cabinetTextEdit = new QTextEdit(appointment);
        cabinetTextEdit->setObjectName(QStringLiteral("cabinetTextEdit"));
        cabinetTextEdit->setGeometry(QRect(150, 170, 221, 31));
        QFont font1;
        font1.setPointSize(8);
        cabinetTextEdit->setFont(font1);
        cabinetTextEdit->setUndoRedoEnabled(true);
        appointmentDateLabel = new QLabel(appointment);
        appointmentDateLabel->setObjectName(QStringLiteral("appointmentDateLabel"));
        appointmentDateLabel->setGeometry(QRect(40, 50, 91, 31));
        appointmentDateLabel->setFrameShape(QFrame::NoFrame);
        reasonLabel = new QLabel(appointment);
        reasonLabel->setObjectName(QStringLiteral("reasonLabel"));
        reasonLabel->setGeometry(QRect(40, 90, 111, 31));
        appointmentTimeLabel = new QLabel(appointment);
        appointmentTimeLabel->setObjectName(QStringLiteral("appointmentTimeLabel"));
        appointmentTimeLabel->setGeometry(QRect(40, 210, 91, 31));
        addAppointmentButton = new QPushButton(appointment);
        addAppointmentButton->setObjectName(QStringLiteral("addAppointmentButton"));
        addAppointmentButton->setGeometry(QRect(100, 350, 481, 41));
        addAppointmentButton->setFont(font);
        addAppointmentButton->setAutoDefault(false);
        addAppointmentButton->setFlat(false);
        appIDTextEdit = new QTextEdit(appointment);
        appIDTextEdit->setObjectName(QStringLiteral("appIDTextEdit"));
        appIDTextEdit->setGeometry(QRect(150, 10, 221, 31));
        appIDlabel = new QLabel(appointment);
        appIDlabel->setObjectName(QStringLiteral("appIDlabel"));
        appIDlabel->setGeometry(QRect(40, 10, 71, 31));
        appDateTextEdit = new QTextEdit(appointment);
        appDateTextEdit->setObjectName(QStringLiteral("appDateTextEdit"));
        appDateTextEdit->setGeometry(QRect(150, 50, 221, 31));
        appTimeTextEdit = new QTextEdit(appointment);
        appTimeTextEdit->setObjectName(QStringLiteral("appTimeTextEdit"));
        appTimeTextEdit->setGeometry(QRect(150, 210, 221, 31));
        appTimeTextEdit->setUndoRedoEnabled(true);
        tabWidget->addTab(appointment, QString());
        cancelButton = new QPushButton(UpdateForm);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(280, 480, 151, 51));
        QFont font2;
        font2.setPointSize(13);
        cancelButton->setFont(font2);
        label = new QLabel(UpdateForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(200, 0, 301, 31));
        QFont font3;
        font3.setPointSize(10);
        label->setFont(font3);
        label_2 = new QLabel(UpdateForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(160, 30, 391, 21));
        QFont font4;
        font4.setPointSize(12);
        label_2->setFont(font4);
        label_2->setScaledContents(false);

        retranslateUi(UpdateForm);

        tabWidget->setCurrentIndex(0);
        addPatientButton->setDefault(true);
        addAppointmentButton->setDefault(true);


        QMetaObject::connectSlotsByName(UpdateForm);
    } // setupUi

    void retranslateUi(QWidget *UpdateForm)
    {
        UpdateForm->setWindowTitle(QApplication::translate("UpdateForm", "Form", nullptr));
        fatherLabel->setText(QApplication::translate("UpdateForm", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        nameLabel->setText(QApplication::translate("UpdateForm", "\320\230\320\274\321\217", nullptr));
        familyLabel->setText(QApplication::translate("UpdateForm", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        IDlabel->setText(QApplication::translate("UpdateForm", "ID \320\277\320\260\321\206\320\270\320\265\320\275\321\202\320\260", nullptr));
        birthDateLabel->setText(QApplication::translate("UpdateForm", "<html><head/><body><p>\320\224\320\260\321\202\320\260 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217</p></body></html>", nullptr));
        phoneLabel->setText(QApplication::translate("UpdateForm", "\320\242\320\265\320\273\320\265\321\204\320\276\320\275", nullptr));
        registrationDateLabel->setText(QApplication::translate("UpdateForm", "\320\224\320\260\321\202\320\260 \321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\320\270", nullptr));
        addPatientButton->setText(QApplication::translate("UpdateForm", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        addressLabel->setText(QApplication::translate("UpdateForm", "\320\220\320\264\321\200\320\265\321\201 \320\277\321\200\320\276\320\266\320\270\320\262\320\260\320\275\320\270\321\217", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(patient), QApplication::translate("UpdateForm", "\320\237\320\260\321\206\320\270\320\265\320\275\321\202\321\213", nullptr));
        cabinetLabel->setText(QApplication::translate("UpdateForm", "\320\232\320\260\320\261\320\270\320\275\320\265\321\202", nullptr));
        doctorLabel->setText(QApplication::translate("UpdateForm", "\320\233\320\265\321\207\320\260\321\211\320\270\320\271 \320\262\321\200\320\260\321\207", nullptr));
        appointmentDateLabel->setText(QApplication::translate("UpdateForm", "\320\224\320\260\321\202\320\260 \320\276\320\261\321\200\320\260\321\211\320\265\320\275\320\270\321\217", nullptr));
        reasonLabel->setText(QApplication::translate("UpdateForm", "\320\237\321\200\320\270\321\207\320\270\320\275\320\260 \320\276\320\261\321\200\320\260\321\211\320\265\320\275\320\270\321\217", nullptr));
        appointmentTimeLabel->setText(QApplication::translate("UpdateForm", "\320\222\321\200\320\265\320\274\321\217 \320\276\320\261\321\200\320\260\321\211\320\265\320\275\320\270\321\217", nullptr));
        addAppointmentButton->setText(QApplication::translate("UpdateForm", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        appIDlabel->setText(QApplication::translate("UpdateForm", "ID \320\277\321\200\320\270\321\221\320\274\320\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(appointment), QApplication::translate("UpdateForm", "\320\237\321\200\320\270\321\221\320\274\321\213", nullptr));
        cancelButton->setText(QApplication::translate("UpdateForm", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        label->setText(QApplication::translate("UpdateForm", "\320\227\320\260\320\277\320\276\320\273\320\275\320\270\321\202\320\265 \320\277\320\276\320\273\321\217, \320\272\320\276\321\202\320\276\321\200\321\213\320\265 \321\205\320\276\321\202\320\270\321\202\320\265 \320\276\321\202\321\200\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        label_2->setText(QApplication::translate("UpdateForm", "\320\236\321\201\321\202\320\260\320\262\321\214\321\202\320\265 \320\277\321\203\321\201\321\202\321\213\320\274\320\270 \320\277\320\276\320\273\321\217, \320\272\320\276\321\202\320\276\321\200\321\213\320\265 \320\275\320\265 \320\275\321\203\320\266\320\275\320\276 \320\274\320\265\320\275\321\217\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpdateForm: public Ui_UpdateForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEFORM_H
