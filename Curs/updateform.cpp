#include "updateform.h"
#include "ui_updateform.h"

UpdateForm::UpdateForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UpdateForm)
{
    ui->setupUi(this);
    UpdateForm::setWindowTitle("Редактирование записи");
}

UpdateForm::~UpdateForm()
{
    delete ui;
}

void UpdateForm::on_cancelButton_clicked()
{
    ui->IDtextEdit->clear();
    ui->familyTextEdit->clear();
    ui->nameTextEdit->clear();
    ui->fatherTextEdit->clear();
    ui->birthDateEdit->clear();
    ui->phoneTextEdit->clear();
    ui->addressTextEdit->clear();
    ui->registrationDateEdit->clear();

    ui->appIDTextEdit->clear();
    ui->appDateTextEdit->clear();
    ui->appTimeTextEdit->clear();
    ui->cabinetTextEdit->clear();
    ui->doctorTextEdit->clear();
    ui->reasonTextEdit->clear();

    this->close();
    this->close();
}

void UpdateForm::on_addAppointmentButton_clicked()
{
    QSqlQuery quer;
    if(ui->appIDTextEdit->toPlainText() == ""){
        QMessageBox::information(this, "Ошибка", "Заполните поле 'ID приёма'!");
        return;
    }
    if(ui->appDateTextEdit->toPlainText() != ""){
        quer.prepare("UPDATE [Приёмы] SET [Дата] = :date WHERE [ID приёма] = :id");
        quer.bindValue(":date", ui->appDateTextEdit->toPlainText());
        quer.bindValue(":id", ui->appIDTextEdit->toPlainText().toInt());
        quer.exec();
    }
    if(ui->cabinetTextEdit->toPlainText() != ""){
        quer.prepare("UPDATE [Приёмы] SET [Кабинет] = :cab WHERE [ID приёма] = :id");
        quer.bindValue(":cab", ui->cabinetTextEdit->toPlainText());
        quer.bindValue(":id", ui->appIDTextEdit->toPlainText().toInt());
        quer.exec();
    }
    if(ui->reasonTextEdit->toPlainText() != ""){
        quer.prepare("UPDATE [Приёмы] SET [Причина обращения] = :reason WHERE [ID приёма] = :id");
        quer.bindValue(":reason", ui->reasonTextEdit->toPlainText());
        quer.bindValue(":id", ui->appIDTextEdit->toPlainText().toInt());
        quer.exec();
    }
    if(ui->appTimeTextEdit->toPlainText() != ""){
        quer.prepare("UPDATE [Приёмы] SET [Время] = :time WHERE [ID приёма] = :id");
        quer.bindValue(":time", ui->appTimeTextEdit->toPlainText());
        quer.bindValue(":id", ui->appIDTextEdit->toPlainText().toInt());
        quer.exec();
    }
    if(ui->doctorTextEdit->toPlainText() != ""){
        quer.prepare("UPDATE [Приёмы] SET [Лечащий врач] = :doc WHERE [ID приёма] = :id");
        quer.bindValue(":doc", ui->doctorTextEdit->toPlainText());
        quer.bindValue(":id", ui->appIDTextEdit->toPlainText().toInt());
        quer.exec();
    }
    emit appointmentUpdateSend();

    ui->appIDTextEdit->clear();
    ui->appDateTextEdit->clear();
    ui->appTimeTextEdit->clear();
    ui->cabinetTextEdit->clear();
    ui->doctorTextEdit->clear();
    ui->reasonTextEdit->clear();

    this->close();
}

void UpdateForm::on_addPatientButton_clicked()
{
    QSqlQuery quer;
    if(ui->IDtextEdit->toPlainText() == ""){
        QMessageBox::information(this, "Ошибка", "Заполните поле 'ID пациента'!");
        return;
    }
    if(ui->familyTextEdit->toPlainText() != ""){
        quer.prepare("UPDATE [Пациенты] SET [Фамилия] = :family WHERE [ID пациента] = :id");
        quer.bindValue(":family", ui->familyTextEdit->toPlainText());
        quer.bindValue(":id", ui->IDtextEdit->toPlainText().toInt());
        quer.exec();
    }
    if(ui->nameTextEdit->toPlainText() != ""){
        quer.prepare("UPDATE [Пациенты] SET [Имя] = :name WHERE [ID пациента] = :id");
        quer.bindValue(":name", ui->nameTextEdit->toPlainText());
        quer.bindValue(":id", ui->IDtextEdit->toPlainText().toInt());
        quer.exec();
    }
    if(ui->fatherTextEdit->toPlainText() != ""){
        quer.prepare("UPDATE [Пациенты] SET [Отчество] = :father WHERE [ID пациента] = :id");
        quer.bindValue(":father", ui->fatherTextEdit->toPlainText());
        quer.bindValue(":id", ui->IDtextEdit->toPlainText().toInt());
        quer.exec();
    }
    if(ui->birthDateEdit->toPlainText() != ""){
        quer.prepare("UPDATE [Пациенты] SET [Дата рождения] = :birthDate WHERE [ID пациента] = :id");
        quer.bindValue(":birthDate", ui->birthDateEdit->toPlainText());
        quer.bindValue(":id", ui->IDtextEdit->toPlainText().toInt());
        quer.exec();
    }
    if(ui->addressTextEdit->toPlainText() != ""){
        quer.prepare("UPDATE [Пациенты] SET [Адрес] = :address WHERE [ID пациента] = :id");
        quer.bindValue(":address", ui->addressTextEdit->toPlainText());
        quer.bindValue(":id", ui->IDtextEdit->toPlainText().toInt());
        quer.exec();
    }
    if(ui->phoneTextEdit->toPlainText() != ""){
        quer.prepare("UPDATE [Пациенты] SET [Телефон] = :phone WHERE [ID пациента] = :id");
        quer.bindValue(":phone", ui->phoneTextEdit->toPlainText());
        quer.bindValue(":id", ui->IDtextEdit->toPlainText().toInt());
        quer.exec();
    }
    if(ui->registrationDateEdit->toPlainText() != ""){
        quer.prepare("UPDATE [Пациенты] SET [Дата регистрации] = :registration WHERE [ID пациента] = :id");
        quer.bindValue(":registration", ui->registrationDateEdit->toPlainText());
        quer.bindValue(":id", ui->IDtextEdit->toPlainText().toInt());
        quer.exec();
    }
    emit patientUpdateSend();

    ui->IDtextEdit->clear();
    ui->familyTextEdit->clear();
    ui->nameTextEdit->clear();
    ui->fatherTextEdit->clear();
    ui->birthDateEdit->clear();
    ui->phoneTextEdit->clear();
    ui->addressTextEdit->clear();
    ui->registrationDateEdit->clear();

    this->close();

}
