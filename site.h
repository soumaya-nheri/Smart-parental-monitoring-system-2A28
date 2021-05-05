#ifndef SITE_H
#define SITE_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDateTime>
class Site
{
public:
    Site();
    Site(int,QString,QString,QString,int,QString,QString,int);

    QSqlQueryModel * afficher();
    bool ajouter();
    bool modifier();
    bool supprimer(int id);
    //fonctions avancées
    QSqlQueryModel * recherche_adresse(QString);
    QSqlQueryModel * recherche_nom(QString);
    QSqlQueryModel * recherche_type(QString);
    QSqlQueryModel * trier_nbvisite();
    QSqlQueryModel * trier_date();
    QSqlQueryModel * trier_temps();



private:

    int Id,nb_visite,temps_dv;
    QString type,nom,adresse,blockage,date_dv;
};

#endif // SITE_H
