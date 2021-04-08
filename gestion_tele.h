#ifndef GESTION_TELE_H
#define GESTION_TELE_H
#include "television.h"
#include "thermometre.h"

#include <QMainWindow>
#include <QMessageBox>

#include <QDialog>

namespace Ui {
class Gestion_tele;
}

class Gestion_tele : public QDialog
{
    Q_OBJECT

public:
    explicit Gestion_tele(QWidget *parent = nullptr);
    ~Gestion_tele();

private slots:




    void on_Ajouter_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();


    void on_pushButton_2_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_Modifier_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_Supprimer_clicked();

private:
    Ui::Gestion_tele *ui;
    Television T;
    Thermometre Th;
};

#endif // GESTION_TELE_H
