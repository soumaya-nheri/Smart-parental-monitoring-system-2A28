#include "electromenager.h"
#include <QSqlQuery>
#include <QDebug>
#include <QtDebug>
#include <QObject>

electromenager::electromenager()
{
matricule_machine=0; etat_machine=0; type_machine=""; emplacement_machine="";
}

electromenager::electromenager(int matricule_machine, int etat_machine, QString type_machine, QString emplacement_machine)
{this->matricule_machine=matricule_machine; this->etat_machine=etat_machine; this->type_machine=type_machine; this->emplacement_machine=emplacement_machine;}
int electromenager::getmatricule_machine(){return matricule_machine;}
int electromenager::getetat_machine(){return etat_machine;}
QString electromenager::gettype_machine(){return type_machine;}
QString electromenager::getemplacement_machine(){return emplacement_machine;}
void electromenager::setmatricule_machine(int matricule_machine){this->matricule_machine=matricule_machine;}
void electromenager::setetat_machine(int etat_machine){this->etat_machine=etat_machine;}
void electromenager::settype_machine(QString type_machine){this->type_machine=type_machine;}
void electromenager::setemplacement_machine(QString emplacement_machine){this->emplacement_machine=emplacement_machine;}
bool electromenager::ajouter_machine()
{
    bool test1=true;

    QSqlQuery query;
    QString matricule_machine_string= QString::number(matricule_machine);
    QString etat_machine_string= QString::number(etat_machine);
          query.prepare("INSERT INTO electromenager (matricule_machine, etat_machine, type_machine, emplacement_machine) "
                        "VALUES (:matricule_m, :etat, :type, :emplacement)");
          query.bindValue(":matricule_m", matricule_machine_string);
          query.bindValue(":etat", etat_machine_string);
          query.bindValue(":type", type_machine);
          query.bindValue(":emplacement", emplacement_machine);
          query.exec();
    return test1;
}
QSqlQueryModel* electromenager::afficher_machine()
{
    QSqlQueryModel* model=new QSqlQueryModel();
          model->setQuery("SELECT* FROM electromenager");
          model->setHeaderData(0, Qt::Horizontal, QObject::tr("Identifiant Machine"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("Etat"));
          model->setHeaderData(2, Qt::Horizontal, QObject::tr("Type"));
          model->setHeaderData(3, Qt::Horizontal, QObject::tr("Emplacement"));

    return model;


}
bool electromenager::supprimer_machine(int matricule_machine)
{

    QSqlQuery query;
    QString matricule_machine_string= QString::number(matricule_machine);
    QString etat_machine_string= QString::number(etat_machine);
          query.prepare("Delete from electromenager where matricule_machine=:matricule_m");
          query.bindValue(":matricule_m", matricule_machine);


    return query.exec();
}


bool electromenager::modifier_machine()
 {
     QSqlQuery query;
     QString matricule_machine_string= QString::number(matricule_machine);
     QString etat_machine_string= QString::number(etat_machine);
     query.prepare("UPDATE ELECTROMENAGER SET etat_machine=:etat, type_machine=:type,emplacement_machine=:emplacement WHERE matricule_machine=:matricule_m");
     query.bindValue(":matricule_m",matricule_machine);
     query.bindValue(":etat",etat_machine);
     query.bindValue(":type",type_machine);
     query.bindValue(":emplacement",emplacement_machine);
     return query.exec();
 }
