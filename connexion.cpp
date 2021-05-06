#include "connexion.h"
Connexion::Connexion()
{

}

bool Connexion::createconnect()
{bool test=false;
QSqlDatabase db =QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("projet_2a");//inserer le nom de la source de données ODBC
db.setUserName("oumayma");               //inserer nom de l'utilisateur
db.setPassword("admin");               //inserer mot de passe de cet utilisateur
qDebug()<<db;
if (db.open())
test=true;





    return  test;
}
