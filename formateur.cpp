#include "formateur.h"

Formateur::Formateur()
{

}
bool Formateur::ajouter()
{
    QSqlQuery query;
    query.prepare("INSERT INTO Formateur (id_formateur,type_formateur,nbr_formations_effectuees,nom,prenom,CIN,date_de_naiss) "
                  "VALUES (:id_formateur,:type_formateur, :nbr_formations_effectuees,:nom,:prenom,:CIN,:date_de_naiss)");

          query.bindValue(":type_formateur", typeft);
          query.bindValue(":nbr_formations_effectuees", nbf);

          query.bindValue(":nom",nom);
          query.bindValue(":prenom",prenom);
          query.bindValue(":CIN",CIN);
          query.bindValue(":date_de_naiss", ds);
          query.bindValue(":id_formateur", idf);

            return  query.exec();
}
QSqlQueryModel * Formateur::afficher()
{
    QSqlQueryModel *model=new QSqlQueryModel();
        model->setQuery("SELECT * FROM Formateur");
        return model;

}
    bool Formateur::supprimer(int id)
    {
        QSqlQuery query;
            query.prepare("delete from Formateur where id_formateur=:id");
            query.bindValue(":id",id);
            return  query.exec();
    }
    bool Formateur::modifier(int id)
    {
        QSqlQuery query;
        query.prepare("UPDATE Formateur SET type_formateur=:type_formateur,nbr_formations_effectuees=:nbr_formations_effectuees,nom=:nom,prenom=:prenom,CIN=:CIN,date_de_naiss=:date_de_naiss WHERE id_formateur=:id");

        query.bindValue(":type_formateur", typeft);
        query.bindValue(":nbr_formations_effectuees", nbf);
        query.bindValue(":id",id);
        query.bindValue(":nom",nom);
        query.bindValue(":prenom",prenom);
        query.bindValue(":CIN",CIN);
        query.bindValue(":date_de_naiss", ds);
                return  query.exec();
    }
    QSqlQueryModel * Formateur:: trier()
    {
        QSqlQueryModel *model =new QSqlQueryModel() ;
        model->setQuery("SELECT * FROM Formateur order by nom");
        return model ;
    }
    QSqlQueryModel *Formateur:: rechercher(QString id)
    {
        QSqlQueryModel* model =new QSqlQueryModel() ;
        if (id !="")
        model->setQuery("SELECT * FROM Formateur WHERE nom LIKE '%"+id+"%'");
        else
            model->setQuery("SELECT * FROM Formateur ");
        return model ;
    }
    bool Formateur::existance(QString id)
    {
        QMessageBox msgBox;
        QSqlQuery query;
        int count=0;
        query.prepare("SELECT * FROM Formateur WHERE id_formateur= ?");
        query.addBindValue(id);
        if(query.exec() )
        {
            while (query.next())
            {
                count ++;
            }
            if(count==1)
            {
                msgBox.setText("id deja existe");
                msgBox.exec();
                return 0;
            }

        }
        return 1;
    }
