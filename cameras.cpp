#include "cameras.h"
#include <QDebug>
#include <QSqlRecord>

using namespace std;
Cameras::Cameras()
{

}

Cameras::Cameras(int Id,QString modele,QString etat,QString emplacement)
{
    this->idcam=Id;
    this->modele=modele;
    this->etat=etat;
    this->emplacement=emplacement;
}

bool Cameras::ajouter(){

    QSqlQuery query;

    QString id= QString::number(idcam);

    query.prepare("INSERT INTO CAMERAS (ID,MODELE,ETAT,EMPLACEMENT)"
                  "VALUES (:idcam,:modele,:etat,:emplacement)");

    query.bindValue(":modele",modele);
    query.bindValue(":etat",etat);
    query.bindValue(":emplacement",emplacement);
    query.bindValue(":idcam", id);


    qDebug() <<"modele:  " << modele;
    qDebug() <<"etat:  " << etat;
    qDebug() <<"emplacement:  " << emplacement;
    qDebug() <<"idcam:  " << id;


    return    query.exec();
}

QSqlQueryModel * Cameras::afficher()
{
QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select ID,modele,etat,emplacement from CAMERAS");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("idcam"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("MODELE"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("ETAT"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("EMPLACEMENT"));

    return model;
}

bool Cameras::supprimer(int idd)
{
QSqlQuery query;
QString res= QString::number(idd);
query.prepare("Delete from CAMERAS where ID = :idcam");
query.bindValue(":id", res);
return    query.exec();
}

bool Cameras::modifier(){
    QSqlQuery query;
    QString id_res= QString::number(idcam);
    query.prepare("UPDATE CAMERAS SET  modele=:modele , etat =:etat ,emplacement=:emplacement where ID = :id");
    query.bindValue(":id", id_res);
    query.bindValue(":modele", modele);
    query.bindValue(":etat", etat);
    query.bindValue(":emplacement", emplacement);
    return    query.exec();
}
QSqlQueryModel * Cameras::recherche_modele(QString modele){
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * From CAMERAS WHERE modele ='" +modele+"' ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("idcam"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("MODELE"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("ETAT"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("EMPLACEMENT"));

    return model;
}
QSqlQueryModel * Cameras::recherche_etat(QString etat){
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * From CAMERAS WHERE etat ='" +etat+"' ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("MODELE"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("ETAT"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("EMPLACEMENT"));

    return model;
}
QSqlQueryModel * Cameras::recherche_emplacement(QString emplacement){
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("Select * From CAMERAS WHERE emplacement ='" +emplacement+"' ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("idcam"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("MODELE"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("ETAT"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("EMPLACEMENT"));

    return model;
}

QSqlQueryModel * Cameras::trier_etat()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("Select * from CAMERAS\
                         Order by etat DESC");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("idcam"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("MODELE"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("ETAT"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("EMPLACEMENT"));

    return model;
}


