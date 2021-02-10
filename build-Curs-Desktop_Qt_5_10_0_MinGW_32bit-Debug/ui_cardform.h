/********************************************************************************
** Form generated from reading UI file 'cardform.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARDFORM_H
#define UI_CARDFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CardForm
{
public:
    QTableView *tableView;
    QTableView *tableView_2;
    QPushButton *pushButton;

    void setupUi(QWidget *CardForm)
    {
        if (CardForm->objectName().isEmpty())
            CardForm->setObjectName(QStringLiteral("CardForm"));
        CardForm->resize(1105, 600);
        tableView = new QTableView(CardForm);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 10, 1081, 61));
        tableView_2 = new QTableView(CardForm);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(10, 80, 1081, 451));
        pushButton = new QPushButton(CardForm);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(480, 540, 151, 51));
        QFont font;
        font.setPointSize(14);
        pushButton->setFont(font);

        retranslateUi(CardForm);

        QMetaObject::connectSlotsByName(CardForm);
    } // setupUi

    void retranslateUi(QWidget *CardForm)
    {
        CardForm->setWindowTitle(QApplication::translate("CardForm", "Form", nullptr));
        pushButton->setText(QApplication::translate("CardForm", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CardForm: public Ui_CardForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARDFORM_H
