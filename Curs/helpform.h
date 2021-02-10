#ifndef HELPFORM_H
#define HELPFORM_H

#include <QWidget>
#include <QDialog>
#include <QTextBrowser>
#include <QUrl>

namespace Ui {
class HelpForm;
}

class HelpForm : public QDialog
{
    Q_OBJECT

public:
    explicit HelpForm(QWidget *parent = 0);
    ~HelpForm();

private:
    Ui::HelpForm *ui;
};

#endif // HELPFORM_H
