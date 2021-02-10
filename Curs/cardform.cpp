#include "cardform.h"
#include "ui_cardform.h"

CardForm::CardForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CardForm)
{
    ui->setupUi(this);
    CardForm::setWindowTitle("Карточка пациента");

}

CardForm::~CardForm()
{
    delete ui;
}


