#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "television.h"
#include "thermometre.h"

#include <QMainWindow>
#include <QMessageBox>

#include <QDialog>
#include <QDebug>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:







    void on_Television_clicked();

    void on_pushButton_2_clicked();





    void on_pushButton_3_clicked();



    void on_Supprimer_Tele_clicked();



    void on_TRier_Tele_clicked();

    void on_Ajouter_Thermo_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();





    void on_exporter_clicked();





    void on_pushButton_9_clicked();

    void on_Ajouter_Television_clicked();

private:
    Ui::MainWindow *ui;
    Television T;
     Thermometre Th;
     Television val;

};
#endif // MAINWINDOW_H
