#include "notfication.h"
#include "mainwindow.h"


notification::notification()

{
num=0;
}

void notification::notification_ajouterOuv( QString id)
{

    QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;

    notifyIcon->setIcon(QIcon("notification.png"));
    QString s = id;
    //notifyIcon->setVisible(1);
    notifyIcon->show();
    notifyIcon->showMessage("News","Un ouvrier à été ajouter  !",QSystemTrayIcon::Information,15000);
//num++;
}

void notification::notification_ajouterCon( QString id)
{

    QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;

    notifyIcon->setIcon(QIcon("notification.png"));
    QString s = id;

    notifyIcon->show();
    notifyIcon->showMessage("News","Un Congé à été ajouter  !",QSystemTrayIcon::Information,15000);

}
void notification::notification_memeDate( QString id)
{

    QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;

    notifyIcon->setIcon(QIcon("notification.png"));
    QString s = id;

    notifyIcon->show();
    notifyIcon->showMessage("Attention","L'Ouvrier a déja Un Congé de meme date !",QSystemTrayIcon::Information,15000);

}

void notification::notification_fiche_suivi(QString id)
{

    QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;

    notifyIcon->setIcon(QIcon("notification.png"));
    QString s = id;
    notifyIcon->show();
    notifyIcon->showMessage("News","Un vétérinaire a un nouvel animal à traiter!",QSystemTrayIcon::Information,15000);
}
