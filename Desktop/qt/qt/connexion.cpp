#include "connexion.h"
#include <QApplication>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
connexion::connexion()
{

}
bool connexion::ouvrirConnexion()
{
    bool test=false;
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("database");//inserer le nom de la source de données ODBC
    db.setUserName("nawrez");               //inserer nom de l'utilisateur
    db.setPassword("esprit18");               //inserer mot de passe de cet utilisateur
if (db.open())
    test=true;
else
    test=false;

    return  test;
}
void connexion::fermerConnexion()
{db.close();}
