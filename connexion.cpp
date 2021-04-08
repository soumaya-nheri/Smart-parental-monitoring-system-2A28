#include "connexion.h"
#include <QSqlDatabase>

Connexion::Connexion()
{

}
bool Connexion::createConnection(){
    bool teste = false;
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("Projet_2A");
    db.setUserName("Keren");
    db.setPassword("2001");

    if(db.open())
        teste=true;
    return teste;
}
