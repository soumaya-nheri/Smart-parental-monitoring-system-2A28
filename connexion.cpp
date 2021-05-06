#include "connexion.h"
Connexion::Connexion()
{

}

bool Connexion::createconnect()
{bool test=false;
QSqlDatabase db =QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("base_commune");//inserer le nom de la source de données ODBC
db.setUserName("nawrez");               //inserer nom de l'utilisateur
db.setPassword("esprit18");               //inserer mot de passe de cet utilisateur
qDebug()<<db;
if (db.open())
test=true;





    return  test;
}
