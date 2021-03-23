#ifndef SITE_H
#define SITE_H
#include <QString>
#include <QSqlQueryModel>
class Site
{
public:
    Site();
    Site(int,QString,QString,QString,int,int,QString,int);
    int getid();
    QString gettype();
    QString getnom();
    QString getadresse();
    int getnb_visite();
    int getblockage();
    QString getdatedv();
    int gettempsdv();
    void setid(int);
    void settype(QString);
    void setnom(QString);
    void setadresse(QString);
    void setnb_visite(int nb_visite);
    void setblockage(int blockage);
    void setdatedv(QString date_dv);
    void settempsdv(int temps_dv);
    bool ajouter();
    QSqlQueryModel* afficher();
    bool supprimer(int);



private:
  int id,nb_visite,blockage,temps_dv;
  QString type,nom,adresse,date_dv;


};

#endif // SITE_H
