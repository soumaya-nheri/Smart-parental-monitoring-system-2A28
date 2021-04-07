#include "Parents.h"
#include <QSqlQuery>
#include <QDebug>
#include <QtDebug>
#include <QObject>


parents::parents()
{
matricule_parents=0; nom_parents=""; prenom_parents=""; mail_parents=""; adresse_parents=""; numero_parents=0;
}

parents::parents(int matricule_parents, QString nom_parents, QString prenom_parents, QString mail_parents, QString adresse_parents,  int numero_parents)
{this->matricule_parents=matricule_parents;  this->nom_parents=nom_parents; this->prenom_parents=prenom_parents; this->mail_parents=mail_parents; this->adresse_parents=adresse_parents; this->numero_parents=numero_parents;}
int parents::getmatricule_parents(){return matricule_parents;}
QString parents::getnom_parents(){return nom_parents;}
QString parents::getprenom_parents(){return prenom_parents;}
QString parents::getmail_parents(){return mail_parents;}
QString parents::getadresse_parents(){return adresse_parents;}
int parents::getnumero_parents(){return numero_parents;}
void parents::setmatricule_parents(int matricule_parents){this->matricule_parents=matricule_parents;}
void parents::setnom_parents(QString nom_parents){this->nom_parents=nom_parents;}
void parents::setprenom_parents(QString prenom_parents){this->prenom_parents=prenom_parents;}
void parents::setmail_parents(QString mail_parents){this->mail_parents=mail_parents;}
void parents::setadresse_parents(QString adresse_parents){this->adresse_parents=adresse_parents;}
void parents::setnumero_parents(int numero_parents){this->numero_parents=numero_parents;}
bool parents::ajouter_parents()
{
    bool test=true;

    QSqlQuery query;
    QString matricule_parents_string= QString::number(matricule_parents);
    QString numero_parents_string= QString::number(numero_parents);
          query.prepare("INSERT INTO parents (matricule_parents, nom_parents, prenom_parents, mail_parents, adresse_parents, numero_parents) "
                        "VALUES (:matricule, :nom, :prenom, :mail, :adresse, :numero)");
          query.bindValue(":matricule", matricule_parents_string);
          query.bindValue(":nom", nom_parents);
          query.bindValue(":prenom", prenom_parents);
          query.bindValue(":mail", mail_parents);
          query.bindValue(":adresse", adresse_parents);
          query.bindValue(":numero", numero_parents_string);
          query.exec();
    return test;
}
QSqlQueryModel* parents::afficher_parents()
{
    QSqlQueryModel* model=new QSqlQueryModel();

          model->setQuery("SELECT* FROM parents");
          model->setHeaderData(0, Qt::Horizontal, QObject::tr("Matricule"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
          model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prenom"));
          model->setHeaderData(3, Qt::Horizontal, QObject::tr("Mail"));
          model->setHeaderData(4, Qt::Horizontal, QObject::tr("Adresse"));
          model->setHeaderData(5, Qt::Horizontal, QObject::tr("Numero"));

    return model;


}
 bool parents::supprimer_parent(int matricule_parents)
 {

     QSqlQuery query;
     QString matricule_parents_string= QString::number(matricule_parents);
     QString numero_parents_string= QString::number(numero_parents);
           query.prepare("Delete from parents where matricule_parents=:matricule");
           query.bindValue(":matricule", matricule_parents);


     return query.exec();
 }

bool parents::modifier_parent()
 {
     QSqlQuery query;
     QString matricule_parents_string= QString::number(matricule_parents);
     QString numero_parents_string= QString::number(numero_parents);
     query.prepare("UPDATE PARENTS SET nom_parents=:nom, prenom_parents=:prenom, mail_parents=:mail, adresse_parents=:adresse, numero_parents=:numero WHERE matricule_parents=:matricule");
     query.bindValue(":matricule",matricule_parents);
     query.bindValue(":nom",nom_parents);
     query.bindValue(":prenom",prenom_parents);
     query.bindValue(":mail",mail_parents);
     query.bindValue(":adresse",adresse_parents);
     query.bindValue(":numero",numero_parents);
     return query.exec();
 }

QSqlQueryModel * parents::rechercher_parents(const QString &b)
{
   QSqlQueryModel * model = new QSqlQueryModel();
   model->setQuery("SELECT * FROM PARENTS WHERE (matricule_parents || nom_parents || prenom_parents || mail_parents || adresse_parents || numero_parents) LIKE '%"+b+"%'");
   model->setHeaderData(0,Qt::Horizontal,QObject::tr("Matricule"));
   model->setHeaderData(1,Qt::Horizontal,QObject::tr("Nom"));
   model->setHeaderData(2,Qt::Horizontal,QObject::tr("Prenom"));
   model->setHeaderData(3,Qt::Horizontal,QObject::tr("Mail"));
   model->setHeaderData(4,Qt::Horizontal,QObject::tr("Adresse"));
   model->setHeaderData(5,Qt::Horizontal,QObject::tr("Numero"));
   return model;
}

QSqlQueryModel * parents::trier_nomP()
{
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("SELECT * FROM PARENTS ORDER BY nom_parents");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("Matricule"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("Nom"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("Prenom"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("Mail"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("Adresse"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("Numero"));
    return model;
}

QSqlQueryModel * parents::trier_prenomP()
{
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("SELECT * FROM PARENTS ORDER BY prenom_parents");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("Matricule"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("Nom"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("Prenom"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("Mail"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("Adresse"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("Numero"));
    return model;
}

QSqlQueryModel * parents::trier_numeroP()
{
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("SELECT * FROM PARENTS ORDER BY numero_parents");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("Matricule"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("Nom"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("Prenom"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("Mail"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("Adresse"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("Numero"));
    return model;
}
