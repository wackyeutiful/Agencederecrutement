#include "formation.h"

Formation::Formation()
{

}
bool Formation::ajouter()
{
    QSqlQuery query;
    query.prepare("INSERT INTO Formation (id_formateur,id_formation,duree_formation,titre,description,nbr_personne,date_formation) "
                  "VALUES (1,:id,:duree_formation, :titre ,:description,:nbr_personne,:date_formation)");
          query.bindValue(":id", id);
          query.bindValue(":duree_formation", duree);
          query.bindValue(":titre", tf);
          query.bindValue(":description", df);
          query.bindValue(":nbr_personne",nbrp);
          query.bindValue(":date_formation",dateform);



            return  query.exec();
}
QSqlQueryModel * Formation::afficher()
{
    QSqlQueryModel *model=new QSqlQueryModel();
        model->setQuery("SELECT * FROM Formation");
        return model;

}
    bool Formation::supprimer(int id)
    {
        QSqlQuery query;
            query.prepare("delete from Formation where id_Formation=:id");
            query.bindValue(":id",id);
            return  query.exec();
    }
    bool Formation::modifier(int id)
    {
        QSqlQuery query;
        query.prepare("UPDATE Formation SET duree_formation=:duree_formation,titre=:titre,description=:description,nbr_personne=:nbr_personne,date_formation=:date_formation WHERE id_Formation=:id");
        query.bindValue(":id", id);
        query.bindValue(":duree_formation", duree);
        query.bindValue(":titre", tf);
        query.bindValue(":description", df);
        query.bindValue(":nbr_personne",nbrp);
        query.bindValue(":date_formation",dateform);

                return  query.exec();
    }
    QSqlQueryModel * Formation:: trier()
    {
        QSqlQueryModel *model =new QSqlQueryModel() ;
        model->setQuery("SELECT * FROM Formation order by nbr_personne");
        return model ;
    }
    QSqlQueryModel *Formation:: rechercher(QString id)
    {
        QSqlQueryModel* model =new QSqlQueryModel() ;
        if (id !="")
        model->setQuery("SELECT * FROM Formation WHERE nbr_personne LIKE '%"+id+"%'");
        else
            model->setQuery("SELECT * FROM Formation ");
        return model ;
    }
    bool Formation::existance(QString id)
    {
        QMessageBox msgBox;
        QSqlQuery query;
        int count=0;
        query.prepare("SELECT * FROM Formation WHERE id_formation= ?");
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
