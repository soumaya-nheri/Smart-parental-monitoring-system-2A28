#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "television.h"
#include "thermometre.h"
#include <QMessageBox>
#include <QSqlQueryModel>
#include <QGroupBox>
#include <QSqlQuery>
#include <QPixmap>
#include <QDebug>
#include <QPrintDialog>
#include <QPrinter>
#include <QTextDocument>







MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/POSTE/OneDrive/Bureau/mockup-tv-wall-mounted-living-room-room-with-white-wall-3d-rendering");
    ui->label_pic->setPixmap(pix.scaled(900,1000,Qt::KeepAspectRatio));
    QPixmap pixe("C:/Users/POSTE/OneDrive/Bureau/mockup-tv-wall-mounted-living-room-room-with-white-wall-3d-rendering");
    ui->label_pK->setPixmap(pixe.scaled(900,1000,Qt::KeepAspectRatio));
    QPixmap pixel("C:/Users/POSTE/OneDrive/Bureau/4133043");
    ui->label_pV->setPixmap(pixel.scaled(900,1000,Qt::KeepAspectRatio));
    ui->label_pD->setPixmap(pixel.scaled(900,1000,Qt::KeepAspectRatio));




}

MainWindow::~MainWindow()
{
    delete ui;
}










void MainWindow::on_Television_clicked()
{
    Television T;
       ui->tableView->setModel(T.Afficher_television());
       ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_2_clicked()
{
     Thermometre Th;
     ui->tableView_2->setModel(Th.Afficher_thermometre());
      ui->stackedWidget->setCurrentIndex(1);
}





void MainWindow::on_pushButton_3_clicked()
{
    QString matricule_tele = ui->lineEdit_7->text();
            QString modele= ui->lineEdit_Model->text();
            QString emplacement=ui->comboBox_emplacement->currentText();
            QString etat=ui->comboBox_etat->currentText();
            QTime verouillage =ui->timeEdit->time();
         Television T(matricule_tele,modele,emplacement,etat,verouillage);
            bool test=T.modifier(matricule_tele,modele,emplacement,etat,verouillage);
            QMessageBox msgBox;
                if(test)
                   {
                 ui->tableView->setModel(T.Afficher_television());
                QMessageBox::information(this, tr("Done"),
                                         QString(tr("success"))
                                         );
                }
                else
                    QMessageBox::information(this, tr("Done"),
                                                          QString(tr("echec"))
                                                          );                msgBox.exec();

}




void MainWindow::on_Supprimer_Tele_clicked()
{





               Television T; T.setMatricule(ui->lineEdit_6->text());
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



void MainWindow::on_TRier_Tele_clicked()
{

    int choix ;
           choix=ui->comboBox_2->currentIndex();
           QSqlQueryModel * model =new QSqlQueryModel();

         if(ui->radioButton_3->isChecked())
         model = T.trierup(choix);

        else if(ui->radioButton_4->isChecked())
           model=T.trier_down(choix);

         else
             model=T.Afficher_television();

          ui->tableView->setModel(model);
}

void MainWindow::on_Ajouter_Thermo_clicked()
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
           ui-> tableView_2 -> setModel(Th.Afficher_thermometre() );

       }
       else
           msgBox.setText("Echec ");
       msgBox.exec();

}

void MainWindow::on_pushButton_5_clicked()
{
    QString matricule_thermo = ui->lineEdit_ModM->text();

            QString emplacement=ui->comboBox_Mod_EmpT->currentText();
            QString etat=ui->comboBox_Mod_EtaT->currentText();
            int temperature =ui->lineEdit_5->text().toInt();
         Thermometre Th(matricule_thermo,emplacement,etat,temperature);
            bool test=Th.modifier(matricule_thermo,emplacement,etat,temperature);
            QMessageBox msgBox;
                if(test)
                   {
                 ui->tableView_2->setModel(Th.Afficher_thermometre());
                QMessageBox::information(this, tr("Done"),
                                         QString(tr("success"))
                                         );
                }
                else
                    QMessageBox::information(this, tr("Done"),
                                                          QString(tr("echec"))
                                                          );                msgBox.exec();

}

void MainWindow::on_pushButton_6_clicked()
{
    int choix ;
           choix=ui->comboBox_6->currentIndex();
           QSqlQueryModel * model =new QSqlQueryModel();

         if(ui->radioButton->isChecked())
         model = Th.trierup(choix);

        else if(ui->radioButton_2->isChecked())
           model=Th.trier_down(choix);

         else
             model=Th.Afficher_thermometre();

          ui->tableView_2->setModel(model);
}

void MainWindow::on_pushButton_7_clicked()
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




void MainWindow::on_exporter_clicked()
{
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






void MainWindow::on_pushButton_9_clicked()
{
    int choix;
     choix=ui->comboBox_7->currentIndex();
     QString rech=ui->lineEdit_8->text();
    ui->tableView_2->setModel(Th.recherche(choix,rech));
}
