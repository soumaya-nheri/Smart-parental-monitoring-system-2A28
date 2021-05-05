#ifndef CHAMBRE_H
#define CHAMBRE_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDateTime>
class Chambre
{
public:
    Chambre();
    Chambre(int Idchamp,QString description);

    QSqlQueryModel * afficher();
    bool ajouter();
    bool modifier();
    bool supprimer(int id);


private:

    int Idchamp;
    QString description;
};

#endif // CHAMBRE_H
