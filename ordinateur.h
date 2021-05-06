#ifndef ORDINATEUR_H
#define ORDINATEUR_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDateTime>
#include <QSortFilterProxyModel>
#include <QTextTableFormat>
#include <QStandardItemModel>
#include <QFileDialog>
#include <QPropertyAnimation>
class Ordinateur
{
public:
    Ordinateur();
    Ordinateur(int Idordi,QString modele);

    QSqlQueryModel * afficher();
    bool ajouter();
    bool modifier();
    bool supprimer(int id);

    void sendMail(QString,QString,QString);
    void mailSent(QString);
QSqlQueryModel * recherche_modele(QString);
QSqlQueryModel * recherche_id(int);

private:

    int Idordi;
    QString modele;
};

#endif // ORDINATEUR_H
