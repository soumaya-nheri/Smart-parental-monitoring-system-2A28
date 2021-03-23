#include "ordinateur.h"
#include <QSqlQuery>
#include <QtDebug>
Ordinateur::Ordinateur()
{
id=0; type="";

}
Ordinateur::Ordinateur(int id ,QString type)
{this->id=id; this->type=type;}
int Ordinateur::getid(){return id;}
QString Ordinateur::gettype(){return type;}
void Ordinateur::setid(int id){this->id=id;}
void Ordinateur::settype(QString type){this->type=type;}
bool Ordinateur::ajouter()
{


    QSqlQuery query;
    QString id_strings=QString::number(id);
    query.prepare("INSERT INTO ordinateur(id, type) "
                  "VALUES (:id)");
    query.bindValue(0, id_strings);
    query.bindValue(1, type);
    return query.exec();


}
QSqlQueryModel* Ordinateur::afficher()
{
    QSqlQueryModel* model=new QSqlQueryModel();
             model->setQuery("SELECT* FROM site");
         model->setHeaderData(0, Qt::Horizontal, QObject::tr( "id"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("type"));



    return model;
}
bool Ordinateur::supprimer(int id)
{
    QSqlQuery query;
    query.prepare("Delete from site id=:id");
    query.bindValue(0, id);

    return query.exec();

}
