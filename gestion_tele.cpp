#include "gestion_tele.h"
#include "ui_gestion_tele.h"
#include "television.h"
#include "thermometre.h"
#include <QMessageBox>
#include <QSqlQueryModel>
#include <QGroupBox>
#include <QSqlQuery>
Gestion_tele::Gestion_tele(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Gestion_tele)
{
    ui->setupUi(this);
}

Gestion_tele::~Gestion_tele()
{
    delete ui;
}



void Gestion_tele::on_Ajouter_clicked()
{
    QString matricule_tele = ui->lineEdit_matricule_tele->text();
       QString modele = ui->lineEdit_modele_tele->text();
       QString emplacement = ui->comboBox_emplacement_tele->currentText();
       QString etat = ui->comboBox_Etat->currentText();
       QTime verouillage = ui->timeEdit_verouillage->time();
       Television T(matricule_tele, modele, emplacement, etat, verouillage);
       bool test = T.Ajouter_television();

       QMessageBox msgBox;

       if(test){
           msgBox.setText("Ajout réussi");
           ui-> tableView_2 -> setModel(T.Afficher_television() );

       }
       else
           msgBox.setText("Echec ");
       msgBox.exec();
}

void Gestion_tele::on_pushButton_4_clicked()
{
    QString matricule_tele = ui->lineEdit_2->text();
            QString modele= ui->lineEdit_Model->text();
            QString emplacement=ui->comboBox_emplacement->currentText();
            QString etat=ui->comboBox_etat->currentText();
            QTime verouillage =ui->timeEdit->time();
         Television T(matricule_tele,modele,emplacement,etat,verouillage);
            bool test=T.modifier(matricule_tele,modele,emplacement,etat,verouillage);
            QMessageBox msgBox;
                if(test)
                   {
                 ui->tableView_2->setModel(T.Afficher_television());
                QMessageBox::information(this, tr("Done"),
                                         QString(tr("success"))
                                         );
                }
                else
                    QMessageBox::information(this, tr("Done"),
                                                          QString(tr("echec"))
                                                          );                msgBox.exec();

}

void Gestion_tele::on_pushButton_6_clicked()
{
    Television T3; T3.setMatricule(ui->lineEdit_4->text());
           bool test=T3.Supprimer_television(T3.getMatricule());
           QMessageBox msgBox;

           if(test)
              { msgBox.setText("Suppression avec succes.");
           ui-> tableView_2->setModel(T3.Afficher_television());

           }
           else
               msgBox.setText("Echec de suppression");
               msgBox.exec();
}


void Gestion_tele::on_pushButton_2_clicked()
{
    int choix ;
           choix=ui->comboBox_5->currentIndex();
           QSqlQueryModel * model =new QSqlQueryModel();

         if(ui->radioButton->isChecked())
         model = T.trierup(choix);

        else if(ui->radioButton_2->isChecked())
           model=T.trier_down(choix);

         else
             model=T.Afficher_television();

          ui->tableView_2->setModel(model);
}
/*
Gestion Thermotre
*/

void Gestion_tele::on_pushButton_7_clicked()
{
    QString matricule_thermo = ui->lineEdit_MT->text();

    QString emplacement = ui->comboBox_EmT->currentText();
    QString etat = ui->comboBox_EtT->currentText();
       int temperature = ui->lineEdit_3->text().toInt();
       Thermometre Th(matricule_thermo,  emplacement, etat, temperature);
       bool test = Th.Ajouter_thermometre();

       QMessageBox msgBox;

       if(test){
           msgBox.setText("Ajout réussi");
           ui-> tableView_T -> setModel(Th.Afficher_thermometre() );

       }
       else
           msgBox.setText("Echec ");
       msgBox.exec();

}

void Gestion_tele::on_pushButton_Modifier_clicked()
{
    QString matricule_thermo = ui->lineEdit_ModM->text();

            QString emplacement=ui->comboBox_Mod_EmpT->currentText();
            QString etat=ui->comboBox_Mod_EtaT->currentText();
            int temperature =ui->lineEdit_4->text().toInt();
         Thermometre Th(matricule_thermo,emplacement,etat,temperature);
            bool test=Th.modifier(matricule_thermo,emplacement,etat,temperature);
            QMessageBox msgBox;
                if(test)
                   {
                 ui->tableView_T->setModel(Th.Afficher_thermometre());
                QMessageBox::information(this, tr("Done"),
                                         QString(tr("success"))
                                         );
                }
                else
                    QMessageBox::information(this, tr("Done"),
                                                          QString(tr("echec"))
                                                          );                msgBox.exec();


                /*QString idp=ui->tableView_2->model()->data(index).toString();
                          QSqlQuery query;
                          query.prepare("select * from passeportdoc where idc LIKE '"+idp+"%' or nomp LIKE '"+idp+"%' or prenomp LIKE '"+idp+"%' or datep LIKE '"+idp+"%' or adressep LIKE '"+idp+"%' or metierp LIKE '"+idp+"%'");
                          if(query.exec())
                          {
                            while(query.next())
                            {
                                ui->idcin->setText(query.value(0).toString());
                                ui->line1->setText(query.value(1).toString());
                                ui->prenomcin->setText(query.value(2).toString());
                                //ui->datecin->setText(query.value(3).toString());
                                 ui->adressecin->setText(query.value(3).toString());
                                 ui->metiercin->setText(query.value(4).toString());
                                 ui->sexec->setText(query.value(5).toString());

                            }
                          }
                            else
                            {

                                //QMessageBox::critical(this,tr("error::"),query.lastError().text());
                              QMessageBox::critical(nullptr, QObject::tr("error"),
                                          QObject::tr("error.\n""click cancel to exit."), QMessageBox::Cancel);
                          }

                          */
}



void Gestion_tele::on_pushButton_12_clicked()
{

    int choix ;
           choix=ui->comboBox_14->currentIndex();
           QSqlQueryModel * model =new QSqlQueryModel();

         if(ui->radioButton->isChecked())
         model = Th.trierup(choix);

        else if(ui->radioButton_2->isChecked())
           model=Th.trier_down(choix);

         else
             model=Th.Afficher_thermometre();

          ui->tableView_T->setModel(model);
}

void Gestion_tele::on_pushButton_Supprimer_clicked()
{
    Thermometre Th; Th.setMatricule(ui->lineEdit_10->text());
           bool test=Th.Supprimer_thermometre(Th.getMatricule());
           QMessageBox msgBox;

           if(test)
              { msgBox.setText("Suppression avec succes.");
           ui-> tableView_2->setModel(Th.Afficher_thermometre());

           }
           else
               msgBox.setText("Echec de suppression");
               msgBox.exec();
}
