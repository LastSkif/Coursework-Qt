/********************************************************************************
** Form generated from reading UI file 'helpform.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPFORM_H
#define UI_HELPFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelpForm
{
public:
    QTextBrowser *textBrowser;
    QPushButton *pbPrev;
    QPushButton *pbHome;
    QPushButton *pbNext;

    void setupUi(QWidget *HelpForm)
    {
        if (HelpForm->objectName().isEmpty())
            HelpForm->setObjectName(QStringLiteral("HelpForm"));
        HelpForm->resize(755, 583);
        textBrowser = new QTextBrowser(HelpForm);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(-5, 0, 761, 551));
        pbPrev = new QPushButton(HelpForm);
        pbPrev->setObjectName(QStringLiteral("pbPrev"));
        pbPrev->setGeometry(QRect(40, 552, 111, 31));
        QFont font;
        font.setPointSize(12);
        font.setUnderline(true);
        pbPrev->setFont(font);
        pbPrev->setFlat(true);
        pbHome = new QPushButton(HelpForm);
        pbHome->setObjectName(QStringLiteral("pbHome"));
        pbHome->setGeometry(QRect(300, 550, 141, 31));
        pbHome->setFont(font);
        pbHome->setFlat(true);
        pbNext = new QPushButton(HelpForm);
        pbNext->setObjectName(QStringLiteral("pbNext"));
        pbNext->setGeometry(QRect(600, 550, 111, 31));
        pbNext->setFont(font);
        pbNext->setFlat(true);

        retranslateUi(HelpForm);

        QMetaObject::connectSlotsByName(HelpForm);
    } // setupUi

    void retranslateUi(QWidget *HelpForm)
    {
        HelpForm->setWindowTitle(QApplication::translate("HelpForm", "Form", nullptr));
        pbPrev->setText(QApplication::translate("HelpForm", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        pbHome->setText(QApplication::translate("HelpForm", "\320\235\320\260 \320\263\320\273\320\260\320\262\320\275\321\203\321\216", nullptr));
        pbNext->setText(QApplication::translate("HelpForm", "\320\222\320\277\320\265\321\200\321\221\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HelpForm: public Ui_HelpForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPFORM_H
