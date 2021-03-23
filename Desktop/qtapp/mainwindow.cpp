#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "site.h"
#include "ordinateur.h"
#include "cameras.h"
#include <QIntValidator>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->le_id->setValidator(new QIntValidator(0, 9999999, this));
    ui->tab_site->setModel(S.afficher());
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pb_ajouter_clicked()
{
    int id=ui->le_id->text().toInt();
    QString type=ui->le_type->text();
    QString nom=ui->le_nom->text();
    QString adresse=ui->le_adresse->text();
    int nb_visite=ui->le_nb->text().toInt();
    int blockage=ui->le_blockage->text().toInt();
    QString date_dv=ui->le_date->text();
    int temps_dv=ui->le_temps->text().toInt();
    Site Site(id,type,nom,adresse,nb_visite,blockage,date_dv,temps_dv);

    bool test=Site.afficher();
    if (test==true)
    {
        QMessageBox::information(nullptr,QObject::tr("OK"),QObject::tr("Ajout effectué\n""Click Cancel to exit."),QMessageBox::Cancel);
    }
    else
        QMessageBox::critical(nullptr,QObject::tr("NOT OK"),QObject::tr("Ajout non effectué.\n""Click Cancel to exit."),QMessageBox::Cancel);
}


void MainWindow::on_pb_supprimer_clicked()
{
    Site S1; S1.setid(ui->leid_supp->text().toUInt());
    bool test=S1.supprimer(S1.getid());
    QMessageBox msgBox;

    if(test)
        QMessageBox::information(nullptr,QObject::tr("OK"),QObject::tr("Suppression avec succes\n""Click Cancel to exit."),QMessageBox::Cancel);
    ui->tab_site->setModel(S.afficher());


}

void MainWindow::on_pb_ajouter_5_clicked()
{
    int id=ui->id_camera->text().toInt();
    QString modele=ui->modele_camera->text();
    QString etat=ui->etat_camera->text();
    QString emplacement=ui->emplacement_camera->text();
    cameras cameras(id,etat,modele,emplacement);

    bool test=cameras.afficher();
    if (test==true)
    {
        QMessageBox::information(nullptr,QObject::tr("OK"),QObject::tr("Ajout effectué\n""Click Cancel to exit."),QMessageBox::Cancel);
    }
    else
        QMessageBox::critical(nullptr,QObject::tr("NOT OK"),QObject::tr("Ajout non effectué.\n""Click Cancel to exit."),QMessageBox::Cancel);
}

void MainWindow::on_pb_supprimer_5_clicked()
{
    cameras c1; c1.setid(2);
    bool test=c1.supprimer(c1.getid());
}
