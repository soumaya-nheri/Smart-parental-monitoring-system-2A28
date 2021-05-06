#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "parents.h"
#include "electromenager.h"
#include "enfants.h"
#include "activite.h"
#include "television.h"
#include "thermometre.h"
#include "exportexcelobject.h"
#include <QMainWindow>
#include "QTableWidget"
#include <QByteArray>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QMediaPlayer>
#include <QPixmap>
#include <QTimer>
#include <QWidget>



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE


class QCamera;
class QCameraViewfinder;
class QCameraImageCapture;
class QVBoxLayout;
class QMenu;
class QAction;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
        QTableWidgetItem *tem_activite;
        QTableWidgetItem *tem_enfant;
        int row_activite,column_activite;
        int row_enfant,column_enfant;

private slots:
    void on_pb_actualiser_parents_clicked();

    void on_pb_modifier_parents_clicked();

    void on_pb_ajouter_parents_clicked();

    void on_pb_supprimer_parents_clicked();

    void on_pb_rechercherP_clicked();

    void on_pb_validerModifP_clicked();

   // void on_radioButton_4_clicked();

    void on_rb_triNom_parent_clicked();

    void on_rb_triPrenom_parent_clicked();

    void on_rb_triNum_parent_clicked();

    void on_pb_exportPDF_P_clicked();

    void on_pb_actualiser_machine_clicked();

    void on_pb_ajouter_machine_clicked();

    void on_pb_modifier_machine_clicked();

   // void on_pb_rechercheM_clicked();

    void on_pb_valider_modifM_clicked();

    void on_pb_exportPDF_M_clicked();

    void on_rb_triTypeM_clicked();

    void on_rb_triEtatM_clicked();

    void on_rb_triEmplacementM_clicked();

    void on_pb_supprimer_machine_clicked();

    void on_pb_ajouterEnfant_clicked();

    void on_pushButton_actualiserEnfant_clicked();

    void on_pushButton_suppEnfant_clicked();

    void on_pushButton_modifEnfant_clicked();

    void on_pushButton_exporterEnfant_clicked();

    void on_pushButton_triAgeEnfant_clicked();

    void on_pb_ajouter_activite_clicked();

    void on_pushButton_ModifAct_clicked();

    void on_pushButton_suppAct_clicked();

    void on_pushButton_exportAct_clicked();

    void on_pushButton_ExportExcelAct_clicked();

    void on_pushButton_triDateAct_clicked();

    void on_tableWidget_enfant_itemClicked(QTableWidgetItem *item);

    void on_lineEdit_rechercheEnfnat_textChanged(const QString &arg1);

    void on_lineEdit_rechercheAct_textChanged(const QString &arg1);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    //void on_pushButton_4_clicked();

    //void on_pushButton_3_clicked();

    void on_tableWidget_activite_itemClicked(QTableWidgetItem *item);

    void on_tabWidget_6_tabBarClicked(int index);

    void on_tabWidget_5_tabBarClicked(int index);

    void on_pb_back1_clicked();

    void on_pb_back2_clicked();

    void on_pb_exportExcel_machine_clicked();

    void on_le_rechercheM_textChanged(const QString &arg1);

    void on_pb_back2_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pb_back1_3_clicked();

    void on_pb_back1_2_clicked();
    void on_pb_back1_6_clicked();
    void on_pb_back1_5_clicked();





    void on_pb_ajouter_camera_2_clicked();

    void on_pb_modifier_camera_2_clicked();

    void on_pb_supprimer_camera_2_clicked();


    void on_pb_ajouter_site_2_clicked();

    void on_pb_modifiersite_2_clicked();

    void on_pb_supprimer_site_2_clicked();


    void on_pb_ajouter_ordinateur_2_clicked();

    void on_pb_modif_ordina_2_clicked();

    void on_pb_supprimer_ordina_2_clicked();

    void on_pb_ajouter_champ_2_clicked();

    void on_pb_modif_cham_2_clicked();

    void on_pb_supprimer_champ_2_clicked();




    void on_afficher_site_tab_2_tabBarClicked();

    void on_afficher_ordinateur_tab_2_tabBarClicked();

    void on_afficher_cameras_tab_2_tabBarClicked();

    void on_afficher_chambres_tab_2_tabBarClicked();



    void on_cherchernom_2_clicked();

    void on_cherchertype_2_clicked();

    void on_chercheradresse_2_clicked();

    void on_trier_nb_2_clicked();

    void on_modele_re_2_clicked();

    void on_etat_re_2_clicked();

    void on_emplacement_re_2_clicked();

    void on_trier_etat_2_clicked();


    //void on_sendBtn_clicked();

    //void on_pdf_clicked();

    void on_trier_date_2_clicked();

    void on_trier_temps_2_clicked();



    void on_Ajout_tele_clicked();

    void on_Modifier_Television_clicked();

    void on_pushButton_6_clicked();

    void on_Trie_television_clicked();

    void on_pushButton_8_clicked();

    void on_Ajouter_Thermometre_clicked();

    void on_Modifier_Thermo_clicked();

    void on_pushButton_10_clicked();

    void on_Trie_Thermometre_clicked();

    void on_Recherche_Thermometre_clicked();

    void on_Gestion_Thermo_Tele_clicked();

   // void readSerial();


    void on_Retouraumenu_clicked();

    void on_Capture_clicked();

    void on_Musique_clicked();
   void sound_effect();

   void on_Retour_Menu_clicked();
   void myfunction();

   void on_pb_back1_4_clicked();

private:
    Ui::MainWindow *ui;
    parents P;
    electromenager E;
    enfants en;
    activite a;
    QMediaPlayer *player;
        bool sound_on;
    Television T;
     Thermometre Th;

         int x=0;
         QTimer *timer;

         QCamera *mCamera;
         QCameraViewfinder *mCameraViewfinder;
         QCameraImageCapture *mCameraImageCapture;
         QVBoxLayout *mLayout;
         QMenu *mOpcionesMenu;
         QAction *mEncenderAction;
         QAction *mApagarAction;
         QAction *mCapturarAction;

    bool str=false,str_delete=false,str_enf=false,str_delenf=false;
};




#endif // MAINWINDOW_H
