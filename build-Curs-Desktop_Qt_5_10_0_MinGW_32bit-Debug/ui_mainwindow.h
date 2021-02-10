/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *helpAction;
    QAction *quitAction;
    QWidget *centralWidget;
    QFrame *menuFrame;
    QPushButton *patientsButton;
    QPushButton *doctorsButton;
    QPushButton *appointmentButton;
    QFrame *mainScreenFrame;
    QTableView *tableView;
    QPushButton *addButton;
    QPushButton *deleteButton;
    QPushButton *updateButton;
    QGroupBox *groupBox;
    QTextEdit *familyTextEdit;
    QTextEdit *nameTextEdit;
    QTextEdit *fatherTextEdit;
    QPushButton *FIOsearchButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QGroupBox *groupBox_2;
    QLabel *label_7;
    QPushButton *birthDateSearchButton;
    QTextEdit *birthDateTextEdit;
    QGroupBox *groupBox_3;
    QPushButton *cardShowButton;
    QLabel *label_8;
    QTextEdit *IDtextEdit;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1243, 901);
        helpAction = new QAction(MainWindow);
        helpAction->setObjectName(QStringLiteral("helpAction"));
        helpAction->setMenuRole(QAction::AboutRole);
        helpAction->setIconVisibleInMenu(true);
        helpAction->setShortcutVisibleInContextMenu(false);
        quitAction = new QAction(MainWindow);
        quitAction->setObjectName(QStringLiteral("quitAction"));
        quitAction->setMenuRole(QAction::QuitRole);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        menuFrame = new QFrame(centralWidget);
        menuFrame->setObjectName(QStringLiteral("menuFrame"));
        menuFrame->setGeometry(QRect(0, 0, 231, 841));
        QFont font;
        font.setPointSize(14);
        menuFrame->setFont(font);
        menuFrame->setFrameShape(QFrame::Box);
        menuFrame->setFrameShadow(QFrame::Raised);
        patientsButton = new QPushButton(menuFrame);
        patientsButton->setObjectName(QStringLiteral("patientsButton"));
        patientsButton->setGeometry(QRect(10, 10, 211, 61));
        QFont font1;
        font1.setPointSize(15);
        patientsButton->setFont(font1);
        patientsButton->setAutoFillBackground(false);
        doctorsButton = new QPushButton(menuFrame);
        doctorsButton->setObjectName(QStringLiteral("doctorsButton"));
        doctorsButton->setGeometry(QRect(10, 80, 211, 61));
        doctorsButton->setFont(font1);
        appointmentButton = new QPushButton(menuFrame);
        appointmentButton->setObjectName(QStringLiteral("appointmentButton"));
        appointmentButton->setGeometry(QRect(10, 150, 211, 61));
        appointmentButton->setFont(font1);
        mainScreenFrame = new QFrame(centralWidget);
        mainScreenFrame->setObjectName(QStringLiteral("mainScreenFrame"));
        mainScreenFrame->setGeometry(QRect(230, 0, 1011, 841));
        QFont font2;
        font2.setBold(false);
        font2.setWeight(50);
        mainScreenFrame->setFont(font2);
        mainScreenFrame->setAutoFillBackground(false);
        mainScreenFrame->setFrameShape(QFrame::Box);
        mainScreenFrame->setFrameShadow(QFrame::Sunken);
        mainScreenFrame->setLineWidth(1);
        mainScreenFrame->setMidLineWidth(0);
        tableView = new QTableView(mainScreenFrame);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(0, 0, 1011, 621));
        QFont font3;
        font3.setPointSize(10);
        tableView->setFont(font3);
        tableView->horizontalHeader()->setDefaultSectionSize(120);
        addButton = new QPushButton(mainScreenFrame);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setGeometry(QRect(10, 630, 121, 41));
        deleteButton = new QPushButton(mainScreenFrame);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setGeometry(QRect(150, 630, 121, 41));
        updateButton = new QPushButton(mainScreenFrame);
        updateButton->setObjectName(QStringLiteral("updateButton"));
        updateButton->setGeometry(QRect(290, 630, 131, 41));
        groupBox = new QGroupBox(mainScreenFrame);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 680, 381, 141));
        familyTextEdit = new QTextEdit(groupBox);
        familyTextEdit->setObjectName(QStringLiteral("familyTextEdit"));
        familyTextEdit->setGeometry(QRect(70, 20, 201, 31));
        nameTextEdit = new QTextEdit(groupBox);
        nameTextEdit->setObjectName(QStringLiteral("nameTextEdit"));
        nameTextEdit->setGeometry(QRect(70, 60, 201, 31));
        fatherTextEdit = new QTextEdit(groupBox);
        fatherTextEdit->setObjectName(QStringLiteral("fatherTextEdit"));
        fatherTextEdit->setGeometry(QRect(70, 100, 201, 31));
        FIOsearchButton = new QPushButton(groupBox);
        FIOsearchButton->setObjectName(QStringLiteral("FIOsearchButton"));
        FIOsearchButton->setGeometry(QRect(290, 20, 75, 111));
        QFont font4;
        font4.setPointSize(8);
        FIOsearchButton->setFont(font4);
        FIOsearchButton->setFlat(false);
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 30, 47, 21));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 105, 51, 21));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 70, 47, 21));
        groupBox_2 = new QGroupBox(mainScreenFrame);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(420, 680, 381, 61));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 20, 91, 31));
        birthDateSearchButton = new QPushButton(groupBox_2);
        birthDateSearchButton->setObjectName(QStringLiteral("birthDateSearchButton"));
        birthDateSearchButton->setGeometry(QRect(300, 20, 75, 31));
        birthDateSearchButton->setFont(font4);
        birthDateSearchButton->setFlat(false);
        birthDateTextEdit = new QTextEdit(groupBox_2);
        birthDateTextEdit->setObjectName(QStringLiteral("birthDateTextEdit"));
        birthDateTextEdit->setGeometry(QRect(100, 20, 181, 31));
        QFont font5;
        font5.setPointSize(9);
        birthDateTextEdit->setFont(font5);
        groupBox_3 = new QGroupBox(mainScreenFrame);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(420, 750, 381, 71));
        cardShowButton = new QPushButton(groupBox_3);
        cardShowButton->setObjectName(QStringLiteral("cardShowButton"));
        cardShowButton->setGeometry(QRect(290, 20, 81, 31));
        cardShowButton->setFont(font4);
        cardShowButton->setFlat(false);
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 20, 71, 31));
        label_8->setFont(font4);
        IDtextEdit = new QTextEdit(groupBox_3);
        IDtextEdit->setObjectName(QStringLiteral("IDtextEdit"));
        IDtextEdit->setGeometry(QRect(103, 20, 171, 31));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1243, 21));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(helpAction);
        menu->addSeparator();
        menu->addAction(quitAction);

        retranslateUi(MainWindow);
        QObject::connect(quitAction, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        helpAction->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\274\320\276\321\211\321\214", nullptr));
#ifndef QT_NO_SHORTCUT
        helpAction->setShortcut(QApplication::translate("MainWindow", "F1", nullptr));
#endif // QT_NO_SHORTCUT
        quitAction->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        patientsButton->setText(QApplication::translate("MainWindow", "\320\237\320\260\321\206\320\270\320\265\320\275\321\202\321\213", nullptr));
        doctorsButton->setText(QApplication::translate("MainWindow", "\320\222\321\200\320\260\321\207\320\270", nullptr));
        appointmentButton->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\270\321\221\320\274\321\213", nullptr));
        addButton->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        deleteButton->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        updateButton->setText(QApplication::translate("MainWindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272 \320\277\320\260\321\206\320\270\320\265\320\275\321\202\320\260 \320\277\320\276 \320\244\320\230\320\236", nullptr));
        FIOsearchButton->setText(QApplication::translate("MainWindow", "\320\230\321\201\320\272\320\260\321\202\321\214", nullptr));
        label->setText(QApplication::translate("MainWindow", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\320\230\320\274\321\217", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272 \320\277\320\260\321\206\320\270\320\265\320\275\321\202\320\260 \320\277\320\276 \320\264\320\260\321\202\320\265 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        birthDateSearchButton->setText(QApplication::translate("MainWindow", "\320\230\321\201\320\272\320\260\321\202\321\214", nullptr));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\320\222\321\213\320\262\320\276\320\264 \320\272\320\260\321\200\321\202\320\276\321\207\320\272\320\270 \320\277\321\200\320\270\321\221\320\274\320\276\320\262 \320\277\320\260\321\206\320\270\320\265\320\275\321\202\320\260", nullptr));
        cardShowButton->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "ID \320\277\320\260\321\206\320\270\320\265\320\275\321\202\320\260", nullptr));
        menu->setTitle(QApplication::translate("MainWindow", "\320\234\320\265\320\275\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
