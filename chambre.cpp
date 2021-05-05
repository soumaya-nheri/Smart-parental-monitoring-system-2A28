#include "chambre.h"
#include <QDebug>
#include <QSqlRecord>

using namespace std;
Chambre::Chambre()
{

}

Chambre::Chambre(int Id,QString modele)
{
    this->Idchamp=Id;
    this->description=modele;
}

bool Chambre::ajouter(){

    QSqlQuery query;

    QString id= QString::number(Idchamp);

    query.prepare("INSERT INTO CHAMBRE (num,DESCRIPTION)"
                  "VALUES (:Idchamp,:description)");

    query.bindValue(":description",description);
    query.bindValue(":Idchamp", id);


    qDebug() <<"description:  " << description;
    qDebug() <<"Idchamp:  " << id;


    return    query.exec();
}

QSqlQueryModel * Chambre::afficher()
{
QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select num,description from CHAMBRE");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("num"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("description"));
    return model;
}

bool Chambre::supprimer(int idd)
{
QSqlQuery query;
QString res= QString::number(idd);
query.prepare("Delete from CHAMBRE where num = :id");
query.bindValue(":id", res);
return    query.exec();
}

bool Chambre::modifier(){
    QSqlQuery query;
    QString id_res= QString::number(Idchamp);
    query.prepare("UPDATE CHAMBRE SET  description=:description where num = :id");
    query.bindValue(":id", id_res);
    query.bindValue(":description", description);
    return    query.exec();
}


