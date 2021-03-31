#include "connexion.h"
#include "mainwindow.h"
#include <QMessageBox>
#include <QApplication>
#include <QtDebug>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    connexion c;
    bool test=c.ouvrirConnexion();

        if(test)
        {
                w.show();
                QMessageBox::critical(nullptr, QObject::tr("BDD ouverte"),
                        QObject::tr("Connexion réussie.\n"
                                    "Cliquez sur OK pour continuer"), QMessageBox::Ok);
         }
    else
        {

            QMessageBox::critical(nullptr, QObject::tr("BDD pas ouverte"),
                        QObject::tr("La connexion a échoué.\n"
                                    "Cliquez sur annuler pour sortir."), QMessageBox::Cancel);
        }

    return a.exec();
}
