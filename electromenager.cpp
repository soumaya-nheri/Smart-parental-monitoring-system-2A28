#include "electromenager.h"
#include <QSqlQuery>
#include <QDebug>
#include <QtDebug>
#include <QObject>

electromenager::electromenager()
{
matricule_machine=0; type_machine=""; etat_machine=0; emplacement_machine="";
}

electromenager::electromenager(int matricule_machine, QString type_machine, int etat_machine, QString emplacement_machine)
{this->matricule_machine=matricule_machine; this->type_machine=type_machine; this->etat_machine=etat_machine; this->emplacement_machine=emplacement_machine;}
int electromenager::getmatricule_machine(){return matricule_machine;}
QString electromenager::gettype_machine(){return type_machine;}
int electromenager::getetat_machine(){return etat_machine;}
QString electromenager::getemplacement_machine(){return emplacement_machine;}
void electromenager::setmatricule_machine(int matricule_machine){this->matricule_machine=matricule_machine;}
void electromenager::settype_machine(QString type_machine){this->type_machine=type_machine;}
void electromenager::setetat_machine(int etat_machine){this->etat_machine=etat_machine;}
void electromenager::setemplacement_machine(QString emplacement_machine){this->emplacement_machine=emplacement_machine;}
bool electromenager::ajouter_machine()
{
    bool test1=true;

    QSqlQuery query;
    QString matricule_machine_string= QString::number(matricule_machine);
    QString etat_machine_string= QString::number(etat_machine);
          query.prepare("INSERT INTO electromenager (matricule_machine, type_machine, etat_machine, emplacement_machine) "
                        "VALUES (:matricule_m, :type, :etat, :emplacement)");
          query.bindValue(":matricule_m", matricule_machine_string);
          query.bindValue(":type", type_machine);
          query.bindValue(":etat", etat_machine_string);
          query.bindValue(":emplacement", emplacement_machine);
          query.exec();
    return test1;
}
QSqlQueryModel* electromenager::afficher_machine()
{
    QSqlQueryModel* model=new QSqlQueryModel();
          model->setQuery("SELECT* FROM electromenager");
          model->setHeaderData(0, Qt::Horizontal, QObject::tr("Matricule"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("Type"));
          model->setHeaderData(2, Qt::Horizontal, QObject::tr("Etat"));
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
     query.prepare("UPDATE ELECTROMENAGER SET type_machine=:type, etat_machine=:etat, emplacement_machine=:emplacement WHERE matricule_machine=:matricule_m");
     query.bindValue(":matricule_m",matricule_machine);
     query.bindValue(":type",type_machine);
     query.bindValue(":etat",etat_machine);
     query.bindValue(":emplacement",emplacement_machine);
     return query.exec();
 }

QSqlQueryModel * electromenager::trier_etatM()
{
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("SELECT * FROM ELECTROMENAGER ORDER BY etat_machine");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("Matricule"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("Type"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("Etat"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("Emplacement"));
    return model;
}

QSqlQueryModel * electromenager::trier_emplacementM()
{
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("SELECT * FROM ELECTROMENAGER ORDER BY emplacement_machine");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("Matricule"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("Type"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("Etat"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("Emplacement"));
    return model;
}


QSqlQueryModel * electromenager::trier_typeM()
{
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("SELECT * FROM ELECTROMENAGER ORDER BY type_machine");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("Matricule"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("Type"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("Etat"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("Emplacement"));
    return model;
}

QSqlQueryModel * electromenager::rechercher_machine(const QString &b)
{
   QSqlQueryModel * model = new QSqlQueryModel();
   model->setQuery("SELECT * FROM ELECTROMENAGER WHERE (matricule_machine || type_machine || etat_machine || emplacement_machine) LIKE '%"+b+"%'");
   model->setHeaderData(0,Qt::Horizontal,QObject::tr("Matricule"));
   model->setHeaderData(1,Qt::Horizontal,QObject::tr("Type"));
   model->setHeaderData(2,Qt::Horizontal,QObject::tr("Etat"));
   model->setHeaderData(3,Qt::Horizontal,QObject::tr("Emplacement"));
   return model;
}
