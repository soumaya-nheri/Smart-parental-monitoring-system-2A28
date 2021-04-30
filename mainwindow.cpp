#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "electromenager.h"
#include "Parents.h"
#include <QIntValidator>
#include <QMessageBox>
#include <QTabWidget>
#include <QTableView>
#include <QWidget>
#include <QStackedWidget>
#include <QLineEdit>
#include <QLabel>
#include <QPrintDialog>
#include <QPrinter>
#include <QSound>
#include <QMediaPlayer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    //controle saisie
    ui->setupUi(this);
    ui->le_matricule_parents->setValidator( new QIntValidator(0, 9999, this));
    ui->le_matricule_parent2->setValidator( new QIntValidator(0, 9999, this));
    ui->le_matricule_machine->setValidator( new QIntValidator(0, 9999, this));
    ui->le_matricule_machine2->setValidator( new QIntValidator(0, 9999, this));
    ui->le_numero_parents->setValidator( new QIntValidator(0, 99999999, this));
    ui->le_numero_parent2->setValidator( new QIntValidator(0, 99999999, this));
    ui->le_etat_machine->setValidator( new QIntValidator(0, 2, this));
    ui->le_etat_machine2->setValidator( new QIntValidator(0, 2, this));


ui->tableView_afficherParents->setModel(P.afficher_parents());
ui->tableView_afficherMachine->setModel(E.afficher_machine());


}

MainWindow::~MainWindow()
{
    delete ui;
}

//PARENTS

void MainWindow::on_pb_actualiser_parents_clicked()
{
    QSound::play(":\Click.wav");
    parents P;
    ui->tableView_afficherParents->setModel(P.afficher_parents());
    //P.afficher_parents()ui->tableView_afficherParents);
}

void MainWindow::on_pb_ajouter_parents_clicked()
{
    QSound::play(":\Click.wav");
    parents P;
    P.setmatricule_parents(ui->le_matricule_parents->text().toInt());
    P.setnom_parents(ui->le_nom_parents->text());
    P.setprenom_parents(ui->le_prenom_parents->text());
    P.setmail_parents(ui->le_mail_parents->text());
    P.setadresse_parents(ui->le_adresse_parents->text());
    P.setnumero_parents(ui->le_numero_parents->text().toInt());
    if(P.ajouter_parents())
    {
       QMessageBox::information(this,"Ajouter Parent","Ajout effectué.\n click cancel to exit");
    }
    else
        QMessageBox::warning(this,"Ajouter Parent","Ajout non effectué.\n click cancel to exit");

}

void MainWindow::on_pb_supprimer_parent_clicked()
{
    QSound::play(":\Click.wav");
    parents P; P.setmatricule_parents(ui->le_parent_supp->text().toInt());
    bool test=P.supprimer_parent(P.getmatricule_parents());
    if(test)
    {
       QMessageBox::information(this,"Supprimer Parent","Suppression effectué.\n click cancel to exit");

    }
    else
        QMessageBox::warning(this,"Supprimer Parent","Suppression non effectué.\n click cancel to exit");


}



void MainWindow::on_pb_modifier_parent_clicked()
{
    QSound::play(":\Click.wav");

    int row=ui->tableView_afficherParents->selectionModel()->currentIndex().row();
    QString matricule_parents_string=ui->tableView_afficherParents->model()->index(row,0).data().toString();
    QString nom_parents=ui->tableView_afficherParents->model()->index(row,1).data().toString();
    QString prenom_parents=ui->tableView_afficherParents->model()->index(row,2).data().toString();
    QString mail_parents=ui->tableView_afficherParents->model()->index(row,3).data().toString();
    QString adresse_parents=ui->tableView_afficherParents->model()->index(row,4).data().toString();
    QString numero_parents_string=ui->tableView_afficherParents->model()->index(row,5).data().toString();




    if(row==-1)
    {
        QMessageBox ::critical(nullptr,QObject::tr("modifier un service"),
                                          QObject::tr("aucune selection.\n"
                                              "click ok to exit"),QMessageBox::Ok);
    }
    else
    {
        ui->le_matricule_parent2->setText(matricule_parents_string);
        ui->le_nom_parent2->setText(nom_parents);
        ui->le_prenom_parent2->setText(prenom_parents);
        ui->le_mail_parent2->setText(mail_parents);
        ui->le_adresse_parent2->setText(adresse_parents);
        ui->le_numero_parent2->setText(numero_parents_string);

    }
}

void MainWindow::on_pb_validerModifP_clicked()
{
    QSound::play(":\Click.wav");
   // QString matricule_parents_string=ui->le_matricule_parent2->text();
    int matricule_parents=ui->le_matricule_parent2->text().toInt();
    QString nom_parents=ui->le_nom_parent2->text();
    QString prenom_parents=ui->le_prenom_parent2->text();
    QString mail_parents=ui->le_mail_parent2->text();
    QString adresse_parents=ui->le_adresse_parent2->text();
    //QString numero_parents_string=ui->le_numero_parent2->text();
    int numero_parents=ui->le_numero_parent2->text().toInt();
    parents P1(matricule_parents, nom_parents, prenom_parents, mail_parents, adresse_parents, numero_parents);
    bool test=P1.modifier_parent();
    if(test)
    {
        ui->tableView_afficherParents->setModel(P1.afficher_parents());
        QMessageBox::information(nullptr, QObject::tr("ok"),QObject::tr("Ajout effectué.\n click cancel to exit."),QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Not ok"),QObject::tr("Ajout non effectué.\n click cancel to exit."),QMessageBox::Cancel);
}


void MainWindow::on_pb_rechercheP_clicked()
{
    QSound::play(":\Click.wav");
    if(ui->le_rechercheP->text() == "")
        {
            ui->tableView_afficherParents->setModel(P.afficher_parents());
        }
    else
        {
             ui->tableView_afficherParents->setModel(P.rechercher_parents(ui->le_rechercheP->text()));
        }

}


void MainWindow::on_rb_triNomP_clicked()
{
    QSound::play(":\Click.wav");
    ui->tableView_afficherParents->setModel(P.trier_nomP());
}

void MainWindow::on_rb_triPrenomP_clicked()
{
    QSound::play(":\Click.wav");
    ui->tableView_afficherParents->setModel(P.trier_prenomP());
}

void MainWindow::on_rb_triNumeroP_clicked()
{
    QSound::play(":\Click.wav");
    ui->tableView_afficherParents->setModel(P.trier_numeroP());
}


void MainWindow::on_pd_exportPDFP_clicked()
{
    QSound::play(":\Click.wav");
    QPrinter printer;
     printer.setPrinterName("test");
     QPrintDialog dialog(&printer, this);
     if (dialog.exec() == QDialog::Rejected) return;
     ui->tableView_afficherParents->render(&printer);
}













//MACHINE

void MainWindow::on_pb_actualiser_machine_clicked()
{
    QSound::play(":\Click.wav");
    electromenager E;
    ui->tableView_afficherMachine->setModel(E.afficher_machine());
    //E.afficher_machine()ui->tableView_afficherMachine);
}


void MainWindow::on_pb_ajouter_machine_clicked()
{
    QSound::play(":\Click.wav");
    electromenager E;
    E.setmatricule_machine(ui->le_matricule_machine->text().toInt());
    E.settype_machine(ui->le_type_machine->text());
    E.setetat_machine(ui->le_etat_machine->text().toInt());
    E.setemplacement_machine(ui->le_emplacement_machine->text());
    if(E.ajouter_machine())
    {
       QMessageBox::information(this,"Ajouter Machine","Ajout effectué.\n click cancel to exit");
    }
    else
        QMessageBox::warning(this,"Ajouter Machine","Ajout non effectué.\n click cancel to exit");
}


void MainWindow::on_pb_supprimer_machine_clicked()
{
    QSound::play(":\Click.wav");

        electromenager E; E.setmatricule_machine(ui->le_machine_supp->text().toInt());
        bool test=E.supprimer_machine(E.getmatricule_machine());
        if(test)
        {
           QMessageBox::information(this,"Supprimer Parent","Suppression effectué.\n click cancel to exit");

        }
        else
            QMessageBox::warning(this,"Supprimer Parent","Suppression non effectué.\n click cancel to exit");
}




void MainWindow::on_pb_modifier_machine_clicked()
{
    QSound::play(":\Click.wav");
    int row=ui->tableView_afficherMachine->selectionModel()->currentIndex().row();
    QString matricule_machine_string=ui->tableView_afficherMachine->model()->index(row,0).data().toString();
    QString type_machine=ui->tableView_afficherMachine->model()->index(row,1).data().toString();
    QString etat_machine_string=ui->tableView_afficherMachine->model()->index(row,2).data().toString();
    QString emplacement_machine=ui->tableView_afficherMachine->model()->index(row,3).data().toString();

    if(row==-1)
    {
        QMessageBox ::critical(nullptr,QObject::tr("modifier un service"),
                                          QObject::tr("aucune selection.\n"
                                              "click ok to exit"),QMessageBox::Ok);
    }
    else
    {
        ui->le_matricule_machine2->setText(matricule_machine_string);
        ui->le_type_machine2->setText(type_machine);
        ui->le_etat_machine2->setText(etat_machine_string);
        ui->le_emplacement_machine2->setText(emplacement_machine);



    }
}

void MainWindow::on_pb_valider_modifE_clicked()
{
    QSound::play(":\Click.wav");
    int matricule_machine=ui->le_matricule_machine2->text().toInt();
    QString type_machine=ui->le_type_machine2->text();
    int etat_machine=ui->le_etat_machine2->text().toInt();
    QString emplacement_machine=ui->le_emplacement_machine2->text();
    electromenager E1(matricule_machine, type_machine, etat_machine, emplacement_machine);
    bool test=E1.modifier_machine();
    if(test)
    {
        ui->tableView_afficherMachine->setModel(E1.afficher_machine());
        QMessageBox::information(nullptr, QObject::tr("ok"),QObject::tr("Ajout effectué.\n click cancel to exit."),QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Not ok"),QObject::tr("Ajout non effectué.\n click cancel to exit."),QMessageBox::Cancel);
}






void MainWindow::on_pb_imprimerM_clicked()
{

         QSound::play(":\Click.wav");
         QPrinter printer;
         printer.setPrinterName("test");
         QPrintDialog dialog(&printer, this);
         if (dialog.exec() == QDialog::Rejected) return;
         ui->tableView_afficherMachine->render(&printer);

}

void MainWindow::on_rb_etatM_clicked()
{
    QSound::play(":\Click.wav");
    ui->tableView_afficherMachine->setModel(E.trier_etatM());
}

void MainWindow::on_rb_emplacementM_clicked()
{
    QSound::play(":\Click.wav");
    ui->tableView_afficherMachine->setModel(E.trier_emplacementM());
}

void MainWindow::on_rb_typeM_clicked()
{
    QSound::play(":\Click.wav");
    ui->tableView_afficherMachine->setModel(E.trier_typeM());
}


void MainWindow::on_pb_rechercheM_clicked()
{
    QSound::play(":\Click.wav");
    if(ui->le_rechercheM->text() == "")
        {
            ui->tableView_afficherMachine->setModel(E.afficher_machine());
        }
    else
        {
             ui->tableView_afficherMachine->setModel(E.rechercher_machine(ui->le_rechercheM->text()));
        }
}

