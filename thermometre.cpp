#include "thermometre.h"
#include <QSqlQuery>
#include <QDebug>
#include <QObject>

Thermometre::Thermometre()
{
    matricule_thermo="";
    etat="";
    emplacement="";
    temperature=0;


}
Thermometre:: Thermometre(QString matricule_thermo, QString etat, QString emplacement, int temperature)
{
    this -> matricule_thermo= matricule_thermo;
    this -> etat= etat;
    this -> emplacement=emplacement;
    this ->temperature=temperature;

}
QString Thermometre:: getMatricule()
{
    return matricule_thermo;
}
QString Thermometre:: getEtat()
{
    return etat;

}
QString Thermometre:: getEmplacement()
{
    return emplacement;
}

int Thermometre:: getTemperature()
{
    return temperature;
}
 void Thermometre:: setMatricule(QString matricule_thermo )
 {
     this->matricule_thermo= matricule_thermo;


 }
 void Thermometre:: setEtat(QString etat)
 {
     this->etat=etat;
 }
 void Thermometre:: setEmplacement(QString emplacement)
 {
     this->emplacement=emplacement;

 }
 void Thermometre::setTemperature( int temperature)
 {
      this->temperature=temperature;
 }
 bool Thermometre::Ajouter_thermometre()
 {
     //bool test = false;
     QSqlQuery query;
           query.prepare("INSERT INTO thermometre (matricule_thermo, etat, emplacement, temperature) "
                         "VALUES (:matricule_thermo, :etat, :emplacement, :temperature)");
           query.bindValue(":matricule_thermo", matricule_thermo);
           query.bindValue(":etat", etat);
           query.bindValue(":emplacement", emplacement);
           query.bindValue(":temperature", temperature);


         return query.exec();

 }

 QSqlQueryModel* Thermometre:: Afficher_thermometre(){
     QSqlQueryModel* model = new QSqlQueryModel();

     model->setQuery("SELECT * FROM thermometre");
     model->setHeaderData(0, Qt::Horizontal, QObject::tr("Matricule"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("Etat"));
     model->setHeaderData(2, Qt::Horizontal, QObject::tr("Lieu"));
     model->setHeaderData(3, Qt::Horizontal, QObject::tr("temperature "));


     return model;
 }
 bool Thermometre::modifier(QString matricule_thermo,QString emplacement , QString etat , int temperature )
 {
     QSqlQuery query;
         query.prepare("UPDATE thermometre SET  emplacement=:emplacement,etat=:etat,temperature=:temperature WHERE matricule_thermo=:matricule_thermo");
         query.bindValue(":matricule_thermo",matricule_thermo);

         query.bindValue(":emplacement",emplacement);
         query.bindValue(":etat",etat);
         QString res= QString::number(temperature);
            query.bindValue(":temperature",res);

         return query.exec();



 }
 bool Thermometre::Supprimer_thermometre(QString matricule_thermo){
     QSqlQuery query;
     query.prepare("DELETE FROM thermometre WHERE matricule_thermo= :matricule_thermo");
     query.bindValue(0, matricule_thermo);

     return query.exec();
 }








 QSqlQueryModel* Thermometre::recherche(int test , QString text )
 {


         QSqlQuery query ;

         QSqlQueryModel *model = new QSqlQueryModel();


             if(test==0)
             {
                 query.prepare("SELECT * FROM thermometre where temperature   like '"+text+"'  ");
                 query.exec();
                 model->setQuery(query);
             }

             if(test==1)
             {
                 query.prepare("SELECT * FROM thermometre where matricule_thermo  like '"+text+"'  ");
                 query.exec();
                 model->setQuery(query);
             }


     return model;


 }

         QSqlQueryModel *Thermometre ::trierup(int test)
         {
             QSqlQuery query;
             QSqlQueryModel *model = new QSqlQueryModel();

             if (test == 0) {
               query.prepare(" SELECT * FROM thermometre ORDER BY emplacement asc; ");
               query.exec();
               model->setQuery(query);
             }

             if (test == 1) {
               query.prepare(" SELECT * FROM thermometre ORDER BY matricule_thermo asc; ");
               query.exec();
               model->setQuery(query);
             }
             if (test == 2) {
               query.prepare(" SELECT * FROM thermometre ORDER BY temperature asc; ");
               query.exec();
               model->setQuery(query);
             }


             return model;
         }

         QSqlQueryModel *Thermometre:: trier_down(int test)
         {
             QSqlQuery query;
             QSqlQueryModel *model = new QSqlQueryModel();

             if (test == 0) {
               query.prepare(" SELECT * FROM thermometre ORDER BY emplacement desc; ");
               query.exec();
               model->setQuery(query);
             }

             if (test == 1) {
               query.prepare(" SELECT * FROM thermometre ORDER BY matricule_thermo desc; ");
               query.exec();
               model->setQuery(query);
             }

             if (test == 2) {
               query.prepare(" SELECT * FROM thermometre ORDER BY temperature desc; ");
               query.exec();
               model->setQuery(query);
             }


             return model;
           }






