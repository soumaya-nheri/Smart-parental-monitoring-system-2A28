#ifndef ELECTROMENAGER_H
#define ELECTROMENAGER_H
#include <QString>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include <QSqlDatabase>
#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <QMessageBox>
#include <QTableView>
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


class electromenager
{
public:
    electromenager();
    electromenager(int, QString, int, QString);
    ~electromenager(){};


    int getmatricule_machine();
    QString gettype_machine();
    int getetat_machine();
    QString getemplacement_machine();


    void setmatricule_machine(int);
    void settype_machine(QString);
    void setetat_machine(int);
    void setemplacement_machine(QString);


    bool ajouter_machine();
    QSqlQueryModel* afficher_machine();
    bool supprimer_machine(int matricule_machine);
    bool modifier_machine();
    QSqlQueryModel * trier_etatM();
    QSqlQueryModel * trier_emplacementM();
    QSqlQueryModel * trier_typeM();
    QSqlQueryModel* rechercher_machine(const QString &b);

private:
    int matricule_machine;
    QString type_machine;
    int etat_machine;
    QString emplacement_machine;
};

#endif // ELECTROMENAGER_H
