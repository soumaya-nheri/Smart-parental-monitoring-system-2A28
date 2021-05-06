#include "site.h"
#include <QDebug>
#include <QSqlRecord>

using namespace std;
Site::Site()
{

}

Site::Site(int Id,QString type,QString nom,QString adresse,int nb_visite,QString blockage,QString date_dv,int temps_dv)
{
    this->Id=Id;
    this->type=type;
    this->nom=nom;
    this->adresse=adresse;
    this->nb_visite=nb_visite;
    this->blockage=blockage;
    this->date_dv=date_dv;
    this->temps_dv=temps_dv;
}

bool Site::ajouter(){

    QSqlQuery query;

    QString id= QString::number(Id);

    query.prepare("INSERT INTO SITE (id, type, nom,adresse,nb_visite,blockage,date_dv,temps_dv) "
                  "VALUES (:id, :type, :nom, :adresse, :nb_visite, :blockage, :date_dv, :temps_dv)");
    query.bindValue(":type",type);
    query.bindValue(":nom",nom);
    query.bindValue(":adresse",adresse);
    query.bindValue(":nb_visite", nb_visite);
    query.bindValue(":blockage", blockage);
    query.bindValue(":date_dv", date_dv);
    query.bindValue(":temps_dv", temps_dv);
    query.bindValue(":id", id);



    qDebug() <<"type:  " << type;
    qDebug() <<"nom:  " << nom;
    qDebug() <<"adresse:  " << adresse;
    qDebug() <<"nb_visite:  " << nb_visite;
    qDebug() <<"blockage:  " << blockage;
    qDebug() <<"date_dv:  " << date_dv;
    qDebug() <<"temps_dv:  " << temps_dv;
    qDebug() <<"id:  " << id;


    return    query.exec();
}

QSqlQueryModel * Site::afficher()
{
    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select * from SITE");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("TYPE"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("ADRESSE"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("nb_visite"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("blockage"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("date_dv"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("temps_dv"));

        return model;



   }

bool Site::supprimer(int idd)
{
QSqlQuery query;
QString res= QString::number(idd);
query.prepare("Delete from SITE where ID = :id");
query.bindValue(":id", res);
return    query.exec();
}

bool Site::modifier(){
    QSqlQuery query;
    QString id_res= QString::number(Id);
    query.prepare("UPDATE SITE SET  type=:type , nom =:nom ,adresse=:adresse,nb_visite=:nb_visite,blockage=:blockage,date_dv=:date_dv,temps_dv=:temps_dv where ID = :id");
    query.bindValue(":id", id_res);
    query.bindValue(":type", type);
    query.bindValue(":nom", nom);
    query.bindValue(":adresse", adresse);
    query.bindValue(":nb_visite", nb_visite);
    query.bindValue(":blockage", blockage);
    query.bindValue(":date_dv", date_dv);
    query.bindValue(":temps_dv", temps_dv);
    return    query.exec();
}
QSqlQueryModel * Site::recherche_adresse(QString adresse){
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * From SITE WHERE adresse ='" +adresse+"' ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("type"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("adresse"));
     model->setHeaderData(4, Qt::Horizontal, QObject::tr("nbvisite"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("blockage"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("date_dv"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("temps_dv"));

    return model;
}
QSqlQueryModel * Site::recherche_nom(QString nom){
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * From SITE WHERE nom ='" +nom+"' ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("type"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("adresse"));
     model->setHeaderData(4, Qt::Horizontal, QObject::tr("nbvisite"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("blockage"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("date_dv"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("temps_dv"));

    return model;
}
QSqlQueryModel * Site::recherche_type(QString type){
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * From SITE WHERE type ='" +type+"' ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("type"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("adresse"));
     model->setHeaderData(4, Qt::Horizontal, QObject::tr("nbvisite"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("blockage"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("date_dv"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("temps_dv"));

    return model;
}

QSqlQueryModel * Site::trier_nbvisite()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("Select * from SITE\
                         Order by nb_visite DESC");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("type"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("adresse"));
     model->setHeaderData(4, Qt::Horizontal, QObject::tr("nbvisite"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("blockage"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("date_dv"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("temps_dv"));

    return model;
}

QSqlQueryModel * Site::trier_date()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("Select * from SITE\
                         Order by date_dv DESC");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("type"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("adresse"));
     model->setHeaderData(4, Qt::Horizontal, QObject::tr("nbvisite"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("blockage"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("date_dv"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("temps_dv"));

    return model;
}
QSqlQueryModel * Site::trier_temps()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("Select * from SITE\
                         Order by temps_dv DESC");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("type"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("adresse"));
     model->setHeaderData(4, Qt::Horizontal, QObject::tr("nbvisite"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("blockage"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("date_dv"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("temps_dv"));

    return model;
}

