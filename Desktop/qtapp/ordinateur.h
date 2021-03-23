#ifndef ORDINATEUR_H
#define ORDINATEUR_H
#include <QString>
#include <QSqlQueryModel>
class Ordinateur
{
public:
    Ordinateur();
    Ordinateur(int,QString);
    int getid();
    QString gettype();
    void setid(int);
    void settype(QString);
    bool ajouter();
    QSqlQueryModel* afficher();
    bool supprimer(int);



private:
  int id;
  QString type;


};

#endif // ORDINATEUR_H
