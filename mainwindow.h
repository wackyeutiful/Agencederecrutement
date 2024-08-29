#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "formation.h"
#include <QMainWindow>
#include "formateur.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_afficher_activated(const QModelIndex &index);

    void on_lineEdit_textChanged(const QString &arg1);

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

    void on_affichagef_activated(const QModelIndex &index);

    void on_lineEdit_3_textChanged(const QString &arg1);

    void on_pushButton_7_clicked();

    void on_pdf_clicked();

    void on_comboBox_activated(int index);

    void on_comboBox_2_activated(int index);

    void on_stat_clicked();

    void on_statf_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void sendMail();

    void mailSent(QString status);

    void on_pushButton_12_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_23_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
