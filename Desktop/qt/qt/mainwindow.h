#ifndef MAINWINDOW_H
#define MAINWINDOW_H

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
    void on_pb_ajouter_camera_clicked();

    void on_pb_modifier_camera_clicked();

    void on_pb_supprimer_camera_clicked();


    void on_pb_ajouter_site_clicked();

    void on_pb_modifiersite_clicked();

    void on_pb_supprimer_site_clicked();


    void on_pb_ajouter_ordinateur_clicked();

    void on_pb_modif_ordina_clicked();

    void on_pb_supprimer_ordina_clicked();

    void on_pb_ajouter_champ_clicked();

    void on_pb_modif_cham_clicked();

    void on_pb_supprimer_champ_clicked();




    void on_afficher_site_tab_tabBarClicked(int index);

    void on_afficher_ordinateur_tab_tabBarClicked(int index);

    void on_afficher_cameras_tab_tabBarClicked(int index);

    void on_afficher_chambres_tab_tabBarClicked(int index);



    void on_cherchernom_clicked();

    void on_cherchertype_clicked();

    void on_chercheradresse_clicked();

    void on_trier_nb_clicked();

    void on_recherche_tab_site_tabBarClicked(int index);

    void on_modele_re_clicked();

    void on_etat_re_clicked();

    void on_emplacement_re_clicked();

    void on_trier_etat_clicked();


private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
