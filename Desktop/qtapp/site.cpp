#include "site.h"
#include "connection.h"
#include <QSqlQuery>
#include <QtDebug>
Site::Site()
{
id=0;type="";nom="";adresse="";nb_visite=0;blockage=0;date_dv="";temps_dv=0;
}
Site::Site(int,QString,QString,QString,int,int,QString,int)
{
    this->id=id;
    this->type=type;
    this->nom=nom;
    this->adresse=adresse;
    this->nb_visite=nb_visite;
    this->blockage=blockage;
    this->date_dv=date_dv;
    this->temps_dv=temps_dv;
}

int Site::getid(){return id;}
QString Site::gettype(){return type;}
QString Site::getnom(){return nom;}
QString Site::getadresse(){return adresse;}
int Site::getnb_visite(){return nb_visite;}
int Site::getblockage(){return blockage;}
QString Site::getdatedv(){return date_dv;}
int Site::gettempsdv(){return temps_dv;}

void Site::setid(int id){this->id=id;}
void Site::settype(QString type){this->type=type;}
void Site::setnom(QString nom){this->nom=nom;}
void Site::setadresse(QString adresse){this->adresse=adresse;}
void Site::setnb_visite(int nb_visite){this->nb_visite=nb_visite;}
void Site::setblockage(int blockage){this->blockage=blockage;}
void Site::setdatedv(QString date_dv){this->date_dv=date_dv;}
void Site::settempsdv(int temps_dv){this->temps_dv=temps_dv;}
bool Site::ajouter()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    QSqlQuery *query = new QSqlQuery(db);
    QString id_strings=QString::number(id);
    query->prepare("INSERT INTO SITE (id, type, nom,adresse,nb_visite,blockage,date_dv,temps_dv) "
                  "VALUES (:id, :type, :nom, :adresse, :nb_visite, :blockage, :date_dv, :temps_dv)");
    query->bindValue(0, id_strings);
    query->bindValue(1, type);
    query->bindValue(2, nom);
    query->bindValue(3, adresse);
    query->bindValue(4, nb_visite);
    query->bindValue(5, blockage);
    query->bindValue(6, date_dv);
    query->bindValue(7, temps_dv);
    return query->exec();


}
QSqlQueryModel* Site::afficher()
{
    QSqlQueryModel* model=new QSqlQueryModel();
             model->setQuery("SELECT* FROM site");
         model->setHeaderData(0, Qt::Horizontal, QObject::tr( "id"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("type"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("adresse"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("nb_visite"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("blockage"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("date_dv"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("temps_dv"));




    return model;
}
bool Site::supprimer(int id)
{
    QSqlQuery query;
    query.prepare("Delete from site id=:id");
    query.bindValue(0, id);

    return query.exec();

}
