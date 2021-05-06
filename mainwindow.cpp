#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "parents.h"
#include "electromenager.h"
#include "enfants.h"
#include "activite.h"
#include "site.h"
#include "smtp.h"
#include "ordinateur.h"
#include "cameras.h"
#include "television.h"
#include "thermometre.h"
#include "chambre.h"
#include "exportexcelobject.h"
#include <QPrintDialog>
#include <QPrinter>
#include <QIntValidator>
#include <QMessageBox>
#include <QTabWidget>
#include <QTableView>
#include <QMediaPlayer>
#include <QPixmap>
#include <QWidget>
#include <QStackedWidget>
#include <QLineEdit>
#include <QLabel>
#include <QSound>
#include <QMediaPlayer>
#include "QCompleter"
#include <QCompleter>
#include <QComboBox>
#include <QTextDocument>
#include <QByteArray>

#include <QDateTime>

#include <QCamera>
#include <QCameraViewfinder>
#include <QCameraImageCapture>
#include <QVBoxLayout>
#include <QMenu>
#include <QAction>
#include <QFileDialog>
#include <QWidget>




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    cam = new QCamera(this);//
    camview = new QCameraViewfinder(this);//
    imgcam = new QCameraImageCapture(cam,this);
    cam->setViewfinder(camview);
    camlayout = new QVBoxLayout;
    camlayout->addWidget(camview);
    ui->CamWidget->setLayout(camlayout);

    timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(myfunction()));
    timer->start(1000);



    player = new QMediaPlayer(this);
            player->setVolume(50);
            player->setMedia(QUrl::fromLocalFile("C:/Users/HOUSSEM/Downloads/basededonne/got.mp3"));
            player->play();
            sound_on=true;



            mCamera =new QCamera(this);
            mCameraViewfinder =new QCameraViewfinder(this);
            mCameraImageCapture = new QCameraImageCapture(mCamera,this);
            mLayout =new QVBoxLayout;
            mOpcionesMenu =new QMenu("Opciones", this);
            mEncenderAction =new QAction("Encender",this);
            mApagarAction =new QAction ("Apagar",this);
            mCapturarAction= new QAction ("capturar",this);
            mOpcionesMenu->addActions({mEncenderAction,mApagarAction,mCapturarAction});
            ui->opcionesPushButton->setMenu(mOpcionesMenu);

            mCamera->setViewfinder(mCameraViewfinder);
            mLayout->addWidget(mCameraViewfinder);
            mLayout->setMargin(0);
            ui->scrollArea->setLayout(mLayout);


            connect(mEncenderAction, &QAction::triggered, [&]()
            {
                mCamera->start();
            });


            connect(mApagarAction, &QAction::triggered,[&] ()
            {mCamera->stop();
            }
            );

            connect(mCapturarAction, &QAction::triggered,[&]()

            {  auto filname=QFileDialog::getSaveFileName(this,"Capturar","/","Image (*.jpg;*.jpeg)");

                if(filname.isEmpty())
                {
                   return;
                }
                mCameraImageCapture->setCaptureDestination(QCameraImageCapture::CaptureToFile );
                QImageEncoderSettings imageEncoderSettings;
                imageEncoderSettings.setCodec("image/jpeg");
                imageEncoderSettings.setResolution(1600,1200);
                mCameraImageCapture->setEncodingSettings(imageEncoderSettings);
                mCamera->setCaptureMode(QCamera::CaptureStillImage);
                mCamera->start();
                mCamera->searchAndLock();
                mCameraImageCapture->capture();
                mCamera->unlock();
            });






    ui->le_matricule_parents->setValidator( new QIntValidator(0, 9999, this));
        ui->le_matricule_parents_2->setValidator( new QIntValidator(0, 9999, this));
        ui->le_nom_parents->setValidator(new QRegExpValidator( QRegExp("^[a-z]([-']?[a-z]+)*( [a-z]([-']?[a-z]+)*)+$"), this ));
        ui->le_nom_parents_2->setValidator(new QRegExpValidator( QRegExp("^[a-z]([-']?[a-z]+)*( [a-z]([-']?[a-z]+)*)+$"), this ));
        ui->le_prenom_parents->setValidator(new QRegExpValidator( QRegExp("^[a-z]([-']?[a-z]+)*( [a-z]([-']?[a-z]+)*)+$"), this ));
        ui->le_prenom_parents_2->setValidator(new QRegExpValidator( QRegExp("^[a-z]([-']?[a-z]+)*( [a-z]([-']?[a-z]+)*)+$"), this ));
        //ui->le_mail_parents->setValidator(new QRegExpValidator( QRegExp("^[a-zA-Z]+$"), this ));
       // ui->le_mail_parents_2->setValidator(new QRegExpValidator( QRegExp("^[a-zA-Z]+$"), this ));
        ui->le_adresse_parents->setValidator(new QRegExpValidator( QRegExp("^[a-z]([-']?[a-z]+)*( [a-z]([-']?[a-z]+)*)+$"), this ));
        ui->le_adresse_parents_2->setValidator(new QRegExpValidator( QRegExp("^[a-z]([-']?[a-z]+)*( [a-z]([-']?[a-z]+)*)+$"), this ));
        ui->le_numero_parents->setValidator( new QIntValidator(0, 99999999, this));
        ui->le_numero_parents_2->setValidator( new QIntValidator(0, 99999999, this));
        ui->le_matricule_machine->setValidator( new QIntValidator(0, 9999, this));
        ui->le_matricule_machine_2->setValidator( new QIntValidator(0, 9999, this));
        ui->le_type_machine->setValidator(new QRegExpValidator( QRegExp("^[a-z]([-']?[a-z]+)*( [a-z]([-']?[a-z]+)*)+$"), this ));
        ui->le_type_machine_2->setValidator(new QRegExpValidator( QRegExp("^[a-z]([-']?[a-z]+)*( [a-z]([-']?[a-z]+)*)+$"), this ));
        ui->le_etat_machine->setValidator( new QIntValidator(0, 2, this));
        ui->le_etat_machine_2->setValidator( new QIntValidator(0, 2, this));
        ui->le_emplacement_machine->setValidator(new QRegExpValidator( QRegExp("^[a-z]([-']?[a-z]+)*( [a-z]([-']?[a-z]+)*)+$"), this ));
        ui->le_emplacement_machine_2->setValidator(new QRegExpValidator( QRegExp("^[a-z]([-']?[a-z]+)*( [a-z]([-']?[a-z]+)*)+$"), this ));


    ui->tableView_afficherParents->setModel(P.afficher_parents());
    ui->tableView_afficherMachine->setModel(E.afficher_machine());


        //QcompleterElectromenager
        QCompleter *completerM = new QCompleter();
        completerM->setModel(E.rechercher_machine(ui->le_rechercheM->text()));
        ui->le_rechercheM->setCompleter(completerM);

        ui->textBrowser_activite->show();
        activite a;
        a.afficher_activite(ui->tableWidget_activite);
        enfants en;
        en.afficher_enfant(ui->tableWidget_enfant);
        QSqlQuery qry;
        qry.exec("select MATRICULE_PARENTS,NOM_PARENTS from parents");
        while(qry.next()){
        ui->comboBox_parent->addItem(qry.value(0).toString()+"-"+qry.value(1).toString());
        }

        qry.exec("select ID_ENFANT,NOM_ENFANT from enfants");
        while(qry.next()){
        ui->comboBox_enfantId->addItem(qry.value(0).toString()+"-"+qry.value(1).toString());
        }

        //ui->comboBox_parentId->;

        ui->lineEdit_ageenfant->setValidator(new QIntValidator);
        ui->lineEdit_parent->setValidator(new QIntValidator);
        ui->lineEdit_nomenfant->setValidator(new QRegExpValidator( QRegExp("^[a-zA-Z]+$"), this ));
        ui->lineEdit_prenomenfant->setValidator(new QRegExpValidator( QRegExp("^[a-zA-Z]+$"), this ));
        ui->lineEdit_nomAct->setValidator(new QRegExpValidator( QRegExp("^[a-zA-Z]+$"), this ));
ui->stackedWidget->setCurrentIndex(3);

//Qcompleter Activite
QStringList wordList;
qry.exec("SELECT NOM_ACTIVITE, DESCRIPTION, RDV FROM ACTIVITE");
while(qry.next()){
wordList.push_back(qry.value(0).toString());
wordList.push_back(qry.value(1).toString());
wordList.push_back(qry.value(2).toString());
}
qDebug()<<wordList;
QCompleter *completer = new QCompleter(wordList, this);
completer->setCaseSensitivity(Qt::CaseInsensitive);
ui->lineEdit_rechercheAct->setCompleter(completer);

QStringList wordList2;
qry.exec("SELECT NOM_ENFANT, PRENOM_ENFANT, AGE_ENFANT FROM ENFANTS");
while(qry.next()){
wordList2.push_back(qry.value(0).toString());
wordList2.push_back(qry.value(1).toString());
wordList2.push_back(qry.value(2).toString());
}
qDebug()<<wordList2;
QCompleter *completer2 = new QCompleter(wordList2, this);
completer2->setCaseSensitivity(Qt::CaseInsensitive);
ui->lineEdit_rechercheEnfnat->setCompleter(completer2);



 ui->lcdNumber->display("-------");





   }

MainWindow::~MainWindow()
{
    delete ui;
}

//PARENTS
void MainWindow::on_pb_actualiser_parents_clicked()
{
    QSound::play("Click.wav");
    parents P;
    ui->tableView_afficherParents->setModel(P.afficher_parents());
}

void MainWindow::on_pb_modifier_parents_clicked()
{
    QSound::play("Click.wav");
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
                ui->le_matricule_parents_2->setText(matricule_parents_string);
                ui->le_nom_parents_2->setText(nom_parents);
                ui->le_prenom_parents_2->setText(prenom_parents);
                ui->le_mail_parents_2->setText(mail_parents);
                ui->le_adresse_parents_2->setText(adresse_parents);
                ui->le_numero_parents_2->setText(numero_parents_string);

            }
}

void MainWindow::on_pb_ajouter_parents_clicked()
{
    QSound::play("Click.wav");
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
               ui->comboBox_parent->clear();
               QSqlQuery qry;
               qry.exec("select MATRICULE_PARENTS,NOM_PARENTS from parents");
               while(qry.next()){
               ui->comboBox_parent->addItem(qry.value(0).toString()+"-"+qry.value(1).toString());
               }
            }
            else
                QMessageBox::warning(this,"Ajouter Parent","Ajout non effectué.\n click cancel to exit");
}

void MainWindow::on_pb_supprimer_parents_clicked()
{
    QSound::play("Click.wav");
    parents P; P.setmatricule_parents(ui->le_parent_supp->text().toInt());
            bool test=P.supprimer_parent(P.getmatricule_parents());
            if(test)
            {
               QMessageBox::information(this,"Supprimer Parent","Suppression effectué.\n click cancel to exit");

            }
            else
                QMessageBox::warning(this,"Supprimer Parent","Suppression non effectué.\n click cancel to exit");
}

void MainWindow::on_pb_rechercherP_clicked()
{
    if(ui->le_rechercheP->text() == "")
                {
                    ui->tableView_afficherParents->setModel(P.afficher_parents());
                }
            else
                {
                     ui->tableView_afficherParents->setModel(P.rechercher_parents(ui->le_rechercheP->text()));
                }

}

void MainWindow::on_pb_validerModifP_clicked()
{
    QSound::play("Click.wav");
    int matricule_parents=ui->le_matricule_parents_2->text().toInt();
            QString nom_parents=ui->le_nom_parents_2->text();
            QString prenom_parents=ui->le_prenom_parents_2->text();
            QString mail_parents=ui->le_mail_parents_2->text();
            QString adresse_parents=ui->le_adresse_parents_2->text();
            //QString numero_parents_string=ui->le_numero_parent2->text();
            int numero_parents=ui->le_numero_parents_2->text().toInt();
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


void MainWindow::on_rb_triNom_parent_clicked()
{
    QSound::play("Click.wav");
    ui->tableView_afficherParents->setModel(P.trier_nomP());
}

void MainWindow::on_rb_triPrenom_parent_clicked()
{
    QSound::play("Click.wav");
    ui->tableView_afficherParents->setModel(P.trier_prenomP());
}

void MainWindow::on_rb_triNum_parent_clicked()
{
    QSound::play("Click.wav");
    ui->tableView_afficherParents->setModel(P.trier_numeroP());
}

void MainWindow::on_pb_exportPDF_P_clicked()
{
    QSound::play("Click.wav");
    QPrinter printer;
             printer.setPrinterName("test");
             QPrintDialog dialog(&printer, this);
             if (dialog.exec() == QDialog::Rejected) return;
             ui->tableView_afficherParents->render(&printer);
}



//ELECTROMENAGER

void MainWindow::on_pb_actualiser_machine_clicked()
{
    QSound::play("Click.wav");
        ui->tableView_afficherMachine->setModel(E.afficher_machine());
}

void MainWindow::on_pb_ajouter_machine_clicked()
{
    QSound::play("Click.wav");
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

void MainWindow::on_pb_modifier_machine_clicked()
{
    QSound::play("Click.wav");
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
                ui->le_matricule_machine_2->setText(matricule_machine_string);
                ui->le_type_machine_2->setText(type_machine);
                ui->le_etat_machine_2->setText(etat_machine_string);
                ui->le_emplacement_machine_2->setText(emplacement_machine);
            }
}

/*void MainWindow::on_pb_rechercheM_clicked()
{
    if(ui->le_rechercheM->text() == "")
                {
                    ui->tableView_afficherMachine->setModel(E.afficher_machine());
                }
            else
                {
                     ui->tableView_afficherMachine->setModel(E.rechercher_machine(ui->le_rechercheM->text()));
                }
}*/

void MainWindow::on_le_rechercheM_textChanged(const QString &arg1)
{
    QSound::play("Click.wav");
    if(ui->le_rechercheM->text() == "")
                {
                    ui->tableView_afficherMachine->setModel(E.afficher_machine());
                }
            else
                {
                     ui->tableView_afficherMachine->setModel(E.rechercher_machine(ui->le_rechercheM->text()));
                }

}


void MainWindow::on_pb_valider_modifM_clicked()
{
    QSound::play("Click.wav");
    int matricule_machine=ui->le_matricule_machine_2->text().toInt();
            QString type_machine=ui->le_type_machine_2->text();
            int etat_machine=ui->le_etat_machine_2->text().toInt();
            QString emplacement_machine=ui->le_emplacement_machine_2->text();
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

void MainWindow::on_pb_exportPDF_M_clicked()
{
    QSound::play("Click.wav");
    QPrinter printer;
             printer.setPrinterName("test");
             QPrintDialog dialog(&printer, this);
             if (dialog.exec() == QDialog::Rejected) return;
             ui->tableView_afficherMachine->render(&printer);
}

void MainWindow::on_rb_triTypeM_clicked()
{
    QSound::play("Click.wav");
    ui->tableView_afficherMachine->setModel(E.trier_typeM());
}

void MainWindow::on_rb_triEtatM_clicked()
{
    QSound::play("Click.wav");
    ui->tableView_afficherMachine->setModel(E.trier_etatM());
}

void MainWindow::on_rb_triEmplacementM_clicked()
{
    QSound::play("Click.wav");
    ui->tableView_afficherMachine->setModel(E.trier_emplacementM());
}

void MainWindow::on_pb_supprimer_machine_clicked()
{
    QSound::play("Click.wav");
    electromenager E; E.setmatricule_machine(ui->le_machine_supp->text().toInt());
                bool test=E.supprimer_machine(E.getmatricule_machine());
                if(test)
                {
                   QMessageBox::information(this,"Supprimer Parent","Suppression effectué.\n click cancel to exit");

                }
                else
                    QMessageBox::warning(this,"Supprimer Parent","Suppression non effectué.\n click cancel to exit");
}

void MainWindow::on_pb_exportExcel_machine_clicked()
{
    QSound::play("Click.wav");
    QString fileName = QFileDialog::getSaveFileName(this, tr("Excel file"), qApp->applicationDirPath (),
                                                            tr("Excel Files (*.xls)"));
            if (fileName.isEmpty())
                return;

            ExportExcelObject obj(fileName, "mydata", ui->tableView_afficherMachine);

            //colums to export
            obj.addField(0, "MATRICULE_MACHINE", "char(20)");
            obj.addField(1, "TYPE_MACHINE", "char(20)");
            obj.addField(2, "ETAT_MACHINE", "char(20)");
            obj.addField(3, "EMPLACEMENT_MACHINE", "char(20)");




            int retVal = obj.export2Excel();
            if( retVal > 0)
            {
                QMessageBox::information(this, tr("Done"),
                                         QString(tr("%1 records exported!")).arg(retVal)
                                         );
            }
}

//ENFANTS
void MainWindow::on_pb_ajouterEnfant_clicked()
{
    QSound::play("Click.wav");
    enfants en;
        QString nom_enf=ui->lineEdit_nomenfant->text();
        QString prenom_enf=ui->lineEdit_prenomenfant->text();
        QString age_enf=ui->lineEdit_ageenfant->text();
        //QString parent_enf=ui->lineEdit_parent->text();
        en.setNom_enfant(ui->lineEdit_nomenfant->text());
        en.setPrenom_enfant(ui->lineEdit_prenomenfant->text());
        en.setAge_enfant(ui->lineEdit_ageenfant->text().toInt());
        en.setMatricule_parent(ui->comboBox_parent->currentText().midRef(0,ui->comboBox_parent->currentText().indexOf("-")).toInt());
        //en.setMatricule_parent(ui->comboBox_parentId->currentText().midRef(0,ui->comboBox_parentId->currentText().indexOf("-")).toInt());
        qDebug()<<en.getNom_enfant();
        if(!nom_enf.isEmpty() && !prenom_enf.isEmpty() && !age_enf.isEmpty())
        {
        if(en.ajouter_enfant())
        {
           QMessageBox::information(this,"Ajouter Enfants","Vous avez bien enregistre l'enfant ");
           QSqlQuery qry;
           qry.exec("select ID_ENFANT,NOM_ENFANT from enfants");
           ui->comboBox_enfantId->clear();
           while(qry.next()){
           ui->comboBox_enfantId->addItem(qry.value(0).toString()+"-"+qry.value(1).toString());
           }
           ui->lineEdit_rechercheAct->clear();
           QStringList wordList2;
           qry.exec("SELECT NOM_ENFANT, PRENOM_ENFANT, AGE_ENFANT FROM ENFANTS");
           while(qry.next()){
           wordList2.push_back(qry.value(0).toString());
           wordList2.push_back(qry.value(1).toString());
           wordList2.push_back(qry.value(2).toString());
           }
           qDebug()<<wordList2;
           QCompleter *completer2 = new QCompleter(wordList2, this);
           completer2->setCaseSensitivity(Qt::CaseInsensitive);
           ui->lineEdit_rechercheEnfnat->setCompleter(completer2);
        }
        else
            QMessageBox::warning(this,"Ajouter Enfants","Vous n'avez pas enregistre l'enfant");
        }
        else
            QMessageBox::warning(this,"Ajouter Enfants","Verifier votre champ");
}

void MainWindow::on_pushButton_actualiserEnfant_clicked()
{
    QSound::play("Click.wav");
    enfants en;
        en.afficher_enfant(ui->tableWidget_enfant);
}

void MainWindow::on_pushButton_suppEnfant_clicked()
{
    QSound::play("Click.wav");
    enfants en;
    if(str_delenf){
        en.supprimer_enfant(ui->tableWidget_enfant,tem_enfant);
        QMessageBox::information(this,"supprimer","vous avez bien supprimer une partie de tableau");
        ui->tableWidget_enfant->clear();
        en.afficher_enfant(ui->tableWidget_enfant);str_delenf=false;
    }
    else
    {
        QMessageBox::warning(this,"supprimer","invalid champ");
        str_delenf=false;
    }
}

void MainWindow::on_pushButton_modifEnfant_clicked()
{
    QSound::play("Click.wav");
    enfants en;
            if(str_enf)
            {
        en.modifier_enfant(ui->tableWidget_enfant,tem_enfant);
        QMessageBox::information(this,"Modifier","vous avez bien modifier une partie de tableau");
        ui->tableWidget_enfant->clear();
        en.afficher_enfant(ui->tableWidget_enfant);
        str_enf=false;
    }
            else
            {QMessageBox::information(this,"Modifier","Invalid champ");str_enf=false;
            }
}

void MainWindow::on_pushButton_exporterEnfant_clicked()
{
    QSound::play("Click.wav");
    QPrinter printer;
                 printer.setPrinterName("test");
                 QPrintDialog dialog(&printer, this);
                 if (dialog.exec() == QDialog::Rejected) return;
                 ui->tableWidget_enfant->render(&printer);
}

void MainWindow::on_pushButton_triAgeEnfant_clicked()
{
    QSound::play("Click.wav");
    enfants en;
        en.trier_enfant(ui->tableWidget_enfant);
}

//ACTIVITE

void MainWindow::on_pb_ajouter_activite_clicked()
{
    QSound::play("Click.wav");
    activite a;
        QString nom_act =ui->lineEdit_nomAct->text();
        QString desc =ui->lineEdit_descAct->text();
        int dureeDhour =ui->timeEdit_dureeD_act->text().midRef(0,ui->timeEdit_dureeD_act->text().indexOf(":")).toInt();
        int dureeDmin =ui->timeEdit_dureeD_act->text().midRef(ui->timeEdit_dureeD_act->text().indexOf(":"),ui->timeEdit_dureeD_act->text().length()).toInt();
        int dureeAhour =ui->timeEdit_dureeF_act->text().midRef(0,ui->timeEdit_dureeF_act->text().indexOf(":")).toInt();
        int dureeAmin =ui->timeEdit_dureeF_act->text().midRef(ui->timeEdit_dureeF_act->text().indexOf(":"),ui->timeEdit_dureeF_act->text().length()).toInt();
        QString rdv =ui->textEdit_rdv->toPlainText();
        a.setNom_activite(ui->lineEdit_nomAct->text());
        a.setDescription(ui->lineEdit_descAct->text());
        a.setDuree(ui->timeEdit_dureeD_act->text()+"-"+ui->timeEdit_dureeF_act->text());
        a.setTemps(ui->timeEdit_tempsAct->text());
        a.setDatee(ui->dateEdit_dateeAct->date().toString("dd-MM-yyyy"));
        a.setRdv(ui->textEdit_rdv->toPlainText());
       // qDebug()<<ui->comboBox_enfant->currentText().midRef(0,ui->comboBox_enfant->currentText().indexOf("-")).toInt();
        a.setId_enfant(ui->comboBox_enfantId->currentText().midRef(0,ui->comboBox_enfantId->currentText().indexOf("-")).toInt());
        if(!nom_act.isEmpty() && !desc.isEmpty() && !rdv.isEmpty()) {
          if(dureeDhour<=dureeAhour && dureeDmin<=dureeAmin) {
       if(a.ajouter_activite())
        {
           ui->lineEdit_rechercheAct->clear();
           QSqlQuery qry;           QStringList wordList;
           qry.exec("SELECT NOM_ACTIVITE, DESCRIPTION, RDV FROM ACTIVITE");
           while(qry.next()){
           wordList.push_back(qry.value(0).toString());
           wordList.push_back(qry.value(1).toString());
           wordList.push_back(qry.value(2).toString());
           }
           qDebug()<<wordList;
           QCompleter *completer = new QCompleter(wordList, this);
           completer->setCaseSensitivity(Qt::CaseInsensitive);
           ui->lineEdit_rechercheAct->setCompleter(completer);

           QMessageBox::information(this,"Ajouter Activite","Vous avez bien enregistrer l'Activite ");
        }
        else
            QMessageBox::warning(this,"Ajouter Activite","Vous ne pas enregistrer l'Activite");
        }
          else
             QMessageBox::warning(this,"Ajouter Activite","Duree D doit etre inferieur a Duree A");
    }
        else
             QMessageBox::warning(this,"Ajouter Activite","Verifier votre champ");
}





void MainWindow::on_pushButton_ModifAct_clicked()
{
    QSound::play("Click.wav");
            activite a;

                    if(str)
                    {
                        qDebug()<<"test2";
                a.modifier_activite(ui->tableWidget_activite,tem_activite);
                QMessageBox::information(this,"Modifier","vous avez bien modifier une partie de tableau");
                ui->tableWidget_activite->clear();
                a.afficher_activite(ui->tableWidget_activite);
                str=false;
            }
                    else
                    {
                        qDebug()<<"test3";QMessageBox::information(this,"Modifier","Invalid champ");
                        str=false;
                    }


}

void MainWindow::on_pushButton_suppAct_clicked()
{
    QSound::play("Click.wav");
    activite a;
        if(str_delete){
        a.supprimer_activite(ui->tableWidget_activite,tem_activite);
        QMessageBox::information(this,"supprimer","vous avez bien supprimer une partie de tableau");
        ui->tableWidget_activite->clear();
        a.afficher_activite(ui->tableWidget_activite);
        str_delete=false;
        }
        else
        {
            QMessageBox::warning(this,"supprimer","invalid champ");
            str_delete=false;
        }
}

void MainWindow::on_pushButton_exportAct_clicked()
{
    QSound::play("Click.wav");
    activite a;
        a.exporterpdf_activite(ui->textBrowser_activite);
}

void MainWindow::on_pushButton_ExportExcelAct_clicked()
{
    QSound::play("Click.wav");
    QString fileName = QFileDialog::getSaveFileName(this, tr("Excel file"), qApp->applicationDirPath (),
                                                            tr("Excel Files (*.xls)"));
            if (fileName.isEmpty())
                return;

            ExportExcelObject obj(fileName, "mydata", ui->tableWidget_activite);

            //colums to export
            obj.addField(0, "ID", "char(20)");
            obj.addField(1, "nom_activite", "char(20)");
            obj.addField(2, "decription", "char(20)");
            obj.addField(3, "duree", "char(20)");
            obj.addField(4, "temps", "char(20)");
            obj.addField(5, "datee", "char(20)");
            obj.addField(6, "RDV", "char(20)");
            obj.addField(7, "ID_ENF", "char(20)");



            int retVal = obj.export2Excel();
            if( retVal > 0)
            {
                QMessageBox::information(this, tr("Done"),
                                         QString(tr("%1 records exported!")).arg(retVal)
                                         );
            }
}

void MainWindow::on_pushButton_triDateAct_clicked()
{
    QSound::play("Click.wav");
    activite a;
        a.trier_activite(ui->tableWidget_activite);
}

void MainWindow::on_tableWidget_enfant_itemClicked(QTableWidgetItem *item)
{
    QSound::play("Click.wav");
    tem_enfant=item;
           row_enfant=item->row();
           column_enfant=item->column();
           str_enf=true;
           str_delenf=true;
}

void MainWindow::on_lineEdit_rechercheEnfnat_textChanged(const QString &arg1)
{
    QSound::play("Click.wav");
        enfants en;
        en.rechercher_enfant(ui->tableWidget_enfant,arg1);
}

void MainWindow::on_lineEdit_rechercheAct_textChanged(const QString &arg1)
{
    QSound::play("Click.wav");
    activite a;
        a.rechercher_activite(ui->tableWidget_activite,arg1);
}

void MainWindow::on_pushButton_clicked()
{
    QSound::play("Click.wav");
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_2_clicked()
{
    QSound::play("Click.wav");
    ui->stackedWidget->setCurrentIndex(1);
}





void MainWindow::on_tableWidget_activite_itemClicked(QTableWidgetItem *item)
{
    QSound::play("Click.wav");
    tem_activite=item;
          row_activite=item->row();
          column_activite=item->column();
          str=true;
          str_delete=true;

}

void MainWindow::on_tabWidget_6_tabBarClicked(int index)
{
    QSound::play("Click.wav");
    activite a;
    a.afficher_activite(ui->tableWidget_activite);
}

void MainWindow::on_tabWidget_5_tabBarClicked(int index)
{
    QSound::play("Click.wav");
    enfants en;
    en.afficher_enfant(ui->tableWidget_enfant);
}

void MainWindow::on_pb_back1_clicked()
{
    QSound::play("Click.wav");
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_pb_back2_clicked()
{
    QSound::play("Click.wav");
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pb_back2_2_clicked()
{
    QSound::play("Click.wav");
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_pushButton_3_clicked()
{
    QSound::play("Click.wav");
    ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_pushButton_4_clicked()
{
    QSound::play("Click.wav");
   ui->stackedWidget->setCurrentIndex(6);
}

void MainWindow::on_pb_back1_3_clicked()
{
    QSound::play("Click.wav");
     ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_pb_back1_2_clicked()
{
    QSound::play("Click.wav");
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_pb_back1_6_clicked()
{
    QSound::play("Click.wav");
    ui->stackedWidget->setCurrentIndex(3);
}
void MainWindow::on_pb_back1_5_clicked()
{
    QSound::play("Click.wav");
    ui->stackedWidget->setCurrentIndex(3);
}


//////////////////tache nayrouz et darragi ///////////////
void MainWindow::on_pb_ajouter_camera_2_clicked()
{
    QSound::play("Click.wav");
    bool idtest;
    QString msg("");
    bool valid=true;
    int IDalready = 0;
    int id = ui->id_camera_2->text().toInt(&idtest);
    QString modele= ui->modele_camera_2->text() ;
    QString etat= ui->etat_camera_2->text() ;
    QString emplacement= ui->emplacement_camera_2->text() ;
     if (!ui->id_camera_2->text().isEmpty() && idtest)
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

  if (ui->id_camera_2->text().isEmpty())
  {
      msg+=QString("*Identifiant requis\n");
      valid=false;
  }
  if ( ui->modele_camera_2->text().isEmpty())
  {
      msg+=QString("*Modele requis\n");
      valid=false;
  }
  if ( ui->etat_camera_2->text().isEmpty())
  {
      msg+=QString("*Etat est requis\n");
      valid=false;
  }
  if ( ui->emplacement_camera_2->text().isEmpty())
  {
      msg+=QString("*emplacement est requis\n");
      valid=false;
  }
  if (!ui->id_camera_2->text().isEmpty() && !idtest)
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

void MainWindow::on_pb_modifier_camera_2_clicked()
{
    QSound::play("Click.wav");
    bool idtest;
    QString msg("");
    bool valid=true;

    int id = ui->id_camera_mod_2->text().toInt(&idtest);
    QString modele= ui->modele_camera_mod_2->text() ;
    QString etat= ui->etat_camera_mod_2->text() ;
    QString emplacement= ui->emplacement_camera_mod_2->text() ;






    //controle de saisie
  if (ui->id_camera_mod_2->text().isEmpty())
  {
      msg+=QString("*Identifiant requis\n");
      valid=false;
  }
  if ( ui->modele_camera_mod_2->text().isEmpty())
  {
      msg+=QString("*Modele requis\n");
      valid=false;
  }
  if ( ui->etat_camera_mod_2->text().isEmpty())
  {
      msg+=QString("*Etat est requis\n");
      valid=false;
  }
  if ( ui->emplacement_camera_mod_2->text().isEmpty())
  {
      msg+=QString("*Emplacement est requis\n");
      valid=false;
  }
  if (!ui->id_camera_mod_2->text().isEmpty() && !idtest)
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

void MainWindow::on_pb_supprimer_camera_2_clicked()
{
QSound::play("Click.wav");
    QString msg("");
    Cameras tmpcamera;
    bool idtest;
    bool valid=true;
    int id = ui->id_supprimer_cam_2->text().toInt(&idtest);




    if (ui->id_supprimer_cam_2->text().isEmpty())
    {
        msg+=QString("*Identifiant requis\n");
        valid=false;
    }

    if (!ui->id_supprimer_cam_2->text().isEmpty() && !idtest)
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

void MainWindow::on_pb_ajouter_site_2_clicked()
{
    QSound::play("Click.wav");
    bool idtest;
    QString msg("");
    bool valid=true;
    int IDalready = 0;

    int id = ui->le_id_site_2->text().toInt(&idtest);
    QString type= ui->le_type_site_2->text() ;
    QString nom=ui->le_nom_site_2->text();
    QString adresse=ui->le_adresse_site_2->text();
    int nb_visite=ui->le_nb_site_2->text().toInt();
    QString blockage=ui->le_blockage_site_2->text();
    QString date_dv=ui->le_date_site_2->text();
    int temps_dv=ui->le_temps_site_2->text().toInt();
    Site s(id,type,nom,adresse,nb_visite,blockage,date_dv,temps_dv);
     if (!ui->le_id_site_2->text().isEmpty() && idtest)
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

  if (ui->le_id_site_2->text().isEmpty())
  {
      msg+=QString("*Identifiant requis\n");
      valid=false;
  }
  if ( ui->le_type_site_2->text().isEmpty())
  {
      msg+=QString("*Type requis\n");
      valid=false;
  }
  if ( ui->le_nom_site_2->text().isEmpty())
  {
      msg+=QString("*Nom est requis\n");
      valid=false;
  }
  if ( ui->le_adresse_site_2->text().isEmpty())
  {
      msg+=QString("*Adresse est requis\n");
      valid=false;
  }
  if ( ui->le_nb_site_2->text().isEmpty())
  {
      msg+=QString("*Nb visite est requis\n");
      valid=false;
  }
  if ( ui->le_blockage_site_2->text().isEmpty())
  {
      msg+=QString("*Blockage est requis\n");
      valid=false;
  }
  if ( ui->le_date_site_2->text().isEmpty())
  {
      msg+=QString("*Date est requis\n");
      valid=false;
  }
  if ( ui->le_temps_site_2->text().isEmpty())
  {
      msg+=QString("*Temps est requis\n");
      valid=false;
  }
  if (!ui->le_id_site_2->text().isEmpty() && !idtest)
  {
      msg+=QString("*Identifiant doit etre un entier\n");
       valid=false;
  }


if (valid)
{
    Site s(id,type,nom,adresse,nb_visite,blockage,date_dv,temps_dv);
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

void MainWindow::on_pb_modifiersite_2_clicked()
{
    QSound::play("Click.wav");
    bool idtest;
    QString msg("");
    bool valid=true;

    int id = ui->id_modif_site_2->text().toInt(&idtest);
    QString type= ui->type_modif_site_2->text() ;
    QString nom=ui->nom_modif_site_2->text();
    QString adresse=ui->adresse_modif_site_2->text();
    int nb_visite=ui->nbvisite_modif_site_2->text().toInt();
    QString blockage=ui->blockage_modif_site_2->text();
    QString date_dv=ui->date_modif_site_2->text();
    int temps_dv=ui->temps_modif_site_2->text().toInt();
    Site s(id,type,nom,adresse,nb_visite,blockage,date_dv,temps_dv);





    //controle de saisie
    if (ui->id_modif_site_2->text().isEmpty())
    {
        msg+=QString("*Identifiant requis\n");
        valid=false;
    }
    if ( ui->type_modif_site_2->text().isEmpty())
    {
        msg+=QString("*Type requis\n");
        valid=false;
    }
    if ( ui->nom_modif_site_2->text().isEmpty())
    {
        msg+=QString("*Nom est requis\n");
        valid=false;
    }
    if ( ui->adresse_modif_site_2->text().isEmpty())
    {
        msg+=QString("*Adresse est requis\n");
        valid=false;
    }
    if ( ui->nbvisite_modif_site_2->text().isEmpty())
    {
        msg+=QString("*Nb visite est requis\n");
        valid=false;
    }
    if ( ui->blockage_modif_site_2->text().isEmpty())
    {
        msg+=QString("*Blockage est requis\n");
        valid=false;
    }
    if ( ui->date_modif_site_2->text().isEmpty())
    {
        msg+=QString("*Date est requis\n");
        valid=false;
    }
    if ( ui->temps_modif_site_2->text().isEmpty())
    {
        msg+=QString("*Temps est requis\n");
        valid=false;
    }
    if (!ui->id_modif_site_2->text().isEmpty() && !idtest)
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

void MainWindow::on_pb_supprimer_site_2_clicked()
{
    QSound::play("Click.wav");
    QString msg("");
    Site tmpsite;
    bool idtest;
    bool valid=true;
    int id = ui->leid_supp_site_2->text().toInt(&idtest);




    if (ui->leid_supp_site_2->text().isEmpty())
    {
        msg+=QString("*Identifiant requis\n");
        valid=false;
    }

    if (!ui->leid_supp_site_2->text().isEmpty() && !idtest)
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

void MainWindow::on_pb_ajouter_ordinateur_2_clicked()
{
    QSound::play("Click.wav");
    bool idtest;
    QString msg("");
    bool valid=true;
    int IDalready = 0;
    int Id = ui->le_id_ordi_2->text().toInt(&idtest);
    QString modele= ui->le_modele_ordi_2->text() ;
     if (!ui->le_id_ordi_2->text().isEmpty() && idtest)
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

  if (ui->le_id_ordi_2->text().isEmpty())
  {
      msg+=QString("*Identifiant requis\n");
      valid=false;
  }
  if ( ui->le_modele_ordi_2->text().isEmpty())
  {
      msg+=QString("*Modele requis\n");
      valid=false;
  }
  if (!ui->le_id_ordi_2->text().isEmpty() && !idtest)
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

void MainWindow::on_pb_modif_ordina_2_clicked()
{
    QSound::play("Click.wav");
    bool idtest;
    QString msg("");
    bool valid=true;

    int id = ui->le_id_modordina_2->text().toInt(&idtest);
    QString modele= ui->modele_modordina_2->text() ;

    //controle de saisie
  if (ui->le_id_modordina_2->text().isEmpty())
  {
      msg+=QString("*Identifiant requis\n");
      valid=false;
  }
  if ( ui->modele_modordina_2->text().isEmpty())
  {
      msg+=QString("*Modele requis\n");
      valid=false;
  }

  if (!ui->le_id_modordina_2->text().isEmpty() && !idtest)
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

void MainWindow::on_pb_supprimer_ordina_2_clicked()
{
    QSound::play("Click.wav");
    QString msg("");
    Ordinateur tmpordinateur;
    bool idtest;
    bool valid=true;
    int id = ui->leid_supp_ordi_2->text().toInt(&idtest);




    if (ui->leid_supp_ordi_2->text().isEmpty())
    {
        msg+=QString("*Identifiant requis\n");
        valid=false;
    }

    if (!ui->leid_supp_ordi_2->text().isEmpty() && !idtest)
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

void MainWindow::on_pb_ajouter_champ_2_clicked()
{
    QSound::play("Click.wav");
    bool idtest;
    QString msg("");
    bool valid=true;
    int IDalready = 0;
    int Id = ui->numero_cham_2->text().toInt(&idtest);
    QString description= ui->description_champ_2->text() ;
     if (!ui->numero_cham_2->text().isEmpty() && idtest)
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

  if (ui->numero_cham_2->text().isEmpty())
  {
      msg+=QString("*Numéro requis\n");
      valid=false;
  }
  if ( ui->description_champ_2->text().isEmpty())
  {
      msg+=QString("*Description requis\n");
      valid=false;
  }
  if (!ui->numero_cham_2->text().isEmpty() && !idtest)
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

void MainWindow::on_pb_modif_cham_2_clicked()
{QSound::play("Click.wav");
    bool idtest;
    QString msg("");
    bool valid=true;

    int num = ui->num_mod_cham_2->text().toInt(&idtest);
    QString description= ui->description_mod_champ_2->text() ;

    //controle de saisie
  if (ui->num_mod_cham_2->text().isEmpty())
  {
      msg+=QString("*Numéro requis\n");
      valid=false;
  }
  if ( ui->description_mod_champ_2->text().isEmpty())
  {
      msg+=QString("*Description requis\n");
      valid=false;
  }

  if (!ui->num_mod_cham_2->text().isEmpty() && !idtest)
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

void MainWindow::on_pb_supprimer_champ_2_clicked()
{QSound::play("Click.wav");
    QString msg("");
    Chambre tmpchamp;
    bool idtest;
    bool valid=true;
    int id = ui->leid_supp_champ_2->text().toInt(&idtest);




    if (ui->leid_supp_champ_2->text().isEmpty())
    {
        msg+=QString("*Numero requis\n");
        valid=false;
    }

    if (!ui->leid_supp_champ_2->text().isEmpty() && !idtest)
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

void MainWindow::on_Imprim_site_clicked()
{
    QString strStream;
        QTextStream out(&strStream);
        QString strTitle = "Planning";

        const int rowCount = ui->tab_siteafficher_3->model()->rowCount();
        const int columnCount = ui->tab_siteafficher_3->model()->columnCount();
        out <<  "<html>\n"
            "<head>\n"
            "<meta Content=\"Text/html; charset=Windows-1251\">\n"
            <<  QString("<title>%1</title>\n").arg(strTitle)
            <<  "</head>\n"
            "<body bgcolor=#ffffff link=#5000A0>\n"
            "<table border=1 cellspacing=0 cellpadding=2>\n";

        // headers
        out << "<thead><tr bgcolor=#f0f0f0>";
        for (int column = 0; column < columnCount; column++)
            if (!ui->tab_siteafficher_3->isColumnHidden(column))
                out << QString("<th>%1</th>").arg(ui->tab_siteafficher_3->model()->headerData(column, Qt::Horizontal).toString());
        out << "</tr></thead>\n";

        // data table
        for (int row = 0; row < rowCount; row++) {
            out << "<tr>";
            for (int column = 0; column < columnCount; column++) {
                if (!ui->tab_siteafficher_3->isColumnHidden(column)) {
                    QString data = ui->tab_siteafficher_3->model()->data(ui->tab_siteafficher_3->model()->index(row, column)).toString().simplified();
                    out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
                }
            }
            out << "</tr>\n";
        }
        out <<  "</table>\n"
            "</body>\n"
            "</html>\n";

        QTextDocument *document = new QTextDocument();
        document->setHtml(strStream);

        QPrinter printer;

        QPrintDialog *dialog = new QPrintDialog(&printer, NULL);
        if (dialog->exec() == QDialog::Accepted) {
            document->print(&printer);
        }

        delete document;
}




void MainWindow::on_afficher_site_tab_2_tabBarClicked()
{QSound::play("Click.wav");

    Site s;
    ui->tab_siteafficher_3->setModel(s.afficher());
}


void MainWindow::on_afficher_ordinateur_tab_2_tabBarClicked()
{QSound::play("Click.wav");
    Ordinateur o;
    ui->tab_siteafficher_4->setModel(o.afficher());
}


void MainWindow::on_afficher_cameras_tab_2_tabBarClicked()
{QSound::play("Click.wav");
    Cameras c;
    ui->affichage_cam_2->setModel(c.afficher());
}

void MainWindow::on_afficher_chambres_tab_2_tabBarClicked()
{QSound::play("Click.wav");
    Chambre ch;
    ui->affichage_chambres_2->setModel(ch.afficher());
}



void MainWindow::on_cherchernom_2_clicked()
{
    QSound::play("Click.wav");
    Site tmpsite;
    QString nom = ui->nomrecher_2->text();
    ui->tab_affrecherche_2->setModel(tmpsite.recherche_nom(nom));
}

void MainWindow::on_cherchertype_2_clicked()
{QSound::play("Click.wav");
    Site tmpsite;
        QString type = ui->typerecher_2->text();
        ui->tab_affrecherche_2->setModel(tmpsite.recherche_type(type));
}

void MainWindow::on_chercheradresse_2_clicked()
{QSound::play("Click.wav");
    Site tmpsite;
        QString adresse = ui->adresserecher_2->text();
        ui->tab_affrecherche_2->setModel(tmpsite.recherche_adresse(adresse));
}

void MainWindow::on_trier_nb_2_clicked()
{QSound::play("Click.wav");
    Site tmpsite;
        ui->tab_affrecherche_2->setModel(tmpsite.trier_nbvisite());
}



void MainWindow::on_modele_re_2_clicked()
{QSound::play("Click.wav");
    Cameras c;
        QString modele = ui->rech_modele_2->text();
        ui->tab_affrecherche_5->setModel(c.recherche_modele(modele));
}

void MainWindow::on_etat_re_2_clicked()
{QSound::play("Click.wav");
    Cameras c;
        QString etat = ui->etat_rech_2->text();
        ui->tab_affrecherche_5->setModel(c.recherche_etat(etat));
}

void MainWindow::on_emplacement_re_2_clicked()
{QSound::play("Click.wav");
    Cameras c;
        QString emplacement = ui->emplacement_rech_2->text();
        ui->tab_affrecherche_5->setModel(c.recherche_emplacement(emplacement));
}

void MainWindow::on_trier_etat_2_clicked()
{QSound::play("Click.wav");
    Cameras c;
        ui->tab_affrecherche_5->setModel(c.trier_etat());
}


void MainWindow::on_trier_date_2_clicked()
{QSound::play("Click.wav");
    Site tmpsite;
        ui->tab_affrecherche_2->setModel(tmpsite.trier_date());
}

void MainWindow::on_trier_temps_2_clicked()
{QSound::play("Click.wav");
    Site tmpsite;
        ui->tab_affrecherche_2->setModel(tmpsite.trier_temps());
}


/*void Ordinateur:on_ActiveCam_clicked()
{
    cam->start();
}

void Ordinateur::on_CaptureCam_clicked()
{
    auto filename = QFileDialog::getSaveFileName(this,"CaptureRayon","/","Image(*.jpg;*.jpeg)");
    if (filename.isEmpty()) {return ;}
    imgcam->setCaptureDestination(QCameraImageCapture::CaptureToFile);
    QImageEncoderSettings imgencset;
    imgencset.setCodec("image/jpeg");
    imgencset.setResolution(1200,800);
    imgcam->setEncodingSettings(imgencset);
    cam->setCaptureMode(QCamera::CaptureStillImage);
    cam->start();
    cam->searchAndLock();
    imgcam->capture(filename);
    cam->unlock();
    QMessageBox::information(nullptr, QObject::tr("Capturer une image"),
                             QObject::tr("Image capturé"), QMessageBox::Ok );
}

void Ordinateur::on_DesactiveCam_clicked()
{
    cam->stop();
}*/


/*_________________Television_______________*/
void MainWindow::on_Ajout_tele_clicked()
{QSound::play("Click.wav");
    QString matricule_tele = ui->lineEdit_matricule_tele->text();
           QString modele = ui->lineEdit_modele_tele->text();
           QString emplacement = ui->comboBox_emplacement_tele->currentText();
           QString etat = ui->etat_tele->currentText();
           QTime verouillage = ui->timeEdit->time();
           Television T(matricule_tele, modele, emplacement, etat, verouillage);
           bool test = T.Ajouter_television();

           QMessageBox msgBox;

           if(test){
               msgBox.setText("Ajout réussi");
               ui-> tableView -> setModel(T.Afficher_television() );

           }
           else
               msgBox.setText("Echec ");
           msgBox.exec();
}

void MainWindow::on_Modifier_Television_clicked()
{QSound::play("Click.wav");
    QString matricule_tele = ui->M_matricule->text();
            QString modele= ui->M_modele->text();
            QString emplacement=ui->M_emplacement->currentText();
            QString etat=ui->M_etat->currentText();
            QTime verouillage =ui->timeEdit_2->time();
         Television T(matricule_tele,modele,emplacement,etat,verouillage);
            bool test=T.modifier(matricule_tele,modele,emplacement,etat,verouillage);
            QMessageBox msgBox;
                if(test)
                   {
                 ui-> tableView->setModel(T.Afficher_television());
                QMessageBox::information(this, tr("Done"),
                                         QString(tr("success"))
                                         );
                }
                else
                    QMessageBox::information(this, tr("Done"),
                                                          QString(tr("echec"))
                                                          );                msgBox.exec();
}




void MainWindow::on_pushButton_6_clicked() /*supprimer_Tele*/
{QSound::play("Click.wav");

    Television T;
    T.setMatricule(ui->Sup_Matricule->text());
           bool test=T.Supprimer_television(T.getMatricule());
           QMessageBox msgBox;

           if(test)
              { msgBox.setText("Suppression avec succes.");
           ui-> tableView->setModel(T.Afficher_television());

           }
           else
               msgBox.setText("Echec de suppression");
               msgBox.exec();
}

void MainWindow::on_Trie_television_clicked()
{QSound::play("Click.wav");

    int choix ;
           choix=ui->comboBox_Trie->currentIndex();
           QSqlQueryModel * model =new QSqlQueryModel();

         if(ui->Tele_up->isChecked())
         model = T.trierup(choix);

        else if(ui->Tele_down->isChecked())
           model=T.trier_down(choix);

         else
             model=T.Afficher_television();

          ui->tableView->setModel(model);
}

void MainWindow::on_pushButton_8_clicked()/*Imprimer_Tele*/
{QSound::play("Click.wav");
    QString strStream;
        QTextStream out(&strStream);
        QString strTitle = "Planning";

        const int rowCount = ui->tableView->model()->rowCount();
        const int columnCount = ui->tableView->model()->columnCount();
        out <<  "<html>\n"
            "<head>\n"
            "<meta Content=\"Text/html; charset=Windows-1251\">\n"
            <<  QString("<title>%1</title>\n").arg(strTitle)
            <<  "</head>\n"
            "<body bgcolor=#ffffff link=#5000A0>\n"
            "<table border=1 cellspacing=0 cellpadding=2>\n";

        // headers
        out << "<thead><tr bgcolor=#f0f0f0>";
        for (int column = 0; column < columnCount; column++)
            if (!ui->tableView->isColumnHidden(column))
                out << QString("<th>%1</th>").arg(ui->tableView->model()->headerData(column, Qt::Horizontal).toString());
        out << "</tr></thead>\n";

        // data table
        for (int row = 0; row < rowCount; row++) {
            out << "<tr>";
            for (int column = 0; column < columnCount; column++) {
                if (!ui->tableView->isColumnHidden(column)) {
                    QString data = ui->tableView->model()->data(ui->tableView->model()->index(row, column)).toString().simplified();
                    out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
                }
            }
            out << "</tr>\n";
        }
        out <<  "</table>\n"
            "</body>\n"
            "</html>\n";

        QTextDocument *document = new QTextDocument();
        document->setHtml(strStream);

        QPrinter printer;

        QPrintDialog *dialog = new QPrintDialog(&printer, NULL);
        if (dialog->exec() == QDialog::Accepted) {
            document->print(&printer);
        }

        delete document;
}


/* _____________________________Thermometre__________________________________*/



void MainWindow::on_Ajouter_Thermometre_clicked()
{QSound::play("Click.wav");
    QString matricule_thermo = ui->lineEdit_MT->text();

    QString emplacement = ui->comboBox_EmT->currentText();
    QString etat = ui->comboBox_EtT->currentText();
       int temperature = ui->lineEdit_Temp->text().toInt();
       Thermometre Th(matricule_thermo,  emplacement, etat, temperature);
       bool test = Th.Ajouter_thermometre();

       QMessageBox msgBox;

       if(test){
           msgBox.setText("Ajout réussi");
           ui-> tableView_Thermo -> setModel(Th.Afficher_thermometre() );

       }
       else
           msgBox.setText("Echec ");
       msgBox.exec();

}

void MainWindow::on_Modifier_Thermo_clicked()
{QSound::play("Click.wav");
    QString matricule_thermo = ui->lineEdit_ModM->text();

            QString emplacement=ui->comboBox_Mod_EmpT->currentText();
            QString etat=ui->comboBox_Mod_EtaT->currentText();
            int temperature =ui->Tmp_Thermo->text().toInt();
         Thermometre Th(matricule_thermo,emplacement,etat,temperature);
            bool test=Th.modifier(matricule_thermo,emplacement,etat,temperature);
            QMessageBox msgBox;
                if(test)
                   {
                 ui->tableView_Thermo->setModel(Th.Afficher_thermometre());
                QMessageBox::information(this, tr("Done"),
                                         QString(tr("success"))
                                         );
                }
                else
                {
                    QMessageBox::information(this, tr("Done"),
                                             QString(tr("echec"))
                                             );                msgBox.exec();
                }

}


void MainWindow::on_pushButton_10_clicked()/*supprimer_Thermo*/
{QSound::play("Click.wav");
    Thermometre Th; Th.setMatricule(ui->Sup_thermo->text());
           bool test=Th.Supprimer_thermometre(Th.getMatricule());
           QMessageBox msgBox;

           if(test)
              { msgBox.setText("Suppression avec succes.");
           ui-> tableView_Thermo->setModel(Th.Afficher_thermometre());

           }
           else
           {
               msgBox.setText("Echec de suppression");
               msgBox.exec();
           }
}

void MainWindow::on_Trie_Thermometre_clicked()
{QSound::play("Click.wav");
    int choix ;
               choix=ui->Trie_thermo->currentIndex();
               QSqlQueryModel * model =new QSqlQueryModel();

             if(ui->radioButton_Thermo->isChecked())
             model = Th.trierup(choix);

            else if(ui->radioButton_Thermo->isChecked())
               model=Th.trier_down(choix);

             else
                 model=Th.Afficher_thermometre();

              ui->tableView_Thermo->setModel(model);

}




void MainWindow::on_Recherche_Thermometre_clicked()
{QSound::play("Click.wav");
    int choix;
     choix=ui->comboBox_R->currentIndex();
     QString rech=ui->Recherche_Thermo->text();
    ui->tableView_Thermo->setModel(Th.recherche(choix,rech));
}

void MainWindow::on_Gestion_Thermo_Tele_clicked()
{QSound::play("Click.wav");
    Television T;
       //ui->tableView->setModel(T.Afficher_television());
       ui->stackedWidget->setCurrentIndex(2);
}



/*Aduino_Afficher8temperature*/










void MainWindow::on_Retouraumenu_clicked()
{QSound::play("Click.wav");
 ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_Capture_clicked()
{
    auto active_window = qApp->activeWindow();
        QPixmap qpx_pixmap(active_window->size());
        if (active_window)
        {
            active_window->render(&qpx_pixmap);
            ui->label->setPixmap(qpx_pixmap);
        }
        QString fileName = QFileDialog::getSaveFileName(this, tr("Save Image File"),
                                                        QString(),
                                                        tr("Images (*.png)"));

        if (!fileName.isEmpty())
        {
          qpx_pixmap.save(fileName);
        }
        bool test=false;
        if(qpx_pixmap.width()>10) test=true;
        if(test) {sound_effect();}
}

void MainWindow::on_Musique_clicked()
{
    if (sound_on)
        {
            player->stop();
            sound_on=false;
        }
        else
        {
            player = new QMediaPlayer(this);
            player->setVolume(50);
            player->setMedia(QUrl::fromLocalFile("got.mp3"));/////changer just taper l emplacement de //fichier et replacer tout \ par /
            player->play();
            sound_on=true;
        }
}
void MainWindow::sound_effect()
{QSound::play("Click.wav");
    player = new QMediaPlayer(this);
    player->setVolume(80);
    player->setMedia(QUrl::fromLocalFile("C:/Users/HOUSSEM/Downloads/basededonne/Click.wav"));
    player->play();

}
void MainWindow::on_Retour_Menu_clicked()
{QSound::play("Click.wav");
     ui->stackedWidget->setCurrentIndex(3);
}
void MainWindow::myfunction()
{//QSound::play("Click.wav");
    QTime time=QTime::currentTime();
        QString time_text=time.toString("hh : mm : ss");
        if ((time.second() %2)==0)
        {
           time_text [3]=' ';
            time_text[8]=' ';
        }

        ui->time->setText(time_text);
}

void MainWindow::on_pb_back1_4_clicked()
{
    QSound::play("Click.wav");
         ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_ActiveCam_clicked()
{
    cam->start();
}

void MainWindow::on_CaptureCam_clicked()
{
    auto filename = QFileDialog::getSaveFileName(this,"CaptureRayon","/","Image(*.jpg;*.jpeg)");
    if (filename.isEmpty()) {return ;}
    imgcam->setCaptureDestination(QCameraImageCapture::CaptureToFile);
    QImageEncoderSettings imgencset;
    imgencset.setCodec("image/jpeg");
    imgencset.setResolution(1200,800);
    imgcam->setEncodingSettings(imgencset);
    cam->setCaptureMode(QCamera::CaptureStillImage);
    cam->start();
    cam->searchAndLock();
    imgcam->capture(filename);
    cam->unlock();
    QMessageBox::information(nullptr, QObject::tr("Capturer une image"),
                             QObject::tr("Image capturé"), QMessageBox::Ok );
}

void MainWindow::on_DesactiveCam_clicked()
{
    cam->stop();
}

void MainWindow::on_cherchertype_5_clicked()
{
    QSound::play("Click.wav");
        Ordinateur orditmp;
            QString type = ui->typerecher_5->text();
            ui->tab_affrecherche_6->setModel(orditmp.recherche_modele(type));
}

void MainWindow::sendMail( QString mailreciever , QString object,QString contenue)
{
    Smtp* smtp = new Smtp("nawrez.shili@esprit.tn", "191JFT3363", "smtp.gmail.com", 465);
    connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));////////////////////////////////////////////////

    smtp->sendMail("nawrez.shili@esprit.tn",mailreciever ,object, contenue);
}

void MainWindow::mailSent(QString status)
{
    if(status == "Message sent")
        QMessageBox::warning( 0,QObject::tr( "Qt Simple SMTP client" ),QObject::tr( "Message sent!\n\n" ) );
}

void MainWindow::on_sendBtn_2_clicked()
{
    sendMail(ui->rcpt_2->text(),ui->subject_2->text(),ui->msg_2->toPlainText());
}



void MainWindow::on_mailing_2_tabBarClicked(int index)
{
    Ordinateur o;
    ui->tab_siteafficher_4->setModel(o.afficher());
}
