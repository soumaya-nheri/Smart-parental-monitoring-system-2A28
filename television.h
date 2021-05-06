#ifndef TELEVISION_H
#define TELEVISION_H
#include <QString>
#include <QSqlQueryModel>
#include <QTimeEdit>
#include <QTimer>


class Television
{
public:
    Television();
    Television(QString, QString, QString, QString, QTime);
    QString getMatricule();
    QString getModele();
    QString getEmplacement();
    QString getEtat();
    QTime getVerouillage();
    void  getTelevision(QString);
    void setMatricule(QString);
    void setModele(QString);
    void setEmplacement(QString);
    void setEtat(QString);
    void setVerouillage(QTime);
    bool Ajouter_television();
    bool  modifier(QString,QString,QString,QString,QTime);
    bool Supprimer_television(QString);
    QSqlQueryModel* Afficher_television();
    QSqlQueryModel * recherche( int,QString );
    QSqlQueryModel *  trierup(int);
    QSqlQueryModel *  trier_down(int);
private:
    QString matricule_tele;
    QString modele;
    QString emplacement;
    QString etat;
    QTime verouillage;
      QString val;
};

#endif // TELEVISION_H
