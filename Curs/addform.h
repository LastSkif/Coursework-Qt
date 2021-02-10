#ifndef ADDFORM_H
#define ADDFORM_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QSqlError>
#include <QSqlQuery>
#include <QMessageBox>
#include <QDate>
#include <iostream>
#include <QTextCodec>

using namespace std;

namespace Ui {
class AddForm;
}

class AddForm : public QWidget
{
    Q_OBJECT

public:
    explicit AddForm(QWidget *parent = 0);
    ~AddForm();

signals:
    void addPatientSend();
    void addDoctorSend();
    void addAppointmentSend();

private slots:
    void getID(int id, int appID);
    void on_cancelButton_clicked();
    void on_addPatientButton_clicked();

    void on_addAppointmentButton_clicked();

    void on_addDoctorButton_clicked();

private:
    Ui::AddForm *ui;
    QSqlDatabase db;
};

#endif // ADDFORM_H
