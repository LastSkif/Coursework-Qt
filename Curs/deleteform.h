#ifndef DELETEFORM_H
#define DELETEFORM_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QSqlError>
#include <QSqlQuery>
#include <QMessageBox>
#include <QDate>
#include <iostream>

using namespace std;

namespace Ui {
class DeleteForm;
}

class DeleteForm : public QWidget
{
    Q_OBJECT

public:
    explicit DeleteForm(QWidget *parent = 0);
    ~DeleteForm();

signals:
    void deletePatientSend();
    void deleteAppointmentSend();
    void deleteDoctorSend();

private slots:
    void on_patientDeleteButton_clicked();
    void on_cancelButton_clicked();
    void on_appointmentDeleteButton_clicked();
    void on_doctorDeleteButton_clicked();

private:
    Ui::DeleteForm *ui;
};

#endif // DELETEFORM_H
