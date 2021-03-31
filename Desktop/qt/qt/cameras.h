#ifndef CAMERAS_H
#define CAMERAS_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDateTime>
class Cameras
{
public:
    Cameras();
    Cameras(int idcam,QString modele,QString etat,QString emplacement);

    QSqlQueryModel * afficher();
    bool ajouter();
    bool modifier();
    bool supprimer(int id);
    QSqlQueryModel * recherche_modele(QString);
    QSqlQueryModel * recherche_etat(QString);
    QSqlQueryModel * recherche_emplacement(QString);
    QSqlQueryModel * trier_etat();


private:

    int idcam;
    QString modele;
    QString etat;
    QString emplacement;
};

#endif // CAMERAS_H
