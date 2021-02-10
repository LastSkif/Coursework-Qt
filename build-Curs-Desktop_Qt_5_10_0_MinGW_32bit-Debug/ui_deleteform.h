/********************************************************************************
** Form generated from reading UI file 'deleteform.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEFORM_H
#define UI_DELETEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeleteForm
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *patientDeleteButton;
    QTextEdit *patientIDedit;
    QLabel *patientLabel;
    QWidget *tab_2;
    QPushButton *appointmentDeleteButton;
    QTextEdit *appointmentIDedit;
    QLabel *appointmentLabel;
    QWidget *tab_3;
    QPushButton *doctorDeleteButton;
    QTextEdit *doctorEdit;
    QLabel *doctorLabel;
    QPushButton *cancelButton;

    void setupUi(QWidget *DeleteForm)
    {
        if (DeleteForm->objectName().isEmpty())
            DeleteForm->setObjectName(QStringLiteral("DeleteForm"));
        DeleteForm->resize(447, 365);
        tabWidget = new QTabWidget(DeleteForm);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 431, 281));
        tabWidget->setTabPosition(QTabWidget::North);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        patientDeleteButton = new QPushButton(tab);
        patientDeleteButton->setObjectName(QStringLiteral("patientDeleteButton"));
        patientDeleteButton->setGeometry(QRect(40, 210, 341, 41));
        QFont font;
        font.setPointSize(13);
        patientDeleteButton->setFont(font);
        patientIDedit = new QTextEdit(tab);
        patientIDedit->setObjectName(QStringLiteral("patientIDedit"));
        patientIDedit->setGeometry(QRect(110, 10, 211, 31));
        patientLabel = new QLabel(tab);
        patientLabel->setObjectName(QStringLiteral("patientLabel"));
        patientLabel->setGeometry(QRect(20, 10, 71, 31));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        appointmentDeleteButton = new QPushButton(tab_2);
        appointmentDeleteButton->setObjectName(QStringLiteral("appointmentDeleteButton"));
        appointmentDeleteButton->setGeometry(QRect(40, 210, 341, 41));
        appointmentDeleteButton->setFont(font);
        appointmentIDedit = new QTextEdit(tab_2);
        appointmentIDedit->setObjectName(QStringLiteral("appointmentIDedit"));
        appointmentIDedit->setGeometry(QRect(110, 10, 211, 31));
        appointmentLabel = new QLabel(tab_2);
        appointmentLabel->setObjectName(QStringLiteral("appointmentLabel"));
        appointmentLabel->setGeometry(QRect(20, 15, 71, 21));
        appointmentLabel->setTextFormat(Qt::AutoText);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        doctorDeleteButton = new QPushButton(tab_3);
        doctorDeleteButton->setObjectName(QStringLiteral("doctorDeleteButton"));
        doctorDeleteButton->setGeometry(QRect(40, 210, 341, 41));
        doctorDeleteButton->setFont(font);
        doctorEdit = new QTextEdit(tab_3);
        doctorEdit->setObjectName(QStringLiteral("doctorEdit"));
        doctorEdit->setGeometry(QRect(110, 10, 211, 31));
        doctorLabel = new QLabel(tab_3);
        doctorLabel->setObjectName(QStringLiteral("doctorLabel"));
        doctorLabel->setGeometry(QRect(20, 10, 81, 31));
        tabWidget->addTab(tab_3, QString());
        cancelButton = new QPushButton(DeleteForm);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(150, 310, 141, 41));
        QFont font1;
        font1.setPointSize(13);
        font1.setBold(false);
        font1.setWeight(50);
        cancelButton->setFont(font1);

        retranslateUi(DeleteForm);

        tabWidget->setCurrentIndex(2);
        patientDeleteButton->setDefault(true);
        appointmentDeleteButton->setDefault(true);
        doctorDeleteButton->setDefault(true);


        QMetaObject::connectSlotsByName(DeleteForm);
    } // setupUi

    void retranslateUi(QWidget *DeleteForm)
    {
        DeleteForm->setWindowTitle(QApplication::translate("DeleteForm", "Form", nullptr));
        patientDeleteButton->setText(QApplication::translate("DeleteForm", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        patientLabel->setText(QApplication::translate("DeleteForm", "ID \320\277\320\260\321\206\320\270\320\265\320\275\321\202\320\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("DeleteForm", "\320\237\320\260\321\206\320\270\320\265\320\275\321\202", nullptr));
        appointmentDeleteButton->setText(QApplication::translate("DeleteForm", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        appointmentLabel->setText(QApplication::translate("DeleteForm", "ID \320\277\321\200\320\270\321\221\320\274\320\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("DeleteForm", "\320\237\321\200\320\270\321\221\320\274", nullptr));
        doctorDeleteButton->setText(QApplication::translate("DeleteForm", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        doctorLabel->setText(QApplication::translate("DeleteForm", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217 \320\262\321\200\320\260\321\207\320\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("DeleteForm", "\320\222\321\200\320\260\321\207", nullptr));
        cancelButton->setText(QApplication::translate("DeleteForm", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeleteForm: public Ui_DeleteForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEFORM_H
