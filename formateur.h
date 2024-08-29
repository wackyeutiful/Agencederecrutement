#ifndef FORMATEUR_H
#define FORMATEUR_H
#include <QString>
#include <QDate>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include<QString>
#include <QDate>
#include <QAbstractItemModel>
#include <QPainter>
#include<QSqlQueryModel>
#include<QSqlQuery>
#include<QtDebug>
#include<QObject>
#include<QString>
#include <QMessageBox>
#include <QApplication>
#include <QtCore>
#include <QPdfWriter>
#include <QPainter>
#include <QtCharts>

class Formateur
{
public:
    Formateur();
    QSqlQueryModel * afficher();
            bool supprimer(int);
            bool modifier(int);
            bool ajouter();
             QSqlQueryModel *trier();
             QSqlQueryModel *rechercher(QString id);
             QChart *statistique_chart();
             Formateur(int id,int nbft, QString type, QString n, QString p,int c , QDate d)
                     :idf(id), typeft(type),nbf(nbft), CIN(c), nom (n), prenom (p), ds(d) {
                 };
             bool existance(QString id);
private:
QString typeft;
int nbf;
int idf;
int CIN;
QString nom , prenom;
QDate ds;
};

#endif // FORMATEUR_H
