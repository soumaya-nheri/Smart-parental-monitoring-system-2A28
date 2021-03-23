#ifndef CAMERAS_H
#define CAMERAS_H
#include<QSqlQuery>
#include<QSqlQueryModel>
#include<QString>

class cameras
{
private:
    int id;
    QString modele;
    QString etat;
    QString emplacement;

public:
    cameras();
    cameras(int,QString,QString,QString);
       int getid();
       void setid(int);
       QString getmodele();
       void setmodele(QString);
       QString getetat();
       void setetat(QString);
       QString getemplacement();
       void setemplacement(QString);
             cameras getcam(QString);
                   bool ajouter(int,QString,QString,QString);
                   QSqlQueryModel *afficher();
                       bool supprimer (int);
                       bool modifier(QString,QString,QString,QString);
};

#endif // CAMERAS_H
