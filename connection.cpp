#include "connection.h"

Connection::Connection()
{

}

bool Connection::createconnection()
{
   bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("Source_Projet_2A");
db.setUserName("wackyeutiful");//inserer nom de l'utilisateur
db.setPassword("wackyeutiful");//inserer mot de passe de cet utilisateur
if (db.open())
test=true;
   return  test;
}
