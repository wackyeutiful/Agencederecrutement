#ifndef FORMATION_H
#define FORMATION_H
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

class Formation
{
public:
    Formation();
    QSqlQueryModel * afficher();
            bool supprimer(int);
            bool modifier(int);
            bool ajouter();
             QSqlQueryModel *trier();
             QSqlQueryModel *rechercher(QString id);
             QChart *statistique_chart();
             Formation(int idd,int d, QString t, QString dt, int n,  QString idff)
                     : id(idd),duree(d), tf(t), df(dt), nbrp(n),  idf(idff) {
                 };
             bool existance(QString id);
private :
    int duree,id;
    QString tf, df;
    int nbrp;
    QString idf;
};

#endif // FORMATION_H
