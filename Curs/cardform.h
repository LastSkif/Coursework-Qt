#ifndef CARDFORM_H
#define CARDFORM_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QSqlError>
#include <QSqlQuery>
#include <QMessageBox>
#include <iostream>

using namespace std;

namespace Ui {
class CardForm;
}

class CardForm : public QWidget
{
    Q_OBJECT

public:
    explicit CardForm(QWidget *parent = 0);
    ~CardForm();

private slots:


private:
    Ui::CardForm *ui;
    QSqlDatabase db;
    QSqlTableModel *model, *model2;
};

#endif // CARDFORM_H
