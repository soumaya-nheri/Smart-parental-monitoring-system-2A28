#include "television.h"
#include <QSqlQuery>
#include <QDebug>
#include <QObject>
#include <QTimeEdit>
#include <QDate>
#include <QSqlQueryModel>


Television::Television()
{
    matricule_tele = " ";
    modele = " ";
    emplacement = " ";
    etat = " ";
    verouillage ;

}
void Television::getTelevision(QString matricule_tele)
{
    QSqlQuery query;
    if(query.exec("select matricule_tele,modele_tele,emplacement,etat,verouillage from television where matricule_tele ='"+matricule_tele+"'"))
    {
        while(query.next())
        {
            this->setMatricule(query.value(0).toString());
            this->setModele(query.value(1).toString());
            this->setEmplacement(query.value(2).toString());
            this->setEtat(query.value(3).toString());
            this->setVerouillage(query.value(4).toTime());

        }
    }
}

Television::Television(QString matricule_tele, QString modele, QString emplacement, QString etat, QTime verouillage){
    this->matricule_tele = matricule_tele;
    this->modele = modele;
    this->emplacement = emplacement;
    this->etat = etat;
    this->verouillage = verouillage;
}
QString Television::getMatricule(){
    return matricule_tele;
}
QString Television::getModele(){
    return modele;
}
QString Television::getEmplacement(){
    return emplacement;
}
QString Television::getEtat(){
    return etat;
}
QTime Television::getVerouillage(){
    return verouillage;
}
void Television::setMatricule(QString matricule_tele){
    this->matricule_tele = matricule_tele;
}
void Television::setModele(QString modele){
    this->modele = modele;
}
void Television::setEmplacement(QString emplacement){
    this->emplacement = emplacement;
}
void Television::setEtat(QString etat){
    this->etat = etat;
}
void Television::setVerouillage(QTime verouillage){
    this->verouillage = verouillage;
}
bool Television::Ajouter_television(){
    //bool test = false;
    QSqlQuery query;
          query.prepare("INSERT INTO television (matricule_tele, modele, emplacement, etat, verouillage) "
                        "VALUES (:matricule_tele, :modele, :emplacement, :etat, :verouillage)");
          query.bindValue(":matricule_tele", matricule_tele);
          query.bindValue(":modele", modele);
          query.bindValue(":emplacement", emplacement);
          query.bindValue(":etat", etat);
          query.bindValue(":verouillage", verouillage);

        return query.exec();
}
QSqlQueryModel* Television::Afficher_television(){

    QSqlQueryModel* model = new QSqlQueryModel();

    model->setQuery("SELECT * FROM television");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Matricule"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Modèle"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Lieu"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Etat"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Verouillage à"));

    return model;
}
bool Television::modifier(QString matricule_tele, QString modele  ,QString emplacement , QString etat , QTime verouillage )
{
    QSqlQuery query;
        query.prepare("UPDATE television SET modele=:modele,emplacement=:emplacement,etat=:etat,verouillage=:verouillage WHERE matricule_tele=:matricule_tele");
        query.bindValue(":matricule_tele",matricule_tele);
        query.bindValue(":modele",modele);
        query.bindValue(":emplacement",emplacement);
        query.bindValue(":etat",etat);
        query.bindValue(":verouillage",verouillage);
        return query.exec();



}




bool Television::Supprimer_television(QString matricule_tele){
    QSqlQuery query;
    query.prepare("DELETE FROM television WHERE matricule_tele=:matricule_tele");
    query.bindValue(0, matricule_tele);

    return query.exec();
}





QSqlQueryModel* Television::recherche(int test , QString text )
{


        QSqlQuery query ;

        QSqlQueryModel *model = new QSqlQueryModel();

        if(test==0)
        {
            query.prepare("SELECT * from television where  emplacement like '"+text+"'  ");
            query.exec();
            model->setQuery(query);
        }

            if(test==1)
            {
                query.prepare("SELECT * FROM television where matirucle_tele   like '"+text+"'  ");
                query.exec();
                model->setQuery(query);
            }

    return model;


}




        QSqlQueryModel *Television ::trierup(int test)
        {
            QSqlQuery query;
            QSqlQueryModel *model = new QSqlQueryModel();

            if (test == 0) {
              query.prepare(" SELECT * FROM television ORDER BY emplacement asc; ");
              query.exec();
              model->setQuery(query);
            }

            if (test == 1) {
              query.prepare(" SELECT * FROM television ORDER BY matricule_tele asc; ");
              query.exec();
              model->setQuery(query);
            }


            return model;
        }

        QSqlQueryModel *Television:: trier_down(int test)
        {
            QSqlQuery query;
            QSqlQueryModel *model = new QSqlQueryModel();

            if (test == 0) {
              query.prepare(" SELECT * FROM television ORDER BY emplacement desc; ");
              query.exec();
              model->setQuery(query);
            }

            if (test == 1) {
              query.prepare(" SELECT * FROM television ORDER BY matricule_tele desc; ");
              query.exec();
              model->setQuery(query);
            }


            return model;
          }



