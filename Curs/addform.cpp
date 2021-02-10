#include "addform.h"
#include "ui_addform.h"

using namespace std;

AddForm::AddForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddForm)
{
    ui->setupUi(this);
    AddForm::setWindowTitle("Добавление элемента");
}

AddForm::~AddForm()
{
    delete ui;
}

void AddForm::on_cancelButton_clicked()
{
    ui->IDspinBox->clear();
    ui->familyTextEdit->clear();
    ui->nameTextEdit->clear();
    ui->fatherTextEdit->clear();
    ui->birthDateEdit->clear();
    ui->phoneTextEdit->clear();
    ui->addressTextEdit->clear();
    ui->registrationDateEdit->clear();

    ui->appIDTextEdit->clear();
    ui->appointmentDateEdit->clear();
    ui->appointmentTimeEdit->clear();
    ui->cabinetTextEdit->clear();
    ui->appointmentIDTextEdit->clear();
    ui->doctorTextEdit->clear();
    ui->reasonTextEdit->clear();

    ui->doctorFamilyEdit->clear();
    ui->doctorFatherEdit->clear();
    ui->doctorNameEdit->clear();
    ui->specialEdit->clear();

    this->close();
}



void AddForm::getID(int id, int appID)
{
    ui->IDspinBox->setValue(id);
    QString aID = QString::number(appID);
    ui->appIDTextEdit->setPlainText(aID);
}

void AddForm::on_addPatientButton_clicked()
{
    string name, family, father, birthDate, registrationDate, phone, address;
    name = ui->nameTextEdit->toPlainText().toStdString();
    family = ui->familyTextEdit->toPlainText().toStdString();
    father = ui->fatherTextEdit->toPlainText().toStdString();
    phone = ui->phoneTextEdit->toPlainText().toStdString();
    address = ui->addressTextEdit->toPlainText().toStdString();
    birthDate = ui->birthDateEdit->date().toString().toStdString();
    registrationDate = ui->registrationDateEdit->date().toString().toStdString();

    if(name == "" || family == "" || phone == "" || father == "" || address == ""){
        QMessageBox::information(this, "Ошибка!", "Заполните пустые поля.", QMessageBox::Ok);
        this->close();
        return;
    }

    QSqlQuery query;
    query.last();
    query.prepare("INSERT INTO [Пациенты] ([ID пациента], [Фамилия], [Имя], [Отчество], [Пол], [Дата рождения], [Телефон], [Адрес], [Дата регистрации]) "
                  "VALUES (:ID, :family, :name, :father, :sex, :birthDate, :phone, :address, :registrationDate)");
    query.bindValue(":ID", ui->IDspinBox->value());
    query.bindValue(":family", ui->familyTextEdit->toPlainText());
    query.bindValue(":name", ui->nameTextEdit->toPlainText());
    query.bindValue(":father", ui->fatherTextEdit->toPlainText());
    if(ui->maleButton->isChecked())
        query.bindValue(":sex", "Мужской");
    else
        query.bindValue(":sex", "Женский");
    query.bindValue(":birthDate", ui->birthDateEdit->date());
    query.bindValue(":phone", ui->phoneTextEdit->toPlainText());
    query.bindValue(":address", ui->addressTextEdit->toPlainText());
    query.bindValue(":registrationDate", ui->registrationDateEdit->date());
    query.exec();
    emit addPatientSend();

    ui->IDspinBox->clear();
    ui->familyTextEdit->clear();
    ui->nameTextEdit->clear();
    ui->fatherTextEdit->clear();
    ui->birthDateEdit->clear();
    ui->phoneTextEdit->clear();
    ui->addressTextEdit->clear();
    ui->registrationDateEdit->clear();

    this->close();
}

void AddForm::on_addAppointmentButton_clicked()
{
    QSqlQuery query;
    query.last();
    query.prepare("INSERT INTO [Приёмы] ([ID приёма], [ID пациента], [Дата], [Причина обращения], [Лечащий врач], [Кабинет], [Время]) "
                  "VALUES (:aID, :ID, :date, :reason, :doctor, :office, :time)");
    query.bindValue(":aID", ui->appIDTextEdit->toPlainText().toInt());
    query.bindValue(":ID", ui->appointmentIDTextEdit->toPlainText().toInt());
    query.bindValue(":date", ui->appointmentDateEdit->date());
    query.bindValue(":reason", ui->reasonTextEdit->toPlainText());
    query.bindValue(":doctor", ui->doctorTextEdit->toPlainText());
    query.bindValue(":office", ui->cabinetTextEdit->toPlainText().toInt());
    query.bindValue(":time", ui->appointmentTimeEdit->time());
    query.exec();
    emit addAppointmentSend();

    ui->appointmentDateEdit->clear();
    ui->reasonTextEdit->clear();
    ui->doctorTextEdit->clear();
    ui->cabinetTextEdit->clear();
    ui->appointmentTimeEdit->clear();
    ui->appointmentIDTextEdit->clear();

    this->close();
}

void AddForm::on_addDoctorButton_clicked()
{

    QSqlQuery query;
    query.last();
    query.prepare("INSERT INTO [Врачи] ([Фамилия], [Имя], [Отчество], [Специальность]) "
                  "VALUES (:family, :name, :father, :speciality)");
    query.bindValue(":family", ui->doctorFamilyEdit->toPlainText());
    query.bindValue(":name", ui->doctorNameEdit->toPlainText());
    query.bindValue(":father", ui->doctorFatherEdit->toPlainText());
    query.bindValue(":speciality", ui->specialEdit->toPlainText());
    query.exec();
    emit addDoctorSend();

    ui->doctorFamilyEdit->clear();
    ui->doctorNameEdit->clear();
    ui->doctorFatherEdit->clear();
    ui->specialEdit->clear();

    this->close();
}
