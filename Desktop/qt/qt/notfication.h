#ifndef NOTIFICATION_H
#define NOTIFICATION_H
#include <QSystemTrayIcon>
#include<QString>

class notification
{
private:
    int num;
public:
    notification();
    void notification_ajouterOuv(QString);
    void notification_ajouterCon(QString);
    void notification_memeDate(QString);
    void notification_fiche_suivi(QString);

};

#endif // NOTFICATION_H
