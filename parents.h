#ifndef PARENTS_H
#define PARENTS_H
#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include <QSqlDatabase>
#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <QMessageBox>
#include "qwidget.h"
#include "QtSql/QSqlDatabase"
#include <QtSql/QSqlQuery>
#include "error.h"
#include <QDebug>
#include "QtSql/QSqlError"
#include"QWidget"
#include"QTableWidget"
#include "QTableWidgetItem"
#include "QSystemTrayIcon"
#include "QFileDialog"
#include "QTextBrowser"
#include "QPrinter"


class parents
{
public:
    parents();
    parents(int matricule_parents, QString nom_parents, QString prenom_parents, QString mail_parents, QString adresse_parents, int numero_parents);
    ~parents(){};

    void setmatricule_parents(int);
    void setnom_parents(QString);
    void setprenom_parents(QString);
    void setmail_parents(QString);
    void setadresse_parents(QString);
    void setnumero_parents(int);

    int getmatricule_parents();
    QString getnom_parents();
    QString getprenom_parents();
    QString getmail_parents();
    QString getadresse_parents();
    int getnumero_parents();


    bool ajouter_parents();
    QSqlQueryModel* afficher_parents();
    bool supprimer_parent(int matricule_parents);
    bool modifier_parent();
    QSqlQueryModel* rechercher_parents(const QString &b);
    QSqlQueryModel * trier_nomP();
    QSqlQueryModel * trier_prenomP();
    QSqlQueryModel * trier_numeroP();

private:
    int matricule_parents;
    QString nom_parents;
    QString prenom_parents;
    QString mail_parents;
    QString adresse_parents;
    int numero_parents;
};

#endif // PARENTS_H
