#include "mainwindow.h"
#include "ui_mainwindow.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    form = new AddForm;
    delForm = new DeleteForm;
    upform = new UpdateForm;
    cardform = new CardForm;

    db = QSqlDatabase::addDatabase("QODBC");
    QString name="clinic"; //ТУТ УКАЗЫВАЕМ ваше "Имя источника данных"
    db.setDatabaseName(name);
    if(db.open())
    {
        model = new QSqlTableModel(parent,db);
        model->setTable("Пациенты"); //ТУТ УКАЗЫВАЕМ имя таблицы в БД
        model->select();
        ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ui->tableView->setModel(model);
        ui->tableView->resizeColumnsToContents();
        ui->tableView->show();
        ui->tableView->sortByColumn(0, Qt::SortOrder::AscendingOrder);
    }
    else
        QMessageBox::warning(this, "Error", db.lastError().text());

    connect(this, SIGNAL(sendID(int, int)), form, SLOT(getID(int, int)));

    connect(form, SIGNAL(addPatientSend()),this, SLOT(addPatientGet()));
    connect(form, SIGNAL(addDoctorSend()),this, SLOT(addDoctorGet()));
    connect(form, SIGNAL(addAppointmentSend()),this, SLOT(addAppointmentGet()));

    connect(delForm, SIGNAL(deletePatientSend()), this, SLOT(deletePatientGet()));
    connect(delForm, SIGNAL(deleteAppointmentSend()), this, SLOT(deleteAppointmentGet()));
    connect(delForm, SIGNAL(deleteDoctorSend()), this, SLOT(deleteDoctorGet()));

    connect(upform, SIGNAL(patientUpdateSend()), this, SLOT(patientUpdateGet()));
    connect(upform, SIGNAL(appointmentUpdateSend()), this, SLOT(appointmentUpdateGet()));

    connect(ui->helpAction, SIGNAL(triggered()), this, SLOT(slotHelp()));

    MainWindow::setWindowTitle("Клиника");

//    ui->groupBox_3->hide();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_patientsButton_clicked()
{
    model->setTable("Пациенты");
    model->select();
    model->sort(0, Qt::SortOrder::AscendingOrder);
    ui->tableView->setModel(model);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->sortByColumn(0, Qt::SortOrder::AscendingOrder);
}

void MainWindow::on_doctorsButton_clicked()
{
    model->setTable("Врачи");
    model->select();
    ui->tableView->setModel(model);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->sortByColumn(0, Qt::SortOrder::AscendingOrder);
}

void MainWindow::on_appointmentButton_clicked()
{
    model->setTable("Приёмы");
    model->select();
    ui->tableView->setModel(model);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->sortByColumn(0, Qt::SortOrder::AscendingOrder);
}

void MainWindow::on_addButton_clicked()
{
    QSqlQuery quer;
    int ID = 0, IDbuf = 0;
    quer.exec("SELECT * FROM Пациенты");
    while(quer.next())
    {
        IDbuf = quer.value(0).toInt();
        if(IDbuf > ID)
            ID = IDbuf;
//        cout << ID << endl;
    }
    ID++;

    quer.exec("SELECT * FROM Приёмы");
    int appID = 0, appIDbuf = 0;
    while(quer.next()){
        appIDbuf = quer.value(0).toInt();
        if(appIDbuf > appID)
            appID = appIDbuf;
    }
    appID++;

    emit sendID(ID, appID);
    form->show();
}

void MainWindow::addPatientGet()
{
    model->setTable("Пациенты");
    model->select();
    ui->tableView->setModel(model);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->sortByColumn(0, Qt::SortOrder::AscendingOrder);
}

void MainWindow::addDoctorGet()
{
    model->setTable("Врачи");
    model->select();
    ui->tableView->setModel(model);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->sortByColumn(0, Qt::SortOrder::AscendingOrder);
}

void MainWindow::addAppointmentGet()
{
    model->setTable("Приёмы");
    model->select();
    ui->tableView->setModel(model);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->sortByColumn(0, Qt::SortOrder::AscendingOrder);
}

void MainWindow::on_deleteButton_clicked()
{
    delForm->show();
}

void MainWindow::deletePatientGet()
{
    model->setTable("Пациенты");
    model->select();
    ui->tableView->setModel(model);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->sortByColumn(0, Qt::SortOrder::AscendingOrder);
}

void MainWindow::deleteDoctorGet()
{
    model->setTable("Врачи");
    model->select();
    ui->tableView->setModel(model);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->sortByColumn(0, Qt::SortOrder::AscendingOrder);
}

void MainWindow::deleteAppointmentGet()
{
    model->setTable("Приёмы");
    model->select();
    ui->tableView->setModel(model);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->sortByColumn(0, Qt::SortOrder::AscendingOrder);
}

void MainWindow::on_updateButton_clicked()
{
    upform->show();
}

void MainWindow::patientUpdateGet()
{
    model->setTable("Пациенты");
    model->select();
    ui->tableView->setModel(model);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->sortByColumn(0, Qt::SortOrder::AscendingOrder);
}

void MainWindow::appointmentUpdateGet()
{
    model->setTable("Приёмы");
    model->select();
    ui->tableView->setModel(model);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->sortByColumn(0, Qt::SortOrder::AscendingOrder);
}

void MainWindow::on_FIOsearchButton_clicked()
{
    if(ui->familyTextEdit->toPlainText() == "" || ui->nameTextEdit->toPlainText() == "" || ui->fatherTextEdit->toPlainText() == ""){
        QMessageBox::information(this, "Ошибка!", "Заполните пустые поля.", QMessageBox::Ok);
        return;
    }

    QString fam = ui->familyTextEdit->toPlainText(), name = ui->nameTextEdit->toPlainText(), father = ui->fatherTextEdit->toPlainText();
    QString str;
    model->setTable("Пациенты");
    str = "[Фамилия] = '" + fam + "' AND [Имя] = '" + name + "' AND [Отчество] = '" + father + "'";
    model->setFilter(str);
    model->select();
    ui->tableView->setModel(model);
    ui->tableView->resizeColumnsToContents();
}

void MainWindow::on_birthDateSearchButton_clicked()
{
    QString date = ui->birthDateTextEdit->toPlainText();
    QString str;
    model->setTable("Пациенты");
    str = "[Дата рождения] = '" + date + "'";
    model->setFilter(str);
    model->select();
    ui->tableView->setModel(model);
    ui->tableView->resizeColumnsToContents();
}

void MainWindow::on_cardShowButton_clicked()
{
    if (ui->IDtextEdit->toPlainText() == ""){
        QMessageBox::information(this, "Ошибка!", "Введите ID пациента.", QMessageBox::Ok);
        return;
    }

    QString str;
    model->setTable("Приёмы");
    QString idp = ui->IDtextEdit->toPlainText();
    str = "[ID пациента] = " + idp;
    model->setFilter(str);
    model->select();
    ui->tableView->setModel(model);
    ui->tableView->resizeColumnsToContents();

}

void MainWindow::slotHelp()
{
    HelpForm *hlp = new HelpForm();
    hlp->show();
}
