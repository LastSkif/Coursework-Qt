#ifndef UPDATEFORM_H
#define UPDATEFORM_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QSqlError>
#include <QSqlQuery>
#include <QMessageBox>
#include <QDate>

namespace Ui {
class UpdateForm;
}

class UpdateForm : public QWidget
{
    Q_OBJECT

public:
    explicit UpdateForm(QWidget *parent = 0);
    ~UpdateForm();

signals:
    void patientUpdateSend();
    void appointmentUpdateSend();

private slots:
    void on_cancelButton_clicked();
    void on_addAppointmentButton_clicked();
    void on_addPatientButton_clicked();

private:
    Ui::UpdateForm *ui;
};

#endif // UPDATEFORM_H
