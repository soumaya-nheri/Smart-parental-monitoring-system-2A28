#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cameras.h"
#include "site.h"
#include "ordinateur.h"
#include "chambre.h"
#include "statistique.h"



#include <QApplication>
#include <QDate>
#include <QString>
#include <QDateEdit>
#include <QDebug>
#include <QMessageBox>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QComboBox>
#include <QVBoxLayout>
#include <QLCDNumber>
#include <QSqlQuery>
#include <QDebug>
#include <QDateTime>
#include <QGraphicsOpacityEffect>
#include <QPropertyAnimation>
#include <QSqlRecord>
#include <QThread>
#include <QSqlRecord>
#include <QtWidgets/QMainWindow>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLineSeries>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>
#include <QStandardItemModel>
#include <QtCharts>
#include <QChartView>
#include <QPieSeries>
#include <QPieSlice>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{Cameras c;
    Site s;
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pb_ajouter_camera_clicked()
{
    bool idtest;
    QString msg("");
    bool valid=true;
    int IDalready = 0;
    int id = ui->id_camera->text().toInt(&idtest);
    QString modele= ui->modele_camera->text() ;
    QString etat= ui->etat_camera->text() ;
    QString emplacement= ui->emplacement_camera->text() ;
     if (!ui->id_camera->text().isEmpty() && idtest)
     {
    QSqlQuery * qry1 = new QSqlQuery ();
    qry1 -> prepare ("select ID from CAMERAS where ID =:id");
    qry1->bindValue(":id", id);
    qry1-> exec();
    IDalready = qry1->boundValue(0).toInt();
    if (qry1->next())
    {
        msg+=QString("*Identifiant existe déjà\n");
        valid=false;
    }
 }
    //controle de saisie

  if (ui->id_camera->text().isEmpty())
  {
      msg+=QString("*Identifiant requis\n");
      valid=false;
  }
  if ( ui->modele_camera->text().isEmpty())
  {
      msg+=QString("*Modele requis\n");
      valid=false;
  }
  if ( ui->etat_camera->text().isEmpty())
  {
      msg+=QString("*Etat est requis\n");
      valid=false;
  }
  if ( ui->emplacement_camera->text().isEmpty())
  {
      msg+=QString("*emplacement est requis\n");
      valid=false;
  }
  if (!ui->id_camera->text().isEmpty() && !idtest)
  {
      msg+=QString("*Identifiant doit etre un entier\n");
       valid=false;
  }


if (valid)
{
    Cameras c(id,modele,etat,emplacement);
    bool test=c.ajouter();
    if(test)
  {
  QMessageBox::information(nullptr, QObject::tr("Ajouter une camera"),
                    QObject::tr("camera ajouté.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

  }
    else
        QMessageBox::critical(nullptr, QObject::tr("Ajouter un camera"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}
else {

    QMessageBox::critical(nullptr, QObject::tr("Ajouter un camera"),
                msg, QMessageBox::Cancel);
}

}

void MainWindow::on_pb_modifier_camera_clicked()
{
    bool idtest;
    QString msg("");
    bool valid=true;

    int id = ui->id_camera_mod->text().toInt(&idtest);
    QString modele= ui->modele_camera_mod->text() ;
    QString etat= ui->etat_camera_mod->text() ;
    QString emplacement= ui->emplacement_camera_mod->text() ;






    //controle de saisie
  if (ui->id_camera_mod->text().isEmpty())
  {
      msg+=QString("*Identifiant requis\n");
      valid=false;
  }
  if ( ui->modele_camera_mod->text().isEmpty())
  {
      msg+=QString("*Modele requis\n");
      valid=false;
  }
  if ( ui->etat_camera_mod->text().isEmpty())
  {
      msg+=QString("*Etat est requis\n");
      valid=false;
  }
  if ( ui->emplacement_camera_mod->text().isEmpty())
  {
      msg+=QString("*Emplacement est requis\n");
      valid=false;
  }
  if (!ui->id_camera_mod->text().isEmpty() && !idtest)
  {
      msg+=QString("*Identifiant doit etre un entier\n");
       valid=false;
  }


if (valid)
{
    Cameras a(id,modele,etat,emplacement);
    bool test=a.modifier();
    if(test)
  {
  QMessageBox::information(nullptr, QObject::tr("Modifier un camera"),
                    QObject::tr("Camera modifié.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

  }
    else
        QMessageBox::critical(nullptr, QObject::tr("Modifier un camera"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}
else {

    QMessageBox::critical(nullptr, QObject::tr("Modifier un camera"),
                msg, QMessageBox::Cancel);
}

}

void MainWindow::on_pb_supprimer_camera_clicked()
{
    QString msg("");
    Cameras tmpcamera;
    bool idtest;
    bool valid=true;
    int id = ui->id_supprimer_cam->text().toInt(&idtest);




    if (ui->id_supprimer_cam->text().isEmpty())
    {
        msg+=QString("*Identifiant requis\n");
        valid=false;
    }

    if (!ui->id_supprimer_cam->text().isEmpty() && !idtest)
    {
        msg+=QString("*Identifiant doit etre un entier\n");
         valid=false;
    }

    if (valid){

        bool test=tmpcamera.supprimer(id);
        if(test)
        {
            QMessageBox::information(nullptr, QObject::tr("Supprimer un camera"),
                        QObject::tr("camera supprimé.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);

        }
        else
            QMessageBox::critical(nullptr, QObject::tr("Supprimer un camera"),
                        QObject::tr("Erreur !.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);

    }

    else {

        QMessageBox::critical(nullptr, QObject::tr("Supprimer un camera"),
                    msg, QMessageBox::Cancel);
    }

}

void MainWindow::on_pb_ajouter_site_clicked()
{
    bool idtest;
    QString msg("");
    bool valid=true;
    int IDalready = 0;

    int id = ui->le_id_site->text().toInt(&idtest);
    QString type= ui->le_type_site->text() ;
    QString nom=ui->le_nom_site->text();
    QString adresse=ui->le_adresse_site->text();
    int nb_visite=ui->le_nb_site->text().toInt();
    QString blockage=ui->le_blockage_site->text();
    QString date_dv=ui->le_date_site->text();
    int temps_dv=ui->le_temps_site->text().toInt();
    Site s(id,type,nom,adresse,nb_visite,blockage,date_dv,temps_dv);
     if (!ui->le_id_site->text().isEmpty() && idtest)
     {
    QSqlQuery * qry1 = new QSqlQuery ();
    qry1 -> prepare ("select ID from SITE where ID =:id");
    qry1->bindValue(":id", id);
    qry1-> exec();
    IDalready = qry1->boundValue(0).toInt();
    if (qry1->next())
    {
        msg+=QString("*Identifiant existe déjà\n");
        valid=false;
    }
 }
    //controle de saisie

  if (ui->le_id_site->text().isEmpty())
  {
      msg+=QString("*Identifiant requis\n");
      valid=false;
  }
  if ( ui->le_type_site->text().isEmpty())
  {
      msg+=QString("*Type requis\n");
      valid=false;
  }
  if ( ui->le_nom_site->text().isEmpty())
  {
      msg+=QString("*Nom est requis\n");
      valid=false;
  }
  if ( ui->le_adresse_site->text().isEmpty())
  {
      msg+=QString("*Adresse est requis\n");
      valid=false;
  }
  if ( ui->le_nb_site->text().isEmpty())
  {
      msg+=QString("*Nb visite est requis\n");
      valid=false;
  }
  if ( ui->le_blockage_site->text().isEmpty())
  {
      msg+=QString("*Blockage est requis\n");
      valid=false;
  }
  if ( ui->le_date_site->text().isEmpty())
  {
      msg+=QString("*Date est requis\n");
      valid=false;
  }
  if ( ui->le_temps_site->text().isEmpty())
  {
      msg+=QString("*Temps est requis\n");
      valid=false;
  }
  if (!ui->le_id_site->text().isEmpty() && !idtest)
  {
      msg+=QString("*Identifiant doit etre un entier\n");
       valid=false;
  }


if (valid)
{
    Site s(id,type,nom,adresse,nb_visite,blockage,date_dv,temps_dv);
    bool test=s.ajouter();
    if(test)
    bool test=s.ajouter();

    if(test)
  {
  QMessageBox::information(nullptr, QObject::tr("Ajouter une Site"),
                    QObject::tr("Site ajouté.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

  }
    else
        QMessageBox::critical(nullptr, QObject::tr("Ajouter un Site"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}
else {

    QMessageBox::critical(nullptr, QObject::tr("Ajouter un Site"),
                msg, QMessageBox::Cancel);
}

}

void MainWindow::on_pb_modifiersite_clicked()
{
    bool idtest;
    QString msg("");
    bool valid=true;

    int id = ui->id_modif_site->text().toInt(&idtest);
    QString type= ui->type_modif_site->text() ;
    QString nom=ui->nom_modif_site->text();
    QString adresse=ui->adresse_modif_site->text();
    int nb_visite=ui->nbvisite_modif_site->text().toInt();
    QString blockage=ui->blockage_modif_site->text();
    QString date_dv=ui->date_modif_site->text();
    int temps_dv=ui->temps_modif_site->text().toInt();
    Site s(id,type,nom,adresse,nb_visite,blockage,date_dv,temps_dv);





    //controle de saisie
    if (ui->id_modif_site->text().isEmpty())
    {
        msg+=QString("*Identifiant requis\n");
        valid=false;
    }
    if ( ui->type_modif_site->text().isEmpty())
    {
        msg+=QString("*Type requis\n");
        valid=false;
    }
    if ( ui->nom_modif_site->text().isEmpty())
    {
        msg+=QString("*Nom est requis\n");
        valid=false;
    }
    if ( ui->adresse_modif_site->text().isEmpty())
    {
        msg+=QString("*Adresse est requis\n");
        valid=false;
    }
    if ( ui->nbvisite_modif_site->text().isEmpty())
    {
        msg+=QString("*Nb visite est requis\n");
        valid=false;
    }
    if ( ui->blockage_modif_site->text().isEmpty())
    {
        msg+=QString("*Blockage est requis\n");
        valid=false;
    }
    if ( ui->date_modif_site->text().isEmpty())
    {
        msg+=QString("*Date est requis\n");
        valid=false;
    }
    if ( ui->temps_modif_site->text().isEmpty())
    {
        msg+=QString("*Temps est requis\n");
        valid=false;
    }
    if (!ui->id_modif_site->text().isEmpty() && !idtest)
    {
        msg+=QString("*Identifiant doit etre un entier\n");
         valid=false;
    }


if (valid)
{
    Site s(id,type,nom,adresse,nb_visite,blockage,date_dv,temps_dv);
    bool test=s.modifier();
    if(test)
  {
  QMessageBox::information(nullptr, QObject::tr("Modifier un site"),
                    QObject::tr("site modifié.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

  }
    else
        QMessageBox::critical(nullptr, QObject::tr("Modifier un site"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}
else {

    QMessageBox::critical(nullptr, QObject::tr("Modifier un site"),
                msg, QMessageBox::Cancel);
}}

void MainWindow::on_pb_supprimer_site_clicked()
{
    QString msg("");
    Site tmpsite;
    bool idtest;
    bool valid=true;
    int id = ui->leid_supp_site->text().toInt(&idtest);




    if (ui->leid_supp_site->text().isEmpty())
    {
        msg+=QString("*Identifiant requis\n");
        valid=false;
    }

    if (!ui->leid_supp_site->text().isEmpty() && !idtest)
    {
        msg+=QString("*Identifiant doit etre un entier\n");
         valid=false;
    }

    if (valid){

        bool test=tmpsite.supprimer(id);
        if(test)
        {
            QMessageBox::information(nullptr, QObject::tr("Supprimer un site"),
                        QObject::tr("Site supprimé.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);

        }
        else
            QMessageBox::critical(nullptr, QObject::tr("Supprimer un site"),
                        QObject::tr("Erreur !.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);

    }

    else {

        QMessageBox::critical(nullptr, QObject::tr("Supprimer un site"),
                    msg, QMessageBox::Cancel);
    }
}

void MainWindow::on_pb_ajouter_ordinateur_clicked()
{
    bool idtest;
    QString msg("");
    bool valid=true;
    int IDalready = 0;
    int Id = ui->le_id_ordi->text().toInt(&idtest);
    QString modele= ui->le_modele_ordi->text() ;
     if (!ui->le_id_ordi->text().isEmpty() && idtest)
     {
    QSqlQuery * qry1 = new QSqlQuery ();
    qry1 -> prepare ("select ID from ORDINATEUR where ID =:Id");
    qry1->bindValue(":ID", Id);
    qry1-> exec();
    IDalready = qry1->boundValue(0).toInt();
    if (qry1->next())
    {
        msg+=QString("*Identifiant existe déjà\n");
        valid=false;
    }
 }
    //controle de saisie

  if (ui->le_id_ordi->text().isEmpty())
  {
      msg+=QString("*Identifiant requis\n");
      valid=false;
  }
  if ( ui->le_modele_ordi->text().isEmpty())
  {
      msg+=QString("*Modele requis\n");
      valid=false;
  }
  if (!ui->le_id_ordi->text().isEmpty() && !idtest)
  {
      msg+=QString("*Identifiant doit etre un entier\n");
       valid=false;
  }


if (valid)
{
    Ordinateur o(Id,modele);
    bool test=o.ajouter();
    if(test)
  {
  QMessageBox::information(nullptr, QObject::tr("Ajouter une ordinateur"),
                    QObject::tr("Ordinateur ajouté.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

  }
    else
        QMessageBox::critical(nullptr, QObject::tr("Ajouter un ordinateur"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}
else {

    QMessageBox::critical(nullptr, QObject::tr("Ajouter un ordinateur"),
                msg, QMessageBox::Cancel);
}
}

void MainWindow::on_pb_modif_ordina_clicked()
{
    bool idtest;
    QString msg("");
    bool valid=true;

    int id = ui->le_id_modordina->text().toInt(&idtest);
    QString modele= ui->modele_modordina->text() ;

    //controle de saisie
  if (ui->le_id_modordina->text().isEmpty())
  {
      msg+=QString("*Identifiant requis\n");
      valid=false;
  }
  if ( ui->modele_modordina->text().isEmpty())
  {
      msg+=QString("*Modele requis\n");
      valid=false;
  }

  if (!ui->le_id_modordina->text().isEmpty() && !idtest)
  {
      msg+=QString("*Identifiant doit etre un entier\n");
       valid=false;
  }


if (valid)
{
    Ordinateur o(id,modele);
    bool test=o.modifier();
    if(test)
  {
  QMessageBox::information(nullptr, QObject::tr("Modifier un ordinateur"),
                    QObject::tr("Ordinateur modifié.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

  }
    else
        QMessageBox::critical(nullptr, QObject::tr("Modifier un ordinateur"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}
else {

    QMessageBox::critical(nullptr, QObject::tr("Modifier un ordinateur"),
                msg, QMessageBox::Cancel);
}
}

void MainWindow::on_pb_supprimer_ordina_clicked()
{
    QString msg("");
    Ordinateur tmpordinateur;
    bool idtest;
    bool valid=true;
    int id = ui->leid_supp_ordi->text().toInt(&idtest);




    if (ui->leid_supp_ordi->text().isEmpty())
    {
        msg+=QString("*Identifiant requis\n");
        valid=false;
    }

    if (!ui->leid_supp_ordi->text().isEmpty() && !idtest)
    {
        msg+=QString("*Identifiant doit etre un entier\n");
         valid=false;
    }

    if (valid){

        bool test=tmpordinateur.supprimer(id);
        if(test)
        {
            QMessageBox::information(nullptr, QObject::tr("Supprimer un Ordinateur"),
                        QObject::tr("Ordinateur supprimé.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);

        }
        else
            QMessageBox::critical(nullptr, QObject::tr("Supprimer un Ordinateur"),
                        QObject::tr("Erreur !.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);

    }

    else {

        QMessageBox::critical(nullptr, QObject::tr("Supprimer un Ordinateur"),
                    msg, QMessageBox::Cancel);
    }

}

void MainWindow::on_pb_ajouter_champ_clicked()
{
    bool idtest;
    QString msg("");
    bool valid=true;
    int IDalready = 0;
    int Id = ui->numero_cham->text().toInt(&idtest);
    QString description= ui->description_champ->text() ;
     if (!ui->numero_cham->text().isEmpty() && idtest)
     {
    QSqlQuery * qry1 = new QSqlQuery ();
    qry1 -> prepare ("select num from CHAMBRE where num =:Id");
    qry1->bindValue(":num", Id);
    qry1-> exec();
    IDalready = qry1->boundValue(0).toInt();
    if (qry1->next())
    {
        msg+=QString("*Numero existe déjà\n");
        valid=false;
    }
 }
    //controle de saisie

  if (ui->numero_cham->text().isEmpty())
  {
      msg+=QString("*Numéro requis\n");
      valid=false;
  }
  if ( ui->description_champ->text().isEmpty())
  {
      msg+=QString("*Description requis\n");
      valid=false;
  }
  if (!ui->numero_cham->text().isEmpty() && !idtest)
  {
      msg+=QString("*Numero doit etre un entier\n");
       valid=false;
  }


if (valid)
{
    Chambre ch(Id,description);
    bool test=ch.ajouter();
    if(test)
  {
  QMessageBox::information(nullptr, QObject::tr("Ajouter une chambre"),
                    QObject::tr("chambre ajouté.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

  }
    else
        QMessageBox::critical(nullptr, QObject::tr("Ajouter un chambre"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}
else {

    QMessageBox::critical(nullptr, QObject::tr("Ajouter un chambre"),
                msg, QMessageBox::Cancel);
}
}

void MainWindow::on_pb_modif_cham_clicked()
{
    bool idtest;
    QString msg("");
    bool valid=true;

    int num = ui->num_mod_cham->text().toInt(&idtest);
    QString description= ui->description_mod_champ->text() ;

    //controle de saisie
  if (ui->num_mod_cham->text().isEmpty())
  {
      msg+=QString("*Numéro requis\n");
      valid=false;
  }
  if ( ui->description_mod_champ->text().isEmpty())
  {
      msg+=QString("*Description requis\n");
      valid=false;
  }

  if (!ui->num_mod_cham->text().isEmpty() && !idtest)
  {
      msg+=QString("*Numero doit etre un entier\n");
       valid=false;
  }


if (valid)
{
    Chambre ch(num,description);
    bool test=ch.modifier();
    if(test)
  {
  QMessageBox::information(nullptr, QObject::tr("Modifier un chambre"),
                    QObject::tr("chambre modifié.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

  }
    else
        QMessageBox::critical(nullptr, QObject::tr("Modifier un chambre"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}
else {

    QMessageBox::critical(nullptr, QObject::tr("Modifier un chambre"),
                msg, QMessageBox::Cancel);
}
}

void MainWindow::on_pb_supprimer_champ_clicked()
{
    QString msg("");
    Chambre tmpchamp;
    bool idtest;
    bool valid=true;
    int id = ui->leid_supp_champ->text().toInt(&idtest);




    if (ui->leid_supp_champ->text().isEmpty())
    {
        msg+=QString("*Numero requis\n");
        valid=false;
    }

    if (!ui->leid_supp_champ->text().isEmpty() && !idtest)
    {
        msg+=QString("*Numero doit etre un entier\n");
         valid=false;
    }

    if (valid){

        bool test=tmpchamp.supprimer(id);
        if(test)
        {
            QMessageBox::information(nullptr, QObject::tr("Supprimer un chambre"),
                        QObject::tr("chambre supprimé.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);

        }
        else
            QMessageBox::critical(nullptr, QObject::tr("Supprimer un chambre"),
                        QObject::tr("Erreur !.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);

    }

    else {

        QMessageBox::critical(nullptr, QObject::tr("Supprimer un chambre"),
                    msg, QMessageBox::Cancel);
    }
}





void MainWindow::on_afficher_site_tab_tabBarClicked(int index)
{

    Site s;
    ui->tab_siteafficher->setModel(s.afficher());
}


void MainWindow::on_afficher_ordinateur_tab_tabBarClicked(int index)
{
    Ordinateur o;
    ui->tab_siteafficher_2->setModel(o.afficher());
}


void MainWindow::on_afficher_cameras_tab_tabBarClicked(int index)
{
    Cameras c;
    ui->affichage_cam->setModel(c.afficher());
}

void MainWindow::on_afficher_chambres_tab_tabBarClicked(int index)
{
    Chambre ch;
    ui->affichage_chambres->setModel(ch.afficher());
}



void MainWindow::on_cherchernom_clicked()
{Site tmpsite;
    QString nom = ui->nomrecher->text();
    ui->tab_affrecherche->setModel(tmpsite.recherche_nom(nom));
}

void MainWindow::on_cherchertype_clicked()
{
    Site tmpsite;
        QString type = ui->typerecher->text();
        ui->tab_affrecherche->setModel(tmpsite.recherche_type(type));
}

void MainWindow::on_chercheradresse_clicked()
{
    Site tmpsite;
        QString adresse = ui->adresserecher->text();
        ui->tab_affrecherche->setModel(tmpsite.recherche_adresse(adresse));
}

void MainWindow::on_trier_nb_clicked()
{
    Site tmpsite;
        ui->tab_affrecherche->setModel(tmpsite.trier_nbvisite());
}



void MainWindow::on_modele_re_clicked()
{
    Cameras c;
        QString modele = ui->rech_modele->text();
        ui->tab_affrecherche_3->setModel(c.recherche_modele(modele));
}

void MainWindow::on_etat_re_clicked()
{
    Cameras c;
        QString etat = ui->etat_rech->text();
        ui->tab_affrecherche_3->setModel(c.recherche_etat(etat));
}

void MainWindow::on_emplacement_re_clicked()
{
    Cameras c;
        QString emplacement = ui->emplacement_rech->text();
        ui->tab_affrecherche_3->setModel(c.recherche_emplacement(emplacement));
}

void MainWindow::on_trier_etat_clicked()
{
    Cameras c;
        ui->tab_affrecherche_3->setModel(c.trier_etat());
}





