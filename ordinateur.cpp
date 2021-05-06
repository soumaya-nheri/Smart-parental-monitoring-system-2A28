#include "ordinateur.h"

#include <QDebug>
#include <QSqlRecord>

using namespace std;
Ordinateur::Ordinateur()
{

}

Ordinateur::Ordinateur(int Id,QString modele)
{
    this->Idordi=Id;
    this->modele=modele;
}

bool Ordinateur::ajouter(){

    QSqlQuery query;

    QString id= QString::number(Idordi);

    query.prepare("INSERT INTO ORDINATEUR (ID,MODELE)"
                  "VALUES (:Idordi,:modele)");

    query.bindValue(":modele",modele);
    query.bindValue(":Idordi", id);


    qDebug() <<"modele:  " << modele;
    qDebug() <<"Idordi:  " << id;


    return    query.exec();
}

QSqlQueryModel * Ordinateur::afficher()
{
QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select ID,modele from ORDINATEUR");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("Idordi"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("MODELE"));
    return model;
}

bool Ordinateur::supprimer(int idd)
{
QSqlQuery query;
QString res= QString::number(idd);
query.prepare("Delete from ORDINATEUR where ID = :id");
query.bindValue(":id", res);
return    query.exec();
}

bool Ordinateur::modifier(){
    QSqlQuery query;
    QString id_res= QString::number(Idordi);
    query.prepare("UPDATE ORDINATEUR SET  modele=:modele where ID = :id");
    query.bindValue(":id", id_res);
    query.bindValue(":modele", modele);
    return    query.exec();
}


//valeur ajoutée
/*void Ordinateur::sendMail( QString mailreciever , QString object,QString contenue)
{
    Smtp* smtp = new Smtp("nawrez.shili@esprit.tn", "191JFT3363", "smtp.gmail.com", 465);
    connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));////////////////////////////////////////////////



    smtp->sendMail("nawrez.shili@esprit.tn",mailreciever ,object, contenue);
}

void Ordinateur::mailSent(QString status)
{
    if(status == "Message sent")
        QMessageBox::warning( 0,QObject::tr( "Qt Simple SMTP client" ),QObject::tr( "Message sent!\n\n" ) );
}*/





