#ifndef STATISTIQUE_H
#define STATISTIQUE_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDateTime>

class Statistique
{


public:
    Statistique();
    Statistique(QString adresse,int nb_visite);
    QSqlQueryModel * afficherstats();
    bool ajouter();

private:
    int nb_visite;
    QString adresse;


};
#endif // STATISTIQUE_H
