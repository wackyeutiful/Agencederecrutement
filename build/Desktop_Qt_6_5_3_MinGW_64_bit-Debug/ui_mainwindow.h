/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label;
    QLineEdit *titref;
    QTableView *afficher;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QComboBox *comboBox;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_8;
    QTextEdit *descriptionf;
    QDateEdit *datef;
    QComboBox *idf;
    QSpinBox *dureef;
    QLabel *label_2;
    QSpinBox *nbrp;
    QLineEdit *idi;
    QLabel *label_10;
    QLabel *qr;
    QPushButton *pushButton_7;
    QPushButton *stat;
    QLineEdit *mail;
    QPushButton *pushButton_10;
    QWidget *page_3;
    QLabel *statform;
    QPushButton *pushButton_9;
    QWidget *page_5;
    QCalendarWidget *calendarWidget;
    QComboBox *comboBox_3;
    QComboBox *comboBox_4;
    QPushButton *pushButton_11;
    QWidget *page_2;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_9;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QComboBox *typef;
    QLineEdit *nbr;
    QTableView *affichagef;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLineEdit *nom;
    QLineEdit *prenom;
    QLineEdit *CIN;
    QDateEdit *dss;
    QLineEdit *idfor;
    QPushButton *pdf;
    QPushButton *statf;
    QComboBox *comboBox_2;
    QWidget *page_4;
    QLabel *sformateur;
    QPushButton *pushButton_8;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1014, 645);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(30, 20, 931, 581));
        page = new QWidget();
        page->setObjectName("page");
        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 60, 131, 16));
        titref = new QLineEdit(page);
        titref->setObjectName("titref");
        titref->setGeometry(QRect(220, 60, 113, 22));
        afficher = new QTableView(page);
        afficher->setObjectName("afficher");
        afficher->setGeometry(QRect(405, 110, 531, 401));
        pushButton = new QPushButton(page);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(420, 520, 93, 28));
        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(510, 520, 93, 28));
        pushButton_3 = new QPushButton(page);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(600, 520, 93, 28));
        comboBox = new QComboBox(page);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(832, 70, 101, 22));
        lineEdit = new QLineEdit(page);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(400, 70, 113, 22));
        label_3 = new QLabel(page);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 100, 141, 16));
        label_4 = new QLabel(page);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 140, 181, 16));
        label_5 = new QLabel(page);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(60, 290, 111, 16));
        label_8 = new QLabel(page);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(60, 250, 91, 16));
        descriptionf = new QTextEdit(page);
        descriptionf->setObjectName("descriptionf");
        descriptionf->setGeometry(QRect(230, 140, 151, 87));
        datef = new QDateEdit(page);
        datef->setObjectName("datef");
        datef->setGeometry(QRect(230, 290, 110, 21));
        idf = new QComboBox(page);
        idf->addItem(QString());
        idf->setObjectName("idf");
        idf->setGeometry(QRect(230, 250, 73, 22));
        dureef = new QSpinBox(page);
        dureef->setObjectName("dureef");
        dureef->setGeometry(QRect(230, 100, 42, 22));
        label_2 = new QLabel(page);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 330, 141, 16));
        nbrp = new QSpinBox(page);
        nbrp->setObjectName("nbrp");
        nbrp->setGeometry(QRect(230, 330, 42, 22));
        idi = new QLineEdit(page);
        idi->setObjectName("idi");
        idi->setGeometry(QRect(220, 20, 113, 22));
        label_10 = new QLabel(page);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(50, 20, 56, 16));
        qr = new QLabel(page);
        qr->setObjectName("qr");
        qr->setGeometry(QRect(90, 410, 201, 181));
        pushButton_7 = new QPushButton(page);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(690, 520, 83, 29));
        stat = new QPushButton(page);
        stat->setObjectName("stat");
        stat->setGeometry(QRect(770, 520, 83, 29));
        mail = new QLineEdit(page);
        mail->setObjectName("mail");
        mail->setGeometry(QRect(480, 10, 191, 28));
        pushButton_10 = new QPushButton(page);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(680, 10, 121, 29));
        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        statform = new QLabel(page_3);
        statform->setObjectName("statform");
        statform->setGeometry(QRect(60, 60, 761, 491));
        pushButton_9 = new QPushButton(page_3);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(860, 60, 83, 29));
        stackedWidget->addWidget(page_3);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        calendarWidget = new QCalendarWidget(page_5);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(180, 160, 581, 411));
        comboBox_3 = new QComboBox(page_5);
        comboBox_3->setObjectName("comboBox_3");
        comboBox_3->setGeometry(QRect(80, 50, 161, 28));
        comboBox_4 = new QComboBox(page_5);
        comboBox_4->setObjectName("comboBox_4");
        comboBox_4->setGeometry(QRect(720, 60, 161, 28));
        pushButton_11 = new QPushButton(page_5);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(760, 110, 83, 29));
        stackedWidget->addWidget(page_5);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        label_6 = new QLabel(page_2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(50, 80, 81, 16));
        label_7 = new QLabel(page_2);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(50, 110, 121, 16));
        label_9 = new QLabel(page_2);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(50, 140, 171, 16));
        lineEdit_3 = new QLineEdit(page_2);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(410, 70, 113, 22));
        pushButton_4 = new QPushButton(page_2);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(410, 500, 93, 28));
        pushButton_5 = new QPushButton(page_2);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(500, 500, 93, 28));
        pushButton_6 = new QPushButton(page_2);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(590, 500, 93, 28));
        typef = new QComboBox(page_2);
        typef->addItem(QString());
        typef->addItem(QString());
        typef->setObjectName("typef");
        typef->setGeometry(QRect(220, 110, 73, 22));
        nbr = new QLineEdit(page_2);
        nbr->setObjectName("nbr");
        nbr->setGeometry(QRect(220, 140, 113, 22));
        affichagef = new QTableView(page_2);
        affichagef->setObjectName("affichagef");
        affichagef->setGeometry(QRect(410, 100, 521, 381));
        label_12 = new QLabel(page_2);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(50, 200, 56, 16));
        label_13 = new QLabel(page_2);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(50, 230, 56, 16));
        label_14 = new QLabel(page_2);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(50, 260, 56, 16));
        label_15 = new QLabel(page_2);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(50, 290, 111, 16));
        nom = new QLineEdit(page_2);
        nom->setObjectName("nom");
        nom->setGeometry(QRect(220, 200, 113, 22));
        prenom = new QLineEdit(page_2);
        prenom->setObjectName("prenom");
        prenom->setGeometry(QRect(220, 230, 113, 22));
        CIN = new QLineEdit(page_2);
        CIN->setObjectName("CIN");
        CIN->setGeometry(QRect(220, 260, 113, 22));
        dss = new QDateEdit(page_2);
        dss->setObjectName("dss");
        dss->setGeometry(QRect(220, 290, 110, 22));
        idfor = new QLineEdit(page_2);
        idfor->setObjectName("idfor");
        idfor->setGeometry(QRect(220, 80, 113, 22));
        pdf = new QPushButton(page_2);
        pdf->setObjectName("pdf");
        pdf->setGeometry(QRect(680, 500, 83, 29));
        statf = new QPushButton(page_2);
        statf->setObjectName("statf");
        statf->setGeometry(QRect(760, 500, 83, 29));
        comboBox_2 = new QComboBox(page_2);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(820, 60, 111, 28));
        stackedWidget->addWidget(page_2);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        sformateur = new QLabel(page_4);
        sformateur->setObjectName("sformateur");
        sformateur->setGeometry(QRect(100, 50, 711, 511));
        pushButton_8 = new QPushButton(page_4);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(850, 30, 83, 29));
        stackedWidget->addWidget(page_4);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1014, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Titre de formation:", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Modifier", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Dur\303\251e", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Titre", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Nbr de personne", nullptr));

        lineEdit->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "Dur\303\251e de formation:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Description de formation:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Date de formation:", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Id formateur:", nullptr));
        idf->setItemText(0, QCoreApplication::translate("MainWindow", "1", nullptr));

        label_2->setText(QCoreApplication::translate("MainWindow", "Nombre de personne:", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        qr->setText(QString());
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Pdf", nullptr));
        stat->setText(QCoreApplication::translate("MainWindow", "Stat", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "Envoyer email", nullptr));
        statform->setText(QString());
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "Go back", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "Assigner", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Id formateur:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Type de formateur:", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Nbr de formations \303\251ffectu\303\251es:", nullptr));
        lineEdit_3->setText(QString());
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Modifier", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        typef->setItemText(0, QCoreApplication::translate("MainWindow", "interne", nullptr));
        typef->setItemText(1, QCoreApplication::translate("MainWindow", "externe", nullptr));

        label_12->setText(QCoreApplication::translate("MainWindow", "Nom:", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Prenom:", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "CIN:", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Date de naissance:", nullptr));
        pdf->setText(QCoreApplication::translate("MainWindow", "PDF", nullptr));
        statf->setText(QCoreApplication::translate("MainWindow", "STAT", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("MainWindow", "TYPE", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("MainWindow", "NBR FORMATION", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("MainWindow", "DATE NAISS", nullptr));

        sformateur->setText(QString());
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Go back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
