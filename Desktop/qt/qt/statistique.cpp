#include "statistique.h"
#include <QDebug>
#include <QSqlRecord>


Statistique::Statistique()
{

}

Statistique::Statistique(QString adresse,int nb_visite)
{
    this->adresse=adresse;
    this->nb_visite=nb_visite;
}


QSqlQueryModel * Statistique::afficherstats()
{
    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select adresse, count(1) as occur, sum(cout) as somme from SITE s  order by count(1) desc");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("adresse"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("occur"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("somme"));

        return model;
}



