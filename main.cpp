#include "mainwindow.h"
#include <QApplication>
#include "connexion.h"
#include <QMessageBox>
#include "mainwindow.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Connexion C;
    bool test = C.createConnection();

    MainWindow w;

    if(test){
      w.show();
        //w.show();
        QMessageBox::information(nullptr, QObject::tr("Database is open"), QObject::tr("Connexion esimbi:\n""Click ok "), QMessageBox::Ok);
    //w.show();
    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Database is not open"), QObject::tr("Connexion failled:\n""Click cancel to zonga sima"), QMessageBox::Cancel);
    return a.exec();
}
