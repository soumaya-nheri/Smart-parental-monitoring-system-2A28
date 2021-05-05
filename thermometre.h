#ifndef THERMOMETRE_H
#define THERMOMETRE_H

#include <QString>
#include <QSqlQueryModel>
#include <QSystemTrayIcon>

class Thermometre
{
public:
    Thermometre();
    Thermometre(QString, QString, QString, int);
    QString getMatricule();
    QString getEtat();
    QString getEmplacement();
    int getTemperature();
    void setMatricule(QString);
    void setEtat(QString);
    void setEmplacement(QString);
    void setTemperature(int);
    bool Ajouter_thermometre();
    bool Supprimer_thermometre(QString);
    bool  modifier(QString, QString, QString, int );
    QSqlQueryModel* Afficher_thermometre();
    QSystemTrayIcon *notifyIcon;
    QSqlQueryModel * recherche(int  , QString );
    QSqlQueryModel *  trierup(int);
    QSqlQueryModel *  trier_down(int);
private:
    QString matricule_thermo;
    QString etat;
    QString emplacement;
    int temperature;
};

#endif // THERMOMETRE_H

