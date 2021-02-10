#include "deleteform.h"
#include "ui_deleteform.h"

DeleteForm::DeleteForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DeleteForm)
{
    ui->setupUi(this);
    DeleteForm::setWindowTitle("Удаление элемента");
}

DeleteForm::~DeleteForm()
{
    delete ui;
}

void DeleteForm::on_patientDeleteButton_clicked()
{
    QSqlQuery quer;
    quer.prepare("DELETE * FROM [Пациенты] WHERE [ID пациента] = (:ID)");
    quer.bindValue(":ID", ui->patientIDedit->toPlainText().toInt());
    quer.exec();
    ui->patientIDedit->clear();
    emit deletePatientSend();
    this->close();
}

void DeleteForm::on_appointmentDeleteButton_clicked()
{
    QSqlQuery quer;
    quer.prepare("DELETE * FROM [Приёмы] WHERE [ID приёма] = (:ID)");
    quer.bindValue(":ID", ui->appointmentIDedit->toPlainText().toInt());
    quer.exec();
    ui->appointmentIDedit->clear();
    emit deleteAppointmentSend();
    this->close();
}

void DeleteForm::on_doctorDeleteButton_clicked()
{
    QSqlQuery quer;
    quer.prepare("DELETE * FROM [Врачи] WHERE [Фамилия] = (:family)");
    quer.bindValue(":family", ui->doctorEdit->toPlainText());
    quer.exec();
    ui->doctorEdit->clear();
    emit deleteDoctorSend();
    this->close();
}

void DeleteForm::on_cancelButton_clicked()
{
    ui->patientIDedit->clear();
    ui->appointmentIDedit->clear();
    ui->doctorEdit->clear();
    this->close();
}
