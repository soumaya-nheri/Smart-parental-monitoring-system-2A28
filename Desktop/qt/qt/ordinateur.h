#ifndef ORDINATEUR_H
#define ORDINATEUR_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDateTime>
class Ordinateur
{
public:
    Ordinateur();
    Ordinateur(int Idordi,QString modele);

    QSqlQueryModel * afficher();
    bool ajouter();
    bool modifier();
    bool supprimer(int id);


private:

    int Idordi;
    QString modele;
};

#endif // ORDINATEUR_H
