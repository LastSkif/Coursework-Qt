#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QSqlError>
#include <QSqlQuery>
#include <QMessageBox>
#include <QTime>
#include <QDate>
#include <iostream>

#include "addform.h"
#include "deleteform.h"
#include "updateform.h"
#include "cardform.h"
#include "helpform.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

signals:
    void sendID(int id, int appID);

private slots:
    void addPatientGet();
    void addDoctorGet();
    void addAppointmentGet();

    void deletePatientGet();
    void deleteDoctorGet();
    void deleteAppointmentGet();

    void patientUpdateGet();
    void appointmentUpdateGet();

    void on_patientsButton_clicked();
    void on_doctorsButton_clicked();
    void on_appointmentButton_clicked();
    void on_addButton_clicked();
    void on_deleteButton_clicked();
    void on_updateButton_clicked();

    void on_FIOsearchButton_clicked();
    void on_birthDateSearchButton_clicked();
    void on_cardShowButton_clicked();

    void slotHelp();

private:
    Ui::MainWindow *ui;
    QSqlTableModel *model;
    QSqlDatabase db;
    AddForm *form;
    DeleteForm *delForm;
    UpdateForm *upform;
    CardForm *cardform;
    HelpForm *help;
};

#endif // MAINWINDOW_H
