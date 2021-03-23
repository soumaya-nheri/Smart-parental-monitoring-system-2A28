#include "cameras.h"
#include<QMessageBox>
cameras::cameras()
{
id=0;
modele="";
etat="";
emplacement="";
}
cameras::cameras(int id,QString modele,QString etat,QString emplacement)
{
    this->id=id;
    this->modele=modele;
    this->etat=etat;
    this->emplacement=emplacement;
}
int cameras::getid(){
    return id;
}
QString cameras::getmodele(){
    return modele;
}
QString cameras::getetat(){
    return etat;
}
QString cameras::getemplacement(){
    return emplacement;
}
void cameras::setid(int n){
    id=n;
}
void cameras::setmodele(QString n){
    modele=n;
}
void cameras::setetat(QString n){
    etat=n;
}
void cameras::setemplacement(QString n){
    emplacement=n;
}

bool cameras::ajouter(int ID,QString MODELE,QString ETAT,QString EMPLACEMENT){
QSqlQuery query;
    /*QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("Source_Projet2A");//inserer le nom de la source de données ODBC
    db.setUserName("nayrouz");//inserer nom de l'utilisateur
    db.setPassword("esprit18");//inserer mot de passe de cet utilisateur
    query=QSqlQuery(db);*/
    query.prepare("INSERT INTO cameras (ID,MODELE,ETAT,EMPLACEMENT)"
                  "VALUES (:ID,:MODELE,:ETAT,:EMPLACEMENT)");

    query.bindValue(":ID", ID);
    query.bindValue(":MODELE", MODELE);
    query.bindValue(":ETAT", ETAT);
    query.bindValue(":EMPLACEMENT", EMPLACEMENT);


    return    query.exec();
}
QSqlQueryModel *cameras::afficher(){
    QSqlQueryModel* model=new QSqlQueryModel();
             model->setQuery("SELECT* FROM cameras");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("MODELE"));
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ETAT"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("EMPLACEMENT"));
    return  model;
}
bool cameras::supprimer(int ID){

    QSqlQuery query;
    query.prepare("Delete from cameras where ID= :ID");
    query.bindValue(":ID", ID);
    return query.exec();



}
bool cameras::modifier(QString ID,QString MODELE,QString ETAT,QString EMPLACEMENT)
{
    QSqlQuery query;

    query.prepare("Update cameras set ID= :ID ,MODELE= :MODELE,ETAT= :ETAT,EMPLACEMENT= :EMPLACEMENT where ID= :ID");

    query.bindValue(":ID", ID);
    query.bindValue(":MODELE", MODELE);
    query.bindValue(":ETAT", ETAT);
    query.bindValue(":EMPLACEMENT", EMPLACEMENT);
    return query.exec();
}














