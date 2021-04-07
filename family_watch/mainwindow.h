#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Parents.h"
#include "electromenager.h"


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
    void on_pb_ajouter_machine_clicked();

    void on_pb_ajouter_parents_clicked();

    void on_pb_actualiser_parents_clicked();

    void on_pb_actualiser_machine_clicked();

    void on_pb_supprimer_parent_clicked();

    void on_pb_supprimer_machine_clicked();

    void on_pb_modifier_parent_clicked();

    void on_pb_validerModifP_clicked();

    void on_pb_modifier_machine_clicked();

    void on_pb_valider_modifE_clicked();

    void on_pb_rechercheP_clicked();

    void on_pb_imprimerM_clicked();

    void on_rb_etatM_clicked();

    void on_rb_emplacementM_clicked();

    void on_rb_typeM_clicked();

    void on_rb_triNomP_clicked();

    void on_rb_triPrenomP_clicked();

    void on_rb_triNumeroP_clicked();

    void on_pb_rechercheM_clicked();

    void on_pd_exportPDFP_clicked();

private:
    Ui::MainWindow *ui;
    parents P;
    electromenager E;
};
#endif // MAINWINDOW_H
