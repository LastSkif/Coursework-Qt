#include "helpform.h"
#include "ui_helpform.h"

HelpForm::HelpForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HelpForm)
{
    ui->setupUi(this);
    connect(ui->pbNext, SIGNAL(clicked()), ui->textBrowser, SLOT(forward()));
    connect(ui->pbPrev, SIGNAL(clicked()), ui->textBrowser, SLOT(backward()));
    connect(ui->pbHome, SIGNAL(clicked()), ui->textBrowser, SLOT(home()));
    connect(ui->textBrowser, SIGNAL(forwardAvailable(bool)), ui->pbNext, SLOT(setEnabled(bool)));
    connect(ui->textBrowser, SIGNAL(backwardAvailable(bool)), ui->pbPrev, SLOT(setEnabled(bool)));
    ui->textBrowser->setSource(QUrl::fromLocalFile("../Curs/index.html"));
    HelpForm::setWindowTitle("Помощь");
}

HelpForm::~HelpForm()
{
    delete ui;
}
