/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page_2;
    QTabWidget *tabWidget_2;
    QWidget *Enfant;
    QTabWidget *tabWidget_5;
    QWidget *AjouterEnfant;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLineEdit *lineEdit_nomenfant;
    QLineEdit *lineEdit_prenomenfant;
    QLineEdit *lineEdit_ageenfant;
    QPushButton *pb_ajouterEnfant;
    QLineEdit *lineEdit_parent;
    QWidget *AfficherEnfant;
    QTableWidget *tableWidget_enfant;
    QLineEdit *lineEdit_rechercheEnfnat;
    QPushButton *pushButton_actualiserEnfant;
    QPushButton *pushButton_suppEnfant;
    QPushButton *pushButton_modifEnfant;
    QPushButton *pushButton_exporterEnfant;
    QPushButton *pushButton_triAgeEnfant;
    QWidget *Activite;
    QTabWidget *tabWidget_6;
    QWidget *AjouterActivite;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_33;
    QLineEdit *lineEdit_nomAct;
    QLineEdit *lineEdit_descAct;
    QTextEdit *textEdit_rdv;
    QTimeEdit *timeEdit_dureeD_act;
    QTimeEdit *timeEdit_dureeF_act;
    QTimeEdit *timeEdit_tempsAct;
    QDateEdit *dateEdit_dateeAct;
    QComboBox *comboBox_enfantId;
    QPushButton *pb_ajouter_activite;
    QWidget *AfficherActivite;
    QPushButton *pushButton_ModifAct;
    QPushButton *pushButton_suppAct;
    QPushButton *pushButton_exportAct;
    QPushButton *pushButton_ExportExcelAct;
    QPushButton *pushButton_triDateAct;
    QTableWidget *tableWidget_activite;
    QTextBrowser *textBrowser_activite;
    QLineEdit *lineEdit_rechercheAct;
    QPushButton *pb_back1;
    QWidget *page;
    QTabWidget *tabWidget;
    QWidget *Parent;
    QTabWidget *tabWidget_3;
    QWidget *AjouterParent;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *le_matricule_parents;
    QLineEdit *le_nom_parents;
    QLineEdit *le_prenom_parents;
    QLineEdit *le_mail_parents;
    QLineEdit *le_adresse_parents;
    QLineEdit *le_numero_parents;
    QPushButton *pb_ajouter_parents;
    QWidget *AfficherParent;
    QTableView *tableView_afficherParents;
    QLineEdit *le_prenom_parents_2;
    QLineEdit *le_adresse_parents_2;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *le_matricule_parents_2;
    QLineEdit *le_nom_parents_2;
    QLabel *label_11;
    QLineEdit *le_mail_parents_2;
    QLabel *label_12;
    QLineEdit *le_numero_parents_2;
    QPushButton *pb_actualiser_parents;
    QPushButton *pb_modifier_parents;
    QPushButton *pb_rechercherP;
    QPushButton *pb_validerModifP;
    QRadioButton *rb_triNom_parent;
    QRadioButton *rb_triPrenom_parent;
    QRadioButton *rb_triNum_parent;
    QLineEdit *le_rechercheP;
    QPushButton *pb_exportPDF_P;
    QWidget *SupprimerParent;
    QPushButton *pb_supprimer_parents;
    QLabel *label_13;
    QLineEdit *le_parent_supp;
    QPushButton *pb_back2_2;
    QWidget *Electromenager;
    QTabWidget *tabWidget_4;
    QWidget *AjouterElectromenager;
    QLineEdit *le_matricule_machine;
    QLineEdit *le_type_machine;
    QLineEdit *le_etat_machine;
    QLineEdit *le_emplacement_machine;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QPushButton *pb_ajouter_machine;
    QWidget *AfficherElectromenager;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLineEdit *le_emplacement_machine_2;
    QLineEdit *le_type_machine_2;
    QLineEdit *le_etat_machine_2;
    QLineEdit *le_matricule_machine_2;
    QLabel *label_21;
    QTableView *tableView_afficherMachine;
    QPushButton *pb_actualiser_machine;
    QPushButton *pb_modifier_machine;
    QPushButton *pb_valider_modifM;
    QLineEdit *le_rechercheM;
    QRadioButton *rb_triTypeM;
    QRadioButton *rb_triEtatM;
    QRadioButton *rb_triEmplacementM;
    QPushButton *pb_exportPDF_M;
    QPushButton *pb_exportExcel_machine;
    QLabel *label_34;
    QWidget *SupprimerElectromenager;
    QLineEdit *le_machine_supp;
    QPushButton *pb_supprimer_machine;
    QLabel *label_22;
    QPushButton *pb_back2;
    QWidget *page_5;
    QTabWidget *tabWidget_7;
    QWidget *tab_3;
    QTabWidget *tabWidget_8;
    QWidget *tab_7;
    QLineEdit *lineEdit_matricule_tele;
    QLineEdit *lineEdit_modele_tele;
    QLabel *label_35;
    QLabel *label_36;
    QComboBox *comboBox_emplacement_tele;
    QComboBox *etat_tele;
    QLabel *label_37;
    QLabel *label_38;
    QTimeEdit *timeEdit;
    QLabel *label_39;
    QPushButton *Ajout_tele;
    QWidget *tab_6;
    QTableView *tableView;
    QTabWidget *tabWidget_9;
    QWidget *tab_9;
    QLineEdit *M_matricule;
    QLineEdit *M_modele;
    QComboBox *M_emplacement;
    QComboBox *M_etat;
    QTimeEdit *timeEdit_2;
    QPushButton *Modifier_Television;
    QLabel *label_45;
    QLabel *label_46;
    QLabel *label_47;
    QLabel *label_48;
    QLabel *label_49;
    QWidget *tab_10;
    QPushButton *pushButton_6;
    QLabel *label_50;
    QLineEdit *Sup_Matricule;
    QComboBox *comboBox_Trie;
    QRadioButton *Tele_up;
    QRadioButton *Tele_down;
    QPushButton *Trie_television;
    QPushButton *pushButton_8;
    QPushButton *Retoure_Menue;
    QLabel *label_62;
    QWidget *tab_4;
    QTabWidget *tabWidget_10;
    QWidget *tab_11;
    QLineEdit *lineEdit_MT;
    QComboBox *comboBox_EmT;
    QComboBox *comboBox_EtT;
    QLineEdit *lineEdit_Temp;
    QLabel *label_51;
    QLabel *label_52;
    QPushButton *Ajouter_Thermometre;
    QLabel *label_58;
    QLabel *label_59;
    QWidget *tab_12;
    QTableView *tableView_Thermo;
    QTabWidget *tabWidget_11;
    QWidget *tab_13;
    QLineEdit *lineEdit_ModM;
    QLineEdit *Tmp_Thermo;
    QComboBox *comboBox_Mod_EmpT;
    QComboBox *comboBox_Mod_EtaT;
    QLabel *label_53;
    QLabel *label_54;
    QLabel *label_55;
    QLabel *label_56;
    QPushButton *Modifier_Thermo;
    QWidget *tab_14;
    QPushButton *pushButton_10;
    QLabel *label_57;
    QLineEdit *Sup_thermo;
    QPushButton *Trie_Thermometre;
    QComboBox *Trie_thermo;
    QRadioButton *radioButton_Thermo;
    QRadioButton *radioButtonn_Thermo;
    QComboBox *comboBox_R;
    QLineEdit *Recherche_Thermo;
    QPushButton *Recherche_Thermometre;
    QWidget *tab_15;
    QLineEdit *lineEdit;
    QPushButton *pushButton_7;
    QLabel *label_60;
    QLabel *label_61;
    QLCDNumber *lcdNumber;
    QPushButton *Retouraumenu;
    QLabel *time;
    QWidget *page_3;
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *Gestion_Thermo_Tele;
    QWidget *page_4;
    QWidget *site_ordinateur;
    QTabWidget *main_tab;
    QWidget *site_2;
    QTabWidget *afficher_site_tab_2;
    QWidget *ajouter_13;
    QGroupBox *cadreajout_19;
    QLabel *ID_28;
    QLabel *Type_16;
    QLabel *Nom_14;
    QLineEdit *le_id_site_2;
    QLineEdit *le_type_site_2;
    QLineEdit *le_nom_site_2;
    QPushButton *pb_ajouter_site_2;
    QLineEdit *le_adresse_site_2;
    QLabel *adresse_14;
    QLabel *nb_visite_11;
    QLabel *blockage_11;
    QLabel *date_4;
    QLabel *temps_11;
    QLineEdit *le_blockage_site_2;
    QLineEdit *le_temps_site_2;
    QLineEdit *le_nb_site_2;
    QDateEdit *le_date_site_2;
    QPushButton *pb_back1_2;
    QWidget *afficher_13;
    QGroupBox *affichercadre_13;
    QTableView *tab_siteafficher_3;
    QWidget *modifier_13;
    QGroupBox *groupBox_7;
    QLineEdit *nom_modif_site_2;
    QLabel *label_40;
    QLabel *label_41;
    QLabel *label_42;
    QPushButton *pb_modifiersite_2;
    QLabel *label_43;
    QLineEdit *adresse_modif_site_2;
    QLabel *label_44;
    QLineEdit *type_modif_site_2;
    QLabel *blockage_12;
    QLabel *nb_visite_12;
    QLabel *temps_12;
    QLineEdit *nbvisite_modif_site_2;
    QLineEdit *blockage_modif_site_2;
    QLineEdit *temps_modif_site_2;
    QLineEdit *id_modif_site_2;
    QDateEdit *date_modif_site_2;
    QWidget *supprimer_13;
    QGroupBox *supprimercadre_13;
    QPushButton *pb_supprimer_site_2;
    QLineEdit *leid_supp_site_2;
    QLabel *id_13;
    QWidget *tab_8;
    QLabel *label_122;
    QLabel *label_123;
    QLabel *label_130;
    QLabel *label_131;
    QPushButton *trier_nb_2;
    QLabel *label_132;
    QLabel *label_133;
    QPushButton *cherchernom_2;
    QLineEdit *nomrecher_2;
    QPushButton *cherchertype_2;
    QLineEdit *typerecher_2;
    QPushButton *chercheradresse_2;
    QLineEdit *adresserecher_2;
    QTableView *tab_affrecherche_2;
    QLabel *label_134;
    QPushButton *trier_date_2;
    QLabel *label_135;
    QPushButton *trier_temps_2;
    QLabel *label_136;
    QLabel *label_137;
    QWidget *ordinateur_2;
    QTabWidget *mailing_2;
    QWidget *ajouter_14;
    QGroupBox *cadreajout_20;
    QLabel *ID_29;
    QLineEdit *le_id_ordi_2;
    QPushButton *pb_ajouter_ordinateur_2;
    QLabel *ID_30;
    QLineEdit *le_modele_ordi_2;
    QPushButton *pb_back1_4;
    QWidget *afficher_14;
    QGroupBox *affichercadre_14;
    QTableView *tab_siteafficher_4;
    QWidget *modifier_14;
    QGroupBox *groupBox_9;
    QLabel *ID_31;
    QLineEdit *modele_modordina_2;
    QLineEdit *le_id_modordina_2;
    QLabel *ID_32;
    QPushButton *pb_modif_ordina_2;
    QWidget *supprimer_14;
    QGroupBox *supprimercadre_14;
    QPushButton *pb_supprimer_ordina_2;
    QLineEdit *leid_supp_ordi_2;
    QLabel *id_14;
    QWidget *Mail_2;
    QGroupBox *groupBox_10;
    QLineEdit *rcpt_2;
    QLineEdit *subject_2;
    QTextEdit *msg_2;
    QPushButton *sendBtn_2;
    QWidget *tab;
    QLineEdit *nomrecher_5;
    QLabel *label_128;
    QLabel *label_160;
    QPushButton *cherchernom_5;
    QPushButton *cherchertype_5;
    QLineEdit *typerecher_5;
    QLabel *label_161;
    QTableView *tab_affrecherche_6;
    QWidget *tab_2;
    QWidget *layoutWidget_11;
    QHBoxLayout *horizontalLayout;
    QPushButton *ActiveCam;
    QPushButton *CaptureCam;
    QPushButton *DesactiveCam;
    QWidget *CamWidget;
    QWidget *chambres_cameras;
    QTabWidget *main_tab_2;
    QWidget *Camera_2;
    QTabWidget *afficher_cameras_tab_2;
    QWidget *ajouter_17;
    QGroupBox *cadreajout_23;
    QLabel *ID_38;
    QLabel *Type_18;
    QLabel *Nom_16;
    QLineEdit *id_camera_2;
    QLineEdit *modele_camera_2;
    QLineEdit *etat_camera_2;
    QPushButton *pb_ajouter_camera_2;
    QLineEdit *emplacement_camera_2;
    QLabel *adresse_16;
    QPushButton *pb_back1_3;
    QWidget *afficher_17;
    QGroupBox *affichercadre_17;
    QTableView *affichage_cam_2;
    QWidget *modifier_17;
    QGroupBox *cadreajout_24;
    QLabel *ID_39;
    QLabel *Type_19;
    QLabel *Nom_17;
    QLineEdit *id_camera_mod_2;
    QLineEdit *modele_camera_mod_2;
    QLineEdit *etat_camera_mod_2;
    QPushButton *pb_modifier_camera_2;
    QLineEdit *emplacement_camera_mod_2;
    QLabel *adresse_17;
    QPushButton *pb_back1_5;
    QWidget *supprimer_17;
    QGroupBox *supprimercadre_17;
    QPushButton *pb_supprimer_camera_2;
    QLineEdit *id_supprimer_cam_2;
    QLabel *id_17;
    QWidget *tab_5;
    QLineEdit *etat_rech_2;
    QLabel *label_148;
    QPushButton *etat_re_2;
    QPushButton *trier_etat_2;
    QLabel *label_149;
    QTableView *tab_affrecherche_5;
    QLabel *label_150;
    QLabel *label_151;
    QLineEdit *emplacement_rech_2;
    QPushButton *emplacement_re_2;
    QPushButton *modele_re_2;
    QLabel *label_152;
    QLabel *label_153;
    QLineEdit *rech_modele_2;
    QPushButton *pdf_2;
    QWidget *chambres_2;
    QTabWidget *afficher_chambres_tab_2;
    QWidget *ajouter_18;
    QGroupBox *cadreajout_25;
    QLabel *ID_40;
    QLabel *Type_20;
    QLineEdit *numero_cham_2;
    QLineEdit *description_champ_2;
    QPushButton *pb_ajouter_champ_2;
    QPushButton *pb_back1_6;
    QWidget *afficher_18;
    QGroupBox *affichercadre_18;
    QTableView *affichage_chambres_2;
    QWidget *modifier_18;
    QGroupBox *cadreajout_26;
    QPushButton *pb_modif_cham_2;
    QLabel *Type_21;
    QLabel *ID_41;
    QLineEdit *description_mod_champ_2;
    QLineEdit *num_mod_cham_2;
    QWidget *supprimer_18;
    QGroupBox *supprimercadre_18;
    QPushButton *pb_supprimer_champ_2;
    QLineEdit *leid_supp_champ_2;
    QLabel *id_18;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1012, 629);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 1011, 591));
        stackedWidget->setStyleSheet(QLatin1String("*{\n"
"font-family:century gothic;\n"
"font-size:15px;\n"
"/*background-color:#ffffee;*/\n"
"/*background:transparent;*/\n"
"font-style:black;\n"
"background-color:rgba(255,255,255,0.6);\n"
"}\n"
"#MainWindow{\n"
"	border-image: url(:/bg/back.png);\n"
"}\n"
"QFrame{\n"
"background:rgb(191, 77, 240);\n"
"border-radius:15px;\n"
"}\n"
"QComboBox{\n"
"border:none;\n"
"border-bottom:1px solid #bf4df0;\n"
"}\n"
"QComboBox::hover{\n"
"background: rgba(191, 77, 240,0.7);\n"
"}\n"
"QPushButton{\n"
"background:  rgba(191, 77, 240,0.7);\n"
"border-radius:20px;\n"
"border-radius:15px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background: rgba(191, 77, 240,0.9);\n"
"color:white;\n"
"}\n"
"\n"
"QToolButton{\n"
"background:  white;\n"
"border-radius:50px;\n"
"}\n"
"QLabel{\n"
"color: #000000;\n"
"background:transparent;\n"
"border: none;\n"
"}\n"
"QLineEdit{\n"
"background:transparent;\n"
"border:none;\n"
"border-bottom:1px solid #bf4df0;\n"
"}\n"
"\n"
"/*#ajout,#stat,#tab,#tab_30,#tab_31,#tab_32,#tab_33,#tab_39,#tab_40,#tab_41,"
                        "#tab_42,#tab_43,#tab_36,#tab_37,#tab_38,#tab_34,#tab_35{\n"
"background-color: #FFF5BD;\n"
"}\n"
"#afficher,#modifier,#tab_19{\n"
"background-color: #FFF5BD;\n"
"}\n"
"#tab_3,#tab_4,#tab_5,#tab_6,#tab_7,#tab_8,#tab_9,#tab_10,#tab_11,#tab_12,#tab_13,#tab_14,#tab_15{\n"
"background-color: #FFF5BD;\n"
"}\n"
"#tab_16,#tab_17,#tab_18,#tab_20,#tab_21,#tab_22,#tab_23{\n"
"background-color: #FFF5BD;\n"
"}\n"
"#statis,#ajout_2,#tab_24,#tab_25,#tab_26,#tab_27,#tab_28,#tab_29{\n"
"background-color: #FFF5BD;\n"
"}\n"
"#supprimer1,#supprimer1_2,#afficher_2,#modifier_2,#Commandes{\n"
"background-color: #FFF5BD;\n"
"}*/\n"
"\n"
"QTabWidget::pane {\n"
"    	border-top: 1px solid rgba(255,255,255,0.6);\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"   background-color:rgba(255,255,255,0.6);\n"
" 	border-style: outset;\n"
"	border-width: 1px;\n"
"	border-right-color: qlineargradient(spread:pad, x1:0.4, y1:0.5, x2:0.6, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-left-color: qlineargradient(spread:pad, "
                        "x1:0.6, y1:0.5, x2:0.4, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"    border-bottom-color: rgb(58, 58, 58);\n"
"	border-bottom-width: 1px;\n"
"	border-top-width: 0px;\n"
"	border-style: solid;\n"
"    color: rgb(87, 232, 235);\n"
"	padding: 4px;\n"
"    font-style: #000000;\n"
"}\n"
"\n"
"QTabBar::tab:selected, QTabBar::tab:hover {\n"
"   color:rgba(191, 77, 240,0.7);\n"
"   border-color:rgb(42, 42, 42);\n"
"   margin-left: 0px;\n"
"   margin-right: 0px;\n"
"   border-bottom-right-radius:4px;\n"
"   border-bottom-left-radius:4px;\n"
"   font-style: #000000;\n"
"}\n"
"\n"
"QTabBar::tab:last:selected {\n"
"  \n"
"	border-color:rgba(191, 77, 240,0.7);\n"
"	margin-left: 0px;\n"
"  	margin-right: 0px;\n"
"	border-bottom-right-radius:4px;\n"
"	border-bottom-left-radius:4px;\n"
"}\n"
"\n"
"QTabBar::tab:!selected {\n"
"   margin-bottom: 4px;\n"
"   border-bottom-right-radius:4px;\n"
"   border-bottom-left-radius:4px;\n"
"}"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        tabWidget_2 = new QTabWidget(page_2);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(10, 0, 791, 521));
        tabWidget_2->setStyleSheet(QLatin1String("*{\n"
"font-family:century gothic;\n"
"font-size:15px;\n"
"/*background-color:#ffffee;*/\n"
"/*background:transparent;*/\n"
"font-style:black;\n"
"background-color:rgba(255,255,255,0.6);\n"
"}\n"
"#MainWindow{\n"
"	border-image: url(:/bg/back.png);\n"
"}\n"
"QFrame{\n"
"background:rgb(191, 77, 240);\n"
"border-radius:15px;\n"
"}\n"
"QComboBox{\n"
"border:none;\n"
"border-bottom:1px solid #bf4df0;\n"
"}\n"
"QComboBox::hover{\n"
"background: rgba(191, 77, 240,0.7);\n"
"}\n"
"QPushButton{\n"
"background:  rgba(191, 77, 240,0.7);\n"
"border-radius:20px;\n"
"border-radius:15px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background: rgba(191, 77, 240,0.9);\n"
"color:white;\n"
"}\n"
"\n"
"QToolButton{\n"
"background:  white;\n"
"border-radius:50px;\n"
"}\n"
"QLabel{\n"
"color: #000000;\n"
"background:transparent;\n"
"border: none;\n"
"}\n"
"QLineEdit{\n"
"background:transparent;\n"
"border:none;\n"
"border-bottom:1px solid #bf4df0;\n"
"}\n"
"\n"
"/*#ajout,#stat,#tab,#tab_30,#tab_31,#tab_32,#tab_33,#tab_39,#tab_40,#tab_41,"
                        "#tab_42,#tab_43,#tab_36,#tab_37,#tab_38,#tab_34,#tab_35{\n"
"background-color: #FFF5BD;\n"
"}\n"
"#afficher,#modifier,#tab_19{\n"
"background-color: #FFF5BD;\n"
"}\n"
"#tab_3,#tab_4,#tab_5,#tab_6,#tab_7,#tab_8,#tab_9,#tab_10,#tab_11,#tab_12,#tab_13,#tab_14,#tab_15{\n"
"background-color: #FFF5BD;\n"
"}\n"
"#tab_16,#tab_17,#tab_18,#tab_20,#tab_21,#tab_22,#tab_23{\n"
"background-color: #FFF5BD;\n"
"}\n"
"#statis,#ajout_2,#tab_24,#tab_25,#tab_26,#tab_27,#tab_28,#tab_29{\n"
"background-color: #FFF5BD;\n"
"}\n"
"#supprimer1,#supprimer1_2,#afficher_2,#modifier_2,#Commandes{\n"
"background-color: #FFF5BD;\n"
"}*/\n"
"\n"
"QTabWidget::pane {\n"
"    	border-top: 1px solid rgba(255,255,255,0.6);\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"   background-color:rgba(255,255,255,0.6);\n"
" 	border-style: outset;\n"
"	border-width: 1px;\n"
"	border-right-color: qlineargradient(spread:pad, x1:0.4, y1:0.5, x2:0.6, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-left-color: qlineargradient(spread:pad, "
                        "x1:0.6, y1:0.5, x2:0.4, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"    border-bottom-color: rgb(58, 58, 58);\n"
"	border-bottom-width: 1px;\n"
"	border-top-width: 0px;\n"
"	border-style: solid;\n"
"    color: rgb(87, 232, 235);\n"
"	padding: 4px;\n"
"    font-style: #000000;\n"
"}\n"
"\n"
"QTabBar::tab:selected, QTabBar::tab:hover {\n"
"   color:rgba(191, 77, 240,0.7);\n"
"   border-color:rgb(42, 42, 42);\n"
"   margin-left: 0px;\n"
"   margin-right: 0px;\n"
"   border-bottom-right-radius:4px;\n"
"   border-bottom-left-radius:4px;\n"
"   font-style: #000000;\n"
"}\n"
"\n"
"QTabBar::tab:last:selected {\n"
"  \n"
"	border-color:rgba(191, 77, 240,0.7);\n"
"	margin-left: 0px;\n"
"  	margin-right: 0px;\n"
"	border-bottom-right-radius:4px;\n"
"	border-bottom-left-radius:4px;\n"
"}\n"
"\n"
"QTabBar::tab:!selected {\n"
"   margin-bottom: 4px;\n"
"   border-bottom-right-radius:4px;\n"
"   border-bottom-left-radius:4px;\n"
"}"));
        Enfant = new QWidget();
        Enfant->setObjectName(QStringLiteral("Enfant"));
        tabWidget_5 = new QTabWidget(Enfant);
        tabWidget_5->setObjectName(QStringLiteral("tabWidget_5"));
        tabWidget_5->setGeometry(QRect(30, 20, 711, 401));
        AjouterEnfant = new QWidget();
        AjouterEnfant->setObjectName(QStringLiteral("AjouterEnfant"));
        label_23 = new QLabel(AjouterEnfant);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(9, 18, 21, 16));
        label_24 = new QLabel(AjouterEnfant);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(9, 53, 36, 16));
        label_25 = new QLabel(AjouterEnfant);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(9, 88, 19, 16));
        label_26 = new QLabel(AjouterEnfant);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(9, 123, 32, 16));
        lineEdit_nomenfant = new QLineEdit(AjouterEnfant);
        lineEdit_nomenfant->setObjectName(QStringLiteral("lineEdit_nomenfant"));
        lineEdit_nomenfant->setGeometry(QRect(51, 18, 133, 20));
        lineEdit_prenomenfant = new QLineEdit(AjouterEnfant);
        lineEdit_prenomenfant->setObjectName(QStringLiteral("lineEdit_prenomenfant"));
        lineEdit_prenomenfant->setGeometry(QRect(51, 53, 133, 20));
        lineEdit_ageenfant = new QLineEdit(AjouterEnfant);
        lineEdit_ageenfant->setObjectName(QStringLiteral("lineEdit_ageenfant"));
        lineEdit_ageenfant->setGeometry(QRect(51, 88, 133, 20));
        pb_ajouterEnfant = new QPushButton(AjouterEnfant);
        pb_ajouterEnfant->setObjectName(QStringLiteral("pb_ajouterEnfant"));
        pb_ajouterEnfant->setGeometry(QRect(230, 150, 94, 30));
        lineEdit_parent = new QLineEdit(AjouterEnfant);
        lineEdit_parent->setObjectName(QStringLiteral("lineEdit_parent"));
        lineEdit_parent->setGeometry(QRect(50, 120, 131, 20));
        tabWidget_5->addTab(AjouterEnfant, QString());
        AfficherEnfant = new QWidget();
        AfficherEnfant->setObjectName(QStringLiteral("AfficherEnfant"));
        tableWidget_enfant = new QTableWidget(AfficherEnfant);
        tableWidget_enfant->setObjectName(QStringLiteral("tableWidget_enfant"));
        tableWidget_enfant->setGeometry(QRect(40, 60, 491, 192));
        lineEdit_rechercheEnfnat = new QLineEdit(AfficherEnfant);
        lineEdit_rechercheEnfnat->setObjectName(QStringLiteral("lineEdit_rechercheEnfnat"));
        lineEdit_rechercheEnfnat->setGeometry(QRect(160, 20, 113, 20));
        pushButton_actualiserEnfant = new QPushButton(AfficherEnfant);
        pushButton_actualiserEnfant->setObjectName(QStringLiteral("pushButton_actualiserEnfant"));
        pushButton_actualiserEnfant->setGeometry(QRect(60, 290, 94, 30));
        pushButton_suppEnfant = new QPushButton(AfficherEnfant);
        pushButton_suppEnfant->setObjectName(QStringLiteral("pushButton_suppEnfant"));
        pushButton_suppEnfant->setGeometry(QRect(160, 290, 94, 30));
        pushButton_modifEnfant = new QPushButton(AfficherEnfant);
        pushButton_modifEnfant->setObjectName(QStringLiteral("pushButton_modifEnfant"));
        pushButton_modifEnfant->setGeometry(QRect(260, 290, 94, 30));
        pushButton_exporterEnfant = new QPushButton(AfficherEnfant);
        pushButton_exporterEnfant->setObjectName(QStringLiteral("pushButton_exporterEnfant"));
        pushButton_exporterEnfant->setGeometry(QRect(360, 290, 94, 30));
        pushButton_triAgeEnfant = new QPushButton(AfficherEnfant);
        pushButton_triAgeEnfant->setObjectName(QStringLiteral("pushButton_triAgeEnfant"));
        pushButton_triAgeEnfant->setGeometry(QRect(470, 290, 94, 30));
        tabWidget_5->addTab(AfficherEnfant, QString());
        tabWidget_2->addTab(Enfant, QString());
        Activite = new QWidget();
        Activite->setObjectName(QStringLiteral("Activite"));
        tabWidget_6 = new QTabWidget(Activite);
        tabWidget_6->setObjectName(QStringLiteral("tabWidget_6"));
        tabWidget_6->setGeometry(QRect(30, 30, 741, 361));
        AjouterActivite = new QWidget();
        AjouterActivite->setObjectName(QStringLiteral("AjouterActivite"));
        label_27 = new QLabel(AjouterActivite);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(60, 40, 47, 13));
        label_28 = new QLabel(AjouterActivite);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(60, 80, 61, 16));
        label_29 = new QLabel(AjouterActivite);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(60, 120, 47, 13));
        label_30 = new QLabel(AjouterActivite);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(60, 160, 47, 13));
        label_31 = new QLabel(AjouterActivite);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(60, 200, 47, 13));
        label_32 = new QLabel(AjouterActivite);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(60, 240, 47, 13));
        label_33 = new QLabel(AjouterActivite);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(60, 280, 47, 13));
        lineEdit_nomAct = new QLineEdit(AjouterActivite);
        lineEdit_nomAct->setObjectName(QStringLiteral("lineEdit_nomAct"));
        lineEdit_nomAct->setGeometry(QRect(160, 40, 113, 20));
        lineEdit_descAct = new QLineEdit(AjouterActivite);
        lineEdit_descAct->setObjectName(QStringLiteral("lineEdit_descAct"));
        lineEdit_descAct->setGeometry(QRect(160, 80, 113, 20));
        textEdit_rdv = new QTextEdit(AjouterActivite);
        textEdit_rdv->setObjectName(QStringLiteral("textEdit_rdv"));
        textEdit_rdv->setGeometry(QRect(160, 230, 111, 41));
        timeEdit_dureeD_act = new QTimeEdit(AjouterActivite);
        timeEdit_dureeD_act->setObjectName(QStringLiteral("timeEdit_dureeD_act"));
        timeEdit_dureeD_act->setGeometry(QRect(160, 120, 118, 22));
        timeEdit_dureeF_act = new QTimeEdit(AjouterActivite);
        timeEdit_dureeF_act->setObjectName(QStringLiteral("timeEdit_dureeF_act"));
        timeEdit_dureeF_act->setGeometry(QRect(320, 120, 118, 22));
        timeEdit_tempsAct = new QTimeEdit(AjouterActivite);
        timeEdit_tempsAct->setObjectName(QStringLiteral("timeEdit_tempsAct"));
        timeEdit_tempsAct->setGeometry(QRect(160, 160, 118, 22));
        dateEdit_dateeAct = new QDateEdit(AjouterActivite);
        dateEdit_dateeAct->setObjectName(QStringLiteral("dateEdit_dateeAct"));
        dateEdit_dateeAct->setGeometry(QRect(160, 200, 110, 22));
        comboBox_enfantId = new QComboBox(AjouterActivite);
        comboBox_enfantId->setObjectName(QStringLiteral("comboBox_enfantId"));
        comboBox_enfantId->setGeometry(QRect(160, 280, 69, 22));
        pb_ajouter_activite = new QPushButton(AjouterActivite);
        pb_ajouter_activite->setObjectName(QStringLiteral("pb_ajouter_activite"));
        pb_ajouter_activite->setGeometry(QRect(360, 290, 94, 30));
        tabWidget_6->addTab(AjouterActivite, QString());
        AfficherActivite = new QWidget();
        AfficherActivite->setObjectName(QStringLiteral("AfficherActivite"));
        pushButton_ModifAct = new QPushButton(AfficherActivite);
        pushButton_ModifAct->setObjectName(QStringLiteral("pushButton_ModifAct"));
        pushButton_ModifAct->setGeometry(QRect(160, 280, 94, 30));
        pushButton_suppAct = new QPushButton(AfficherActivite);
        pushButton_suppAct->setObjectName(QStringLiteral("pushButton_suppAct"));
        pushButton_suppAct->setGeometry(QRect(260, 280, 94, 30));
        pushButton_exportAct = new QPushButton(AfficherActivite);
        pushButton_exportAct->setObjectName(QStringLiteral("pushButton_exportAct"));
        pushButton_exportAct->setGeometry(QRect(360, 280, 94, 30));
        pushButton_ExportExcelAct = new QPushButton(AfficherActivite);
        pushButton_ExportExcelAct->setObjectName(QStringLiteral("pushButton_ExportExcelAct"));
        pushButton_ExportExcelAct->setGeometry(QRect(474, 280, 101, 30));
        pushButton_triDateAct = new QPushButton(AfficherActivite);
        pushButton_triDateAct->setObjectName(QStringLiteral("pushButton_triDateAct"));
        pushButton_triDateAct->setGeometry(QRect(590, 280, 94, 30));
        tableWidget_activite = new QTableWidget(AfficherActivite);
        tableWidget_activite->setObjectName(QStringLiteral("tableWidget_activite"));
        tableWidget_activite->setGeometry(QRect(30, 60, 381, 192));
        textBrowser_activite = new QTextBrowser(AfficherActivite);
        textBrowser_activite->setObjectName(QStringLiteral("textBrowser_activite"));
        textBrowser_activite->setGeometry(QRect(565, 60, 131, 192));
        lineEdit_rechercheAct = new QLineEdit(AfficherActivite);
        lineEdit_rechercheAct->setObjectName(QStringLiteral("lineEdit_rechercheAct"));
        lineEdit_rechercheAct->setGeometry(QRect(170, 20, 113, 20));
        tabWidget_6->addTab(AfficherActivite, QString());
        tabWidget_2->addTab(Activite, QString());
        pb_back1 = new QPushButton(page_2);
        pb_back1->setObjectName(QStringLiteral("pb_back1"));
        pb_back1->setGeometry(QRect(50, 480, 131, 31));
        stackedWidget->addWidget(page_2);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        tabWidget = new QTabWidget(page);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 871, 521));
        tabWidget->setStyleSheet(QLatin1String("*{\n"
"font-family:century gothic;\n"
"font-size:15px;\n"
"/*background-color:#ffffee;*/\n"
"/*background:transparent;*/\n"
"font-style:black;\n"
"background-color:rgba(255,255,255,0.6);\n"
"}\n"
"#MainWindow{\n"
"	border-image: url(:/bg/back.png);\n"
"}\n"
"QFrame{\n"
"background:rgb(191, 77, 240);\n"
"border-radius:15px;\n"
"}\n"
"QComboBox{\n"
"border:none;\n"
"border-bottom:1px solid #bf4df0;\n"
"}\n"
"QComboBox::hover{\n"
"background: rgba(191, 77, 240,0.7);\n"
"}\n"
"QPushButton{\n"
"background:  rgba(191, 77, 240,0.7);\n"
"border-radius:20px;\n"
"border-radius:15px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background: rgba(191, 77, 240,0.9);\n"
"color:white;\n"
"}\n"
"\n"
"QToolButton{\n"
"background:  white;\n"
"border-radius:50px;\n"
"}\n"
"QLabel{\n"
"color: #000000;\n"
"background:transparent;\n"
"border: none;\n"
"}\n"
"QLineEdit{\n"
"background:transparent;\n"
"border:none;\n"
"border-bottom:1px solid #bf4df0;\n"
"}\n"
"\n"
"/*#ajout,#stat,#tab,#tab_30,#tab_31,#tab_32,#tab_33,#tab_39,#tab_40,#tab_41,"
                        "#tab_42,#tab_43,#tab_36,#tab_37,#tab_38,#tab_34,#tab_35{\n"
"background-color: #FFF5BD;\n"
"}\n"
"#afficher,#modifier,#tab_19{\n"
"background-color: #FFF5BD;\n"
"}\n"
"#tab_3,#tab_4,#tab_5,#tab_6,#tab_7,#tab_8,#tab_9,#tab_10,#tab_11,#tab_12,#tab_13,#tab_14,#tab_15{\n"
"background-color: #FFF5BD;\n"
"}\n"
"#tab_16,#tab_17,#tab_18,#tab_20,#tab_21,#tab_22,#tab_23{\n"
"background-color: #FFF5BD;\n"
"}\n"
"#statis,#ajout_2,#tab_24,#tab_25,#tab_26,#tab_27,#tab_28,#tab_29{\n"
"background-color: #FFF5BD;\n"
"}\n"
"#supprimer1,#supprimer1_2,#afficher_2,#modifier_2,#Commandes{\n"
"background-color: #FFF5BD;\n"
"}*/\n"
"\n"
"QTabWidget::pane {\n"
"    	border-top: 1px solid rgba(255,255,255,0.6);\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"   background-color:rgba(255,255,255,0.6);\n"
" 	border-style: outset;\n"
"	border-width: 1px;\n"
"	border-right-color: qlineargradient(spread:pad, x1:0.4, y1:0.5, x2:0.6, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-left-color: qlineargradient(spread:pad, "
                        "x1:0.6, y1:0.5, x2:0.4, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"    border-bottom-color: rgb(58, 58, 58);\n"
"	border-bottom-width: 1px;\n"
"	border-top-width: 0px;\n"
"	border-style: solid;\n"
"    color: rgb(87, 232, 235);\n"
"	padding: 4px;\n"
"    font-style: #000000;\n"
"}\n"
"\n"
"QTabBar::tab:selected, QTabBar::tab:hover {\n"
"   color:rgba(191, 77, 240,0.7);\n"
"   border-color:rgb(42, 42, 42);\n"
"   margin-left: 0px;\n"
"   margin-right: 0px;\n"
"   border-bottom-right-radius:4px;\n"
"   border-bottom-left-radius:4px;\n"
"   font-style: #000000;\n"
"}\n"
"\n"
"QTabBar::tab:last:selected {\n"
"  \n"
"	border-color:rgba(191, 77, 240,0.7);\n"
"	margin-left: 0px;\n"
"  	margin-right: 0px;\n"
"	border-bottom-right-radius:4px;\n"
"	border-bottom-left-radius:4px;\n"
"}\n"
"\n"
"QTabBar::tab:!selected {\n"
"   margin-bottom: 4px;\n"
"   border-bottom-right-radius:4px;\n"
"   border-bottom-left-radius:4px;\n"
"}"));
        Parent = new QWidget();
        Parent->setObjectName(QStringLiteral("Parent"));
        tabWidget_3 = new QTabWidget(Parent);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(30, 30, 721, 361));
        AjouterParent = new QWidget();
        AjouterParent->setObjectName(QStringLiteral("AjouterParent"));
        label = new QLabel(AjouterParent);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 30, 47, 13));
        label_2 = new QLabel(AjouterParent);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 60, 47, 13));
        label_3 = new QLabel(AjouterParent);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 90, 47, 13));
        label_4 = new QLabel(AjouterParent);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 120, 47, 13));
        label_5 = new QLabel(AjouterParent);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(60, 150, 47, 13));
        label_6 = new QLabel(AjouterParent);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(60, 190, 47, 13));
        le_matricule_parents = new QLineEdit(AjouterParent);
        le_matricule_parents->setObjectName(QStringLiteral("le_matricule_parents"));
        le_matricule_parents->setGeometry(QRect(160, 30, 113, 20));
        le_nom_parents = new QLineEdit(AjouterParent);
        le_nom_parents->setObjectName(QStringLiteral("le_nom_parents"));
        le_nom_parents->setGeometry(QRect(160, 60, 113, 20));
        le_prenom_parents = new QLineEdit(AjouterParent);
        le_prenom_parents->setObjectName(QStringLiteral("le_prenom_parents"));
        le_prenom_parents->setGeometry(QRect(160, 90, 113, 20));
        le_mail_parents = new QLineEdit(AjouterParent);
        le_mail_parents->setObjectName(QStringLiteral("le_mail_parents"));
        le_mail_parents->setGeometry(QRect(160, 120, 113, 20));
        le_adresse_parents = new QLineEdit(AjouterParent);
        le_adresse_parents->setObjectName(QStringLiteral("le_adresse_parents"));
        le_adresse_parents->setGeometry(QRect(160, 150, 113, 20));
        le_numero_parents = new QLineEdit(AjouterParent);
        le_numero_parents->setObjectName(QStringLiteral("le_numero_parents"));
        le_numero_parents->setGeometry(QRect(160, 180, 113, 20));
        pb_ajouter_parents = new QPushButton(AjouterParent);
        pb_ajouter_parents->setObjectName(QStringLiteral("pb_ajouter_parents"));
        pb_ajouter_parents->setGeometry(QRect(370, 240, 75, 23));
        tabWidget_3->addTab(AjouterParent, QString());
        AfficherParent = new QWidget();
        AfficherParent->setObjectName(QStringLiteral("AfficherParent"));
        tableView_afficherParents = new QTableView(AfficherParent);
        tableView_afficherParents->setObjectName(QStringLiteral("tableView_afficherParents"));
        tableView_afficherParents->setGeometry(QRect(30, 20, 371, 211));
        le_prenom_parents_2 = new QLineEdit(AfficherParent);
        le_prenom_parents_2->setObjectName(QStringLiteral("le_prenom_parents_2"));
        le_prenom_parents_2->setGeometry(QRect(520, 90, 113, 20));
        le_adresse_parents_2 = new QLineEdit(AfficherParent);
        le_adresse_parents_2->setObjectName(QStringLiteral("le_adresse_parents_2"));
        le_adresse_parents_2->setGeometry(QRect(520, 150, 113, 20));
        label_7 = new QLabel(AfficherParent);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(420, 190, 47, 13));
        label_8 = new QLabel(AfficherParent);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(420, 30, 47, 13));
        label_9 = new QLabel(AfficherParent);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(420, 120, 47, 13));
        label_10 = new QLabel(AfficherParent);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(420, 90, 47, 13));
        le_matricule_parents_2 = new QLineEdit(AfficherParent);
        le_matricule_parents_2->setObjectName(QStringLiteral("le_matricule_parents_2"));
        le_matricule_parents_2->setGeometry(QRect(520, 30, 113, 20));
        le_nom_parents_2 = new QLineEdit(AfficherParent);
        le_nom_parents_2->setObjectName(QStringLiteral("le_nom_parents_2"));
        le_nom_parents_2->setGeometry(QRect(520, 60, 113, 20));
        label_11 = new QLabel(AfficherParent);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(420, 60, 47, 13));
        le_mail_parents_2 = new QLineEdit(AfficherParent);
        le_mail_parents_2->setObjectName(QStringLiteral("le_mail_parents_2"));
        le_mail_parents_2->setGeometry(QRect(520, 120, 113, 20));
        label_12 = new QLabel(AfficherParent);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(420, 150, 47, 13));
        le_numero_parents_2 = new QLineEdit(AfficherParent);
        le_numero_parents_2->setObjectName(QStringLiteral("le_numero_parents_2"));
        le_numero_parents_2->setGeometry(QRect(520, 180, 113, 20));
        pb_actualiser_parents = new QPushButton(AfficherParent);
        pb_actualiser_parents->setObjectName(QStringLiteral("pb_actualiser_parents"));
        pb_actualiser_parents->setGeometry(QRect(40, 250, 75, 23));
        pb_modifier_parents = new QPushButton(AfficherParent);
        pb_modifier_parents->setObjectName(QStringLiteral("pb_modifier_parents"));
        pb_modifier_parents->setGeometry(QRect(150, 250, 75, 23));
        pb_rechercherP = new QPushButton(AfficherParent);
        pb_rechercherP->setObjectName(QStringLiteral("pb_rechercherP"));
        pb_rechercherP->setGeometry(QRect(360, 250, 75, 23));
        pb_validerModifP = new QPushButton(AfficherParent);
        pb_validerModifP->setObjectName(QStringLiteral("pb_validerModifP"));
        pb_validerModifP->setGeometry(QRect(530, 210, 75, 23));
        rb_triNom_parent = new QRadioButton(AfficherParent);
        rb_triNom_parent->setObjectName(QStringLiteral("rb_triNom_parent"));
        rb_triNom_parent->setGeometry(QRect(490, 250, 82, 17));
        rb_triPrenom_parent = new QRadioButton(AfficherParent);
        rb_triPrenom_parent->setObjectName(QStringLiteral("rb_triPrenom_parent"));
        rb_triPrenom_parent->setGeometry(QRect(490, 280, 101, 17));
        rb_triNum_parent = new QRadioButton(AfficherParent);
        rb_triNum_parent->setObjectName(QStringLiteral("rb_triNum_parent"));
        rb_triNum_parent->setGeometry(QRect(490, 310, 111, 17));
        le_rechercheP = new QLineEdit(AfficherParent);
        le_rechercheP->setObjectName(QStringLiteral("le_rechercheP"));
        le_rechercheP->setGeometry(QRect(240, 250, 113, 20));
        pb_exportPDF_P = new QPushButton(AfficherParent);
        pb_exportPDF_P->setObjectName(QStringLiteral("pb_exportPDF_P"));
        pb_exportPDF_P->setGeometry(QRect(40, 290, 75, 23));
        tabWidget_3->addTab(AfficherParent, QString());
        SupprimerParent = new QWidget();
        SupprimerParent->setObjectName(QStringLiteral("SupprimerParent"));
        pb_supprimer_parents = new QPushButton(SupprimerParent);
        pb_supprimer_parents->setObjectName(QStringLiteral("pb_supprimer_parents"));
        pb_supprimer_parents->setGeometry(QRect(390, 80, 75, 23));
        label_13 = new QLabel(SupprimerParent);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(60, 80, 47, 13));
        le_parent_supp = new QLineEdit(SupprimerParent);
        le_parent_supp->setObjectName(QStringLiteral("le_parent_supp"));
        le_parent_supp->setGeometry(QRect(170, 80, 113, 20));
        tabWidget_3->addTab(SupprimerParent, QString());
        pb_back2_2 = new QPushButton(Parent);
        pb_back2_2->setObjectName(QStringLiteral("pb_back2_2"));
        pb_back2_2->setGeometry(QRect(40, 450, 111, 23));
        tabWidget->addTab(Parent, QString());
        Electromenager = new QWidget();
        Electromenager->setObjectName(QStringLiteral("Electromenager"));
        tabWidget_4 = new QTabWidget(Electromenager);
        tabWidget_4->setObjectName(QStringLiteral("tabWidget_4"));
        tabWidget_4->setGeometry(QRect(20, 30, 741, 401));
        AjouterElectromenager = new QWidget();
        AjouterElectromenager->setObjectName(QStringLiteral("AjouterElectromenager"));
        le_matricule_machine = new QLineEdit(AjouterElectromenager);
        le_matricule_machine->setObjectName(QStringLiteral("le_matricule_machine"));
        le_matricule_machine->setGeometry(QRect(150, 30, 113, 20));
        le_type_machine = new QLineEdit(AjouterElectromenager);
        le_type_machine->setObjectName(QStringLiteral("le_type_machine"));
        le_type_machine->setGeometry(QRect(150, 70, 113, 20));
        le_etat_machine = new QLineEdit(AjouterElectromenager);
        le_etat_machine->setObjectName(QStringLiteral("le_etat_machine"));
        le_etat_machine->setGeometry(QRect(150, 110, 113, 20));
        le_emplacement_machine = new QLineEdit(AjouterElectromenager);
        le_emplacement_machine->setObjectName(QStringLiteral("le_emplacement_machine"));
        le_emplacement_machine->setGeometry(QRect(150, 150, 113, 20));
        label_14 = new QLabel(AjouterElectromenager);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(40, 40, 47, 13));
        label_15 = new QLabel(AjouterElectromenager);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(40, 80, 47, 13));
        label_16 = new QLabel(AjouterElectromenager);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(40, 120, 47, 13));
        label_17 = new QLabel(AjouterElectromenager);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(40, 150, 71, 20));
        pb_ajouter_machine = new QPushButton(AjouterElectromenager);
        pb_ajouter_machine->setObjectName(QStringLiteral("pb_ajouter_machine"));
        pb_ajouter_machine->setGeometry(QRect(320, 190, 75, 23));
        tabWidget_4->addTab(AjouterElectromenager, QString());
        AfficherElectromenager = new QWidget();
        AfficherElectromenager->setObjectName(QStringLiteral("AfficherElectromenager"));
        label_18 = new QLabel(AfficherElectromenager);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(470, 170, 71, 20));
        label_19 = new QLabel(AfficherElectromenager);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(470, 60, 47, 13));
        label_20 = new QLabel(AfficherElectromenager);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(470, 140, 47, 13));
        le_emplacement_machine_2 = new QLineEdit(AfficherElectromenager);
        le_emplacement_machine_2->setObjectName(QStringLiteral("le_emplacement_machine_2"));
        le_emplacement_machine_2->setGeometry(QRect(580, 170, 113, 20));
        le_type_machine_2 = new QLineEdit(AfficherElectromenager);
        le_type_machine_2->setObjectName(QStringLiteral("le_type_machine_2"));
        le_type_machine_2->setGeometry(QRect(580, 90, 113, 20));
        le_etat_machine_2 = new QLineEdit(AfficherElectromenager);
        le_etat_machine_2->setObjectName(QStringLiteral("le_etat_machine_2"));
        le_etat_machine_2->setGeometry(QRect(580, 130, 113, 20));
        le_matricule_machine_2 = new QLineEdit(AfficherElectromenager);
        le_matricule_machine_2->setObjectName(QStringLiteral("le_matricule_machine_2"));
        le_matricule_machine_2->setGeometry(QRect(580, 50, 113, 20));
        label_21 = new QLabel(AfficherElectromenager);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(470, 100, 47, 13));
        tableView_afficherMachine = new QTableView(AfficherElectromenager);
        tableView_afficherMachine->setObjectName(QStringLiteral("tableView_afficherMachine"));
        tableView_afficherMachine->setGeometry(QRect(10, 20, 441, 231));
        pb_actualiser_machine = new QPushButton(AfficherElectromenager);
        pb_actualiser_machine->setObjectName(QStringLiteral("pb_actualiser_machine"));
        pb_actualiser_machine->setGeometry(QRect(50, 280, 75, 23));
        pb_modifier_machine = new QPushButton(AfficherElectromenager);
        pb_modifier_machine->setObjectName(QStringLiteral("pb_modifier_machine"));
        pb_modifier_machine->setGeometry(QRect(150, 280, 81, 23));
        pb_valider_modifM = new QPushButton(AfficherElectromenager);
        pb_valider_modifM->setObjectName(QStringLiteral("pb_valider_modifM"));
        pb_valider_modifM->setGeometry(QRect(600, 220, 75, 23));
        le_rechercheM = new QLineEdit(AfficherElectromenager);
        le_rechercheM->setObjectName(QStringLiteral("le_rechercheM"));
        le_rechercheM->setGeometry(QRect(260, 280, 113, 20));
        rb_triTypeM = new QRadioButton(AfficherElectromenager);
        rb_triTypeM->setObjectName(QStringLiteral("rb_triTypeM"));
        rb_triTypeM->setGeometry(QRect(510, 260, 82, 17));
        rb_triEtatM = new QRadioButton(AfficherElectromenager);
        rb_triEtatM->setObjectName(QStringLiteral("rb_triEtatM"));
        rb_triEtatM->setGeometry(QRect(510, 290, 82, 17));
        rb_triEmplacementM = new QRadioButton(AfficherElectromenager);
        rb_triEmplacementM->setObjectName(QStringLiteral("rb_triEmplacementM"));
        rb_triEmplacementM->setGeometry(QRect(510, 320, 121, 17));
        pb_exportPDF_M = new QPushButton(AfficherElectromenager);
        pb_exportPDF_M->setObjectName(QStringLiteral("pb_exportPDF_M"));
        pb_exportPDF_M->setGeometry(QRect(50, 310, 75, 23));
        pb_exportExcel_machine = new QPushButton(AfficherElectromenager);
        pb_exportExcel_machine->setObjectName(QStringLiteral("pb_exportExcel_machine"));
        pb_exportExcel_machine->setGeometry(QRect(150, 310, 81, 23));
        label_34 = new QLabel(AfficherElectromenager);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(390, 280, 71, 21));
        tabWidget_4->addTab(AfficherElectromenager, QString());
        SupprimerElectromenager = new QWidget();
        SupprimerElectromenager->setObjectName(QStringLiteral("SupprimerElectromenager"));
        le_machine_supp = new QLineEdit(SupprimerElectromenager);
        le_machine_supp->setObjectName(QStringLiteral("le_machine_supp"));
        le_machine_supp->setGeometry(QRect(180, 70, 113, 20));
        pb_supprimer_machine = new QPushButton(SupprimerElectromenager);
        pb_supprimer_machine->setObjectName(QStringLiteral("pb_supprimer_machine"));
        pb_supprimer_machine->setGeometry(QRect(320, 70, 75, 23));
        label_22 = new QLabel(SupprimerElectromenager);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(80, 70, 81, 16));
        tabWidget_4->addTab(SupprimerElectromenager, QString());
        pb_back2 = new QPushButton(Electromenager);
        pb_back2->setObjectName(QStringLiteral("pb_back2"));
        pb_back2->setGeometry(QRect(40, 450, 131, 31));
        tabWidget->addTab(Electromenager, QString());
        stackedWidget->addWidget(page);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        tabWidget_7 = new QTabWidget(page_5);
        tabWidget_7->setObjectName(QStringLiteral("tabWidget_7"));
        tabWidget_7->setGeometry(QRect(20, 0, 1001, 591));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget_8 = new QTabWidget(tab_3);
        tabWidget_8->setObjectName(QStringLiteral("tabWidget_8"));
        tabWidget_8->setGeometry(QRect(0, 60, 1011, 471));
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        lineEdit_matricule_tele = new QLineEdit(tab_7);
        lineEdit_matricule_tele->setObjectName(QStringLiteral("lineEdit_matricule_tele"));
        lineEdit_matricule_tele->setGeometry(QRect(170, 100, 113, 20));
        lineEdit_modele_tele = new QLineEdit(tab_7);
        lineEdit_modele_tele->setObjectName(QStringLiteral("lineEdit_modele_tele"));
        lineEdit_modele_tele->setGeometry(QRect(170, 220, 113, 20));
        label_35 = new QLabel(tab_7);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setGeometry(QRect(60, 100, 81, 20));
        label_36 = new QLabel(tab_7);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setGeometry(QRect(60, 220, 71, 16));
        comboBox_emplacement_tele = new QComboBox(tab_7);
        comboBox_emplacement_tele->setObjectName(QStringLiteral("comboBox_emplacement_tele"));
        comboBox_emplacement_tele->setGeometry(QRect(550, 100, 131, 31));
        etat_tele = new QComboBox(tab_7);
        etat_tele->setObjectName(QStringLiteral("etat_tele"));
        etat_tele->setGeometry(QRect(550, 210, 131, 31));
        label_37 = new QLabel(tab_7);
        label_37->setObjectName(QStringLiteral("label_37"));
        label_37->setGeometry(QRect(400, 100, 111, 31));
        label_38 = new QLabel(tab_7);
        label_38->setObjectName(QStringLiteral("label_38"));
        label_38->setGeometry(QRect(400, 220, 71, 21));
        timeEdit = new QTimeEdit(tab_7);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));
        timeEdit->setGeometry(QRect(170, 290, 118, 51));
        timeEdit->setStyleSheet(QLatin1String("background-color: rgb(233, 220, 255);\n"
"width: 100%;\n"
"  padding: 9px 20px;\n"
"  margin: 8px 0;\n"
"  display: inline-block;\n"
" border: 1px solid #55007f;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"  background: #ffffff;\n"
"  color: #121212;"));
        label_39 = new QLabel(tab_7);
        label_39->setObjectName(QStringLiteral("label_39"));
        label_39->setGeometry(QRect(60, 300, 91, 31));
        Ajout_tele = new QPushButton(tab_7);
        Ajout_tele->setObjectName(QStringLiteral("Ajout_tele"));
        Ajout_tele->setGeometry(QRect(810, 310, 131, 41));
        tabWidget_8->addTab(tab_7, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        tableView = new QTableView(tab_6);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(20, 110, 461, 311));
        tabWidget_9 = new QTabWidget(tab_6);
        tabWidget_9->setObjectName(QStringLiteral("tabWidget_9"));
        tabWidget_9->setGeometry(QRect(520, 0, 471, 491));
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        M_matricule = new QLineEdit(tab_9);
        M_matricule->setObjectName(QStringLiteral("M_matricule"));
        M_matricule->setGeometry(QRect(150, 120, 113, 20));
        M_modele = new QLineEdit(tab_9);
        M_modele->setObjectName(QStringLiteral("M_modele"));
        M_modele->setGeometry(QRect(150, 170, 113, 20));
        M_emplacement = new QComboBox(tab_9);
        M_emplacement->setObjectName(QStringLiteral("M_emplacement"));
        M_emplacement->setGeometry(QRect(150, 230, 121, 21));
        M_etat = new QComboBox(tab_9);
        M_etat->setObjectName(QStringLiteral("M_etat"));
        M_etat->setGeometry(QRect(150, 280, 121, 22));
        timeEdit_2 = new QTimeEdit(tab_9);
        timeEdit_2->setObjectName(QStringLiteral("timeEdit_2"));
        timeEdit_2->setGeometry(QRect(150, 340, 118, 22));
        Modifier_Television = new QPushButton(tab_9);
        Modifier_Television->setObjectName(QStringLiteral("Modifier_Television"));
        Modifier_Television->setGeometry(QRect(350, 240, 111, 41));
        label_45 = new QLabel(tab_9);
        label_45->setObjectName(QStringLiteral("label_45"));
        label_45->setGeometry(QRect(10, 130, 81, 20));
        label_46 = new QLabel(tab_9);
        label_46->setObjectName(QStringLiteral("label_46"));
        label_46->setGeometry(QRect(10, 180, 61, 20));
        label_47 = new QLabel(tab_9);
        label_47->setObjectName(QStringLiteral("label_47"));
        label_47->setGeometry(QRect(10, 220, 111, 21));
        label_48 = new QLabel(tab_9);
        label_48->setObjectName(QStringLiteral("label_48"));
        label_48->setGeometry(QRect(10, 280, 61, 16));
        label_49 = new QLabel(tab_9);
        label_49->setObjectName(QStringLiteral("label_49"));
        label_49->setGeometry(QRect(10, 340, 101, 21));
        tabWidget_9->addTab(tab_9, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QStringLiteral("tab_10"));
        pushButton_6 = new QPushButton(tab_10);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(280, 250, 131, 41));
        label_50 = new QLabel(tab_10);
        label_50->setObjectName(QStringLiteral("label_50"));
        label_50->setGeometry(QRect(20, 180, 81, 20));
        Sup_Matricule = new QLineEdit(tab_10);
        Sup_Matricule->setObjectName(QStringLiteral("Sup_Matricule"));
        Sup_Matricule->setGeometry(QRect(120, 180, 113, 20));
        tabWidget_9->addTab(tab_10, QString());
        comboBox_Trie = new QComboBox(tab_6);
        comboBox_Trie->setObjectName(QStringLiteral("comboBox_Trie"));
        comboBox_Trie->setGeometry(QRect(40, 10, 111, 31));
        Tele_up = new QRadioButton(tab_6);
        Tele_up->setObjectName(QStringLiteral("Tele_up"));
        Tele_up->setGeometry(QRect(280, 0, 82, 17));
        Tele_down = new QRadioButton(tab_6);
        Tele_down->setObjectName(QStringLiteral("Tele_down"));
        Tele_down->setGeometry(QRect(280, 20, 82, 17));
        Trie_television = new QPushButton(tab_6);
        Trie_television->setObjectName(QStringLiteral("Trie_television"));
        Trie_television->setGeometry(QRect(170, 10, 91, 31));
        pushButton_8 = new QPushButton(tab_6);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(380, 70, 91, 31));
        pushButton_8->setStyleSheet(QLatin1String("QPushButton {\n"
"	font: 87 8pt \"Segoe UI Black\";\n"
"color: #dcdcdc;\n"
"background:#778899;\n"
"border: none;\n"
"border: 1px solid #DCDCDC;\n"
"border-radius: 8px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"color:#fff;\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"background:#ADD8E6;\n"
"border: none;\n"
"}"));
        tabWidget_8->addTab(tab_6, QString());
        Retoure_Menue = new QPushButton(tab_3);
        Retoure_Menue->setObjectName(QStringLiteral("Retoure_Menue"));
        Retoure_Menue->setGeometry(QRect(30, 490, 191, 41));
        label_62 = new QLabel(tab_3);
        label_62->setObjectName(QStringLiteral("label_62"));
        label_62->setGeometry(QRect(700, 0, 281, 71));
        tabWidget_7->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tabWidget_10 = new QTabWidget(tab_4);
        tabWidget_10->setObjectName(QStringLiteral("tabWidget_10"));
        tabWidget_10->setGeometry(QRect(0, 50, 1001, 461));
        tab_11 = new QWidget();
        tab_11->setObjectName(QStringLiteral("tab_11"));
        lineEdit_MT = new QLineEdit(tab_11);
        lineEdit_MT->setObjectName(QStringLiteral("lineEdit_MT"));
        lineEdit_MT->setGeometry(QRect(200, 120, 113, 20));
        comboBox_EmT = new QComboBox(tab_11);
        comboBox_EmT->setObjectName(QStringLiteral("comboBox_EmT"));
        comboBox_EmT->setGeometry(QRect(550, 130, 131, 22));
        comboBox_EtT = new QComboBox(tab_11);
        comboBox_EtT->setObjectName(QStringLiteral("comboBox_EtT"));
        comboBox_EtT->setGeometry(QRect(550, 230, 131, 22));
        lineEdit_Temp = new QLineEdit(tab_11);
        lineEdit_Temp->setObjectName(QStringLiteral("lineEdit_Temp"));
        lineEdit_Temp->setGeometry(QRect(200, 220, 113, 20));
        label_51 = new QLabel(tab_11);
        label_51->setObjectName(QStringLiteral("label_51"));
        label_51->setGeometry(QRect(90, 130, 91, 21));
        label_52 = new QLabel(tab_11);
        label_52->setObjectName(QStringLiteral("label_52"));
        label_52->setGeometry(QRect(90, 230, 101, 21));
        Ajouter_Thermometre = new QPushButton(tab_11);
        Ajouter_Thermometre->setObjectName(QStringLiteral("Ajouter_Thermometre"));
        Ajouter_Thermometre->setGeometry(QRect(774, 342, 141, 41));
        label_58 = new QLabel(tab_11);
        label_58->setObjectName(QStringLiteral("label_58"));
        label_58->setGeometry(QRect(410, 120, 111, 31));
        label_59 = new QLabel(tab_11);
        label_59->setObjectName(QStringLiteral("label_59"));
        label_59->setGeometry(QRect(410, 230, 61, 16));
        tabWidget_10->addTab(tab_11, QString());
        tab_12 = new QWidget();
        tab_12->setObjectName(QStringLiteral("tab_12"));
        tableView_Thermo = new QTableView(tab_12);
        tableView_Thermo->setObjectName(QStringLiteral("tableView_Thermo"));
        tableView_Thermo->setGeometry(QRect(30, 70, 381, 341));
        tabWidget_11 = new QTabWidget(tab_12);
        tabWidget_11->setObjectName(QStringLiteral("tabWidget_11"));
        tabWidget_11->setGeometry(QRect(450, 70, 531, 361));
        tab_13 = new QWidget();
        tab_13->setObjectName(QStringLiteral("tab_13"));
        lineEdit_ModM = new QLineEdit(tab_13);
        lineEdit_ModM->setObjectName(QStringLiteral("lineEdit_ModM"));
        lineEdit_ModM->setGeometry(QRect(160, 70, 113, 20));
        Tmp_Thermo = new QLineEdit(tab_13);
        Tmp_Thermo->setObjectName(QStringLiteral("Tmp_Thermo"));
        Tmp_Thermo->setGeometry(QRect(160, 280, 113, 20));
        comboBox_Mod_EmpT = new QComboBox(tab_13);
        comboBox_Mod_EmpT->setObjectName(QStringLiteral("comboBox_Mod_EmpT"));
        comboBox_Mod_EmpT->setGeometry(QRect(160, 140, 111, 22));
        comboBox_Mod_EtaT = new QComboBox(tab_13);
        comboBox_Mod_EtaT->setObjectName(QStringLiteral("comboBox_Mod_EtaT"));
        comboBox_Mod_EtaT->setGeometry(QRect(160, 220, 111, 22));
        label_53 = new QLabel(tab_13);
        label_53->setObjectName(QStringLiteral("label_53"));
        label_53->setGeometry(QRect(20, 70, 81, 20));
        label_54 = new QLabel(tab_13);
        label_54->setObjectName(QStringLiteral("label_54"));
        label_54->setGeometry(QRect(20, 140, 111, 20));
        label_55 = new QLabel(tab_13);
        label_55->setObjectName(QStringLiteral("label_55"));
        label_55->setGeometry(QRect(20, 220, 61, 16));
        label_56 = new QLabel(tab_13);
        label_56->setObjectName(QStringLiteral("label_56"));
        label_56->setGeometry(QRect(20, 290, 101, 20));
        Modifier_Thermo = new QPushButton(tab_13);
        Modifier_Thermo->setObjectName(QStringLiteral("Modifier_Thermo"));
        Modifier_Thermo->setGeometry(QRect(360, 210, 111, 41));
        tabWidget_11->addTab(tab_13, QString());
        tab_14 = new QWidget();
        tab_14->setObjectName(QStringLiteral("tab_14"));
        pushButton_10 = new QPushButton(tab_14);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(340, 250, 111, 31));
        label_57 = new QLabel(tab_14);
        label_57->setObjectName(QStringLiteral("label_57"));
        label_57->setGeometry(QRect(40, 200, 81, 20));
        Sup_thermo = new QLineEdit(tab_14);
        Sup_thermo->setObjectName(QStringLiteral("Sup_thermo"));
        Sup_thermo->setGeometry(QRect(150, 190, 113, 20));
        tabWidget_11->addTab(tab_14, QString());
        Trie_Thermometre = new QPushButton(tab_12);
        Trie_Thermometre->setObjectName(QStringLiteral("Trie_Thermometre"));
        Trie_Thermometre->setGeometry(QRect(154, 20, 81, 31));
        Trie_thermo = new QComboBox(tab_12);
        Trie_thermo->setObjectName(QStringLiteral("Trie_thermo"));
        Trie_thermo->setGeometry(QRect(70, 20, 69, 31));
        radioButton_Thermo = new QRadioButton(tab_12);
        radioButton_Thermo->setObjectName(QStringLiteral("radioButton_Thermo"));
        radioButton_Thermo->setGeometry(QRect(280, 20, 82, 17));
        radioButtonn_Thermo = new QRadioButton(tab_12);
        radioButtonn_Thermo->setObjectName(QStringLiteral("radioButtonn_Thermo"));
        radioButtonn_Thermo->setGeometry(QRect(280, 40, 82, 17));
        comboBox_R = new QComboBox(tab_12);
        comboBox_R->setObjectName(QStringLiteral("comboBox_R"));
        comboBox_R->setGeometry(QRect(730, 40, 61, 22));
        Recherche_Thermo = new QLineEdit(tab_12);
        Recherche_Thermo->setObjectName(QStringLiteral("Recherche_Thermo"));
        Recherche_Thermo->setGeometry(QRect(810, 40, 71, 20));
        Recherche_Thermometre = new QPushButton(tab_12);
        Recherche_Thermometre->setObjectName(QStringLiteral("Recherche_Thermometre"));
        Recherche_Thermometre->setGeometry(QRect(900, 40, 91, 31));
        tabWidget_10->addTab(tab_12, QString());
        tab_15 = new QWidget();
        tab_15->setObjectName(QStringLiteral("tab_15"));
        lineEdit = new QLineEdit(tab_15);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(140, 250, 113, 20));
        pushButton_7 = new QPushButton(tab_15);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(280, 240, 111, 41));
        label_60 = new QLabel(tab_15);
        label_60->setObjectName(QStringLiteral("label_60"));
        label_60->setGeometry(QRect(50, 260, 81, 21));
        QFont font;
        font.setFamily(QStringLiteral("century gothic"));
        label_60->setFont(font);
        label_61 = new QLabel(tab_15);
        label_61->setObjectName(QStringLiteral("label_61"));
        label_61->setGeometry(QRect(540, 60, 191, 71));
        QFont font1;
        font1.setFamily(QStringLiteral("century gothic"));
        font1.setBold(false);
        font1.setWeight(50);
        label_61->setFont(font1);
        lcdNumber = new QLCDNumber(tab_15);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(730, 70, 181, 51));
        tabWidget_10->addTab(tab_15, QString());
        Retouraumenu = new QPushButton(tab_4);
        Retouraumenu->setObjectName(QStringLiteral("Retouraumenu"));
        Retouraumenu->setGeometry(QRect(0, 490, 161, 41));
        time = new QLabel(tab_4);
        time->setObjectName(QStringLiteral("time"));
        time->setGeometry(QRect(660, 10, 271, 41));
        time->setFont(font);
        tabWidget_7->addTab(tab_4, QString());
        stackedWidget->addWidget(page_5);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        groupBox = new QGroupBox(page_3);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(80, 50, 811, 491));
        groupBox->setStyleSheet(QLatin1String("*{\n"
"font-family:century gothic;\n"
"font-size:15px;\n"
"/*background-color:#ffffee;*/\n"
"/*background:transparent;*/\n"
"font-style:black;\n"
"background-color:rgba(255,255,255,0.6);\n"
"}\n"
"#MainWindow{\n"
"	border-image: url(:/bg/back.png);\n"
"}\n"
"QFrame{\n"
"background:rgb(191, 77, 240);\n"
"border-radius:15px;\n"
"}\n"
"QComboBox{\n"
"border:none;\n"
"border-bottom:1px solid #bf4df0;\n"
"}\n"
"QComboBox::hover{\n"
"background: rgba(191, 77, 240,0.7);\n"
"}\n"
"QPushButton{\n"
"background:  rgba(191, 77, 240,0.7);\n"
"border-radius:20px;\n"
"border-radius:15px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background: rgba(191, 77, 240,0.9);\n"
"color:white;\n"
"}\n"
"\n"
"QToolButton{\n"
"background:  white;\n"
"border-radius:50px;\n"
"}\n"
"QLabel{\n"
"color: #000000;\n"
"background:transparent;\n"
"border: none;\n"
"}\n"
"QLineEdit{\n"
"background:transparent;\n"
"border:none;\n"
"border-bottom:1px solid #bf4df0;\n"
"}\n"
"\n"
"/*#ajout,#stat,#tab,#tab_30,#tab_31,#tab_32,#tab_33,#tab_39,#tab_40,#tab_41,"
                        "#tab_42,#tab_43,#tab_36,#tab_37,#tab_38,#tab_34,#tab_35{\n"
"background-color: #FFF5BD;\n"
"}\n"
"#afficher,#modifier,#tab_19{\n"
"background-color: #FFF5BD;\n"
"}\n"
"#tab_3,#tab_4,#tab_5,#tab_6,#tab_7,#tab_8,#tab_9,#tab_10,#tab_11,#tab_12,#tab_13,#tab_14,#tab_15{\n"
"background-color: #FFF5BD;\n"
"}\n"
"#tab_16,#tab_17,#tab_18,#tab_20,#tab_21,#tab_22,#tab_23{\n"
"background-color: #FFF5BD;\n"
"}\n"
"#statis,#ajout_2,#tab_24,#tab_25,#tab_26,#tab_27,#tab_28,#tab_29{\n"
"background-color: #FFF5BD;\n"
"}\n"
"#supprimer1,#supprimer1_2,#afficher_2,#modifier_2,#Commandes{\n"
"background-color: #FFF5BD;\n"
"}*/\n"
"\n"
"QTabWidget::pane {\n"
"    	border-top: 1px solid rgba(255,255,255,0.6);\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"   background-color:rgba(255,255,255,0.6);\n"
" 	border-style: outset;\n"
"	border-width: 1px;\n"
"	border-right-color: qlineargradient(spread:pad, x1:0.4, y1:0.5, x2:0.6, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-left-color: qlineargradient(spread:pad, "
                        "x1:0.6, y1:0.5, x2:0.4, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"    border-bottom-color: rgb(58, 58, 58);\n"
"	border-bottom-width: 1px;\n"
"	border-top-width: 0px;\n"
"	border-style: solid;\n"
"    color: rgb(87, 232, 235);\n"
"	padding: 4px;\n"
"    font-style: #000000;\n"
"}\n"
"\n"
"QTabBar::tab:selected, QTabBar::tab:hover {\n"
"   color:rgba(191, 77, 240,0.7);\n"
"   border-color:rgb(42, 42, 42);\n"
"   margin-left: 0px;\n"
"   margin-right: 0px;\n"
"   border-bottom-right-radius:4px;\n"
"   border-bottom-left-radius:4px;\n"
"   font-style: #000000;\n"
"}\n"
"\n"
"QTabBar::tab:last:selected {\n"
"  \n"
"	border-color:rgba(191, 77, 240,0.7);\n"
"	margin-left: 0px;\n"
"  	margin-right: 0px;\n"
"	border-bottom-right-radius:4px;\n"
"	border-bottom-left-radius:4px;\n"
"}\n"
"\n"
"QTabBar::tab:!selected {\n"
"   margin-bottom: 4px;\n"
"   border-bottom-right-radius:4px;\n"
"   border-bottom-left-radius:4px;\n"
"}"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 100, 291, 23));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(40, 140, 291, 23));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(40, 180, 291, 23));
        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(40, 220, 291, 23));
        Gestion_Thermo_Tele = new QPushButton(groupBox);
        Gestion_Thermo_Tele->setObjectName(QStringLiteral("Gestion_Thermo_Tele"));
        Gestion_Thermo_Tele->setGeometry(QRect(40, 260, 291, 23));
        pushButton->raise();
        pushButton_2->raise();
        pushButton_4->raise();
        Gestion_Thermo_Tele->raise();
        pushButton_3->raise();
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        stackedWidget->addWidget(page_4);
        site_ordinateur = new QWidget();
        site_ordinateur->setObjectName(QStringLiteral("site_ordinateur"));
        main_tab = new QTabWidget(site_ordinateur);
        main_tab->setObjectName(QStringLiteral("main_tab"));
        main_tab->setGeometry(QRect(0, 0, 1071, 671));
        main_tab->setStyleSheet(QLatin1String("*{\n"
"font-family:century gothic;\n"
"font-size:15px;\n"
"/*background-color:#ffffee;*/\n"
"/*background:transparent;*/\n"
"font-style:black;\n"
"background-color:rgba(255,255,255,0.6);\n"
"}\n"
"#MainWindow{\n"
"	border-image: url(:/bg/back.png);\n"
"}\n"
"QFrame{\n"
"background:rgb(191, 77, 240);\n"
"border-radius:15px;\n"
"}\n"
"QComboBox{\n"
"border:none;\n"
"border-bottom:1px solid #bf4df0;\n"
"}\n"
"QComboBox::hover{\n"
"background: rgba(191, 77, 240,0.7);\n"
"}\n"
"QPushButton{\n"
"background:  rgba(191, 77, 240,0.7);\n"
"border-radius:20px;\n"
"border-radius:15px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background: rgba(191, 77, 240,0.9);\n"
"color:white;\n"
"}\n"
"\n"
"QToolButton{\n"
"background:  white;\n"
"border-radius:50px;\n"
"}\n"
"QLabel{\n"
"color: #000000;\n"
"background:transparent;\n"
"border: none;\n"
"}\n"
"QLineEdit{\n"
"background:transparent;\n"
"border:none;\n"
"border-bottom:1px solid #bf4df0;\n"
"}\n"
"\n"
"/*#ajout,#stat,#tab,#tab_30,#tab_31,#tab_32,#tab_33,#tab_39,#tab_40,#tab_41,"
                        "#tab_42,#tab_43,#tab_36,#tab_37,#tab_38,#tab_34,#tab_35{\n"
"background-color: #FFF5BD;\n"
"}\n"
"#afficher,#modifier,#tab_19{\n"
"background-color: #FFF5BD;\n"
"}\n"
"#tab_3,#tab_4,#tab_5,#tab_6,#tab_7,#tab_8,#tab_9,#tab_10,#tab_11,#tab_12,#tab_13,#tab_14,#tab_15{\n"
"background-color: #FFF5BD;\n"
"}\n"
"#tab_16,#tab_17,#tab_18,#tab_20,#tab_21,#tab_22,#tab_23{\n"
"background-color: #FFF5BD;\n"
"}\n"
"#statis,#ajout_2,#tab_24,#tab_25,#tab_26,#tab_27,#tab_28,#tab_29{\n"
"background-color: #FFF5BD;\n"
"}\n"
"#supprimer1,#supprimer1_2,#afficher_2,#modifier_2,#Commandes{\n"
"background-color: #FFF5BD;\n"
"}*/\n"
"\n"
"QTabWidget::pane {\n"
"    	border-top: 1px solid rgba(255,255,255,0.6);\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"   background-color:rgba(255,255,255,0.6);\n"
" 	border-style: outset;\n"
"	border-width: 1px;\n"
"	border-right-color: qlineargradient(spread:pad, x1:0.4, y1:0.5, x2:0.6, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-left-color: qlineargradient(spread:pad, "
                        "x1:0.6, y1:0.5, x2:0.4, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"    border-bottom-color: rgb(58, 58, 58);\n"
"	border-bottom-width: 1px;\n"
"	border-top-width: 0px;\n"
"	border-style: solid;\n"
"    color: rgb(87, 232, 235);\n"
"	padding: 4px;\n"
"    font-style: #000000;\n"
"}\n"
"\n"
"QTabBar::tab:selected, QTabBar::tab:hover {\n"
"   color:rgba(191, 77, 240,0.7);\n"
"   border-color:rgb(42, 42, 42);\n"
"   margin-left: 0px;\n"
"   margin-right: 0px;\n"
"   border-bottom-right-radius:4px;\n"
"   border-bottom-left-radius:4px;\n"
"   font-style: #000000;\n"
"}\n"
"\n"
"QTabBar::tab:last:selected {\n"
"  \n"
"	border-color:rgba(191, 77, 240,0.7);\n"
"	margin-left: 0px;\n"
"  	margin-right: 0px;\n"
"	border-bottom-right-radius:4px;\n"
"	border-bottom-left-radius:4px;\n"
"}\n"
"\n"
"QTabBar::tab:!selected {\n"
"   margin-bottom: 4px;\n"
"   border-bottom-right-radius:4px;\n"
"   border-bottom-left-radius:4px;\n"
"}"));
        main_tab->setTabPosition(QTabWidget::West);
        site_2 = new QWidget();
        site_2->setObjectName(QStringLiteral("site_2"));
        afficher_site_tab_2 = new QTabWidget(site_2);
        afficher_site_tab_2->setObjectName(QStringLiteral("afficher_site_tab_2"));
        afficher_site_tab_2->setGeometry(QRect(0, 0, 1061, 661));
        afficher_site_tab_2->setMinimumSize(QSize(0, 441));
        afficher_site_tab_2->setMaximumSize(QSize(5567, 16777215));
        afficher_site_tab_2->setStyleSheet(QLatin1String("*{\n"
"font-family:century gothic;\n"
"font-size:15px;\n"
"/*background-color:#ffffee;*/\n"
"/*background:transparent;*/\n"
"font-style:black;\n"
"background-color:rgba(255,255,255,0.6);\n"
"}\n"
"#MainWindow{\n"
"	border-image: url(:/bg/back.png);\n"
"}\n"
"QFrame{\n"
"background:rgb(191, 77, 240);\n"
"border-radius:15px;\n"
"}\n"
"QComboBox{\n"
"border:none;\n"
"border-bottom:1px solid #bf4df0;\n"
"}\n"
"QComboBox::hover{\n"
"background: rgba(191, 77, 240,0.7);\n"
"}\n"
"QPushButton{\n"
"background:  rgba(191, 77, 240,0.7);\n"
"border-radius:20px;\n"
"border-radius:15px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background: rgba(191, 77, 240,0.9);\n"
"color:white;\n"
"}\n"
"\n"
"QToolButton{\n"
"background:  white;\n"
"border-radius:50px;\n"
"}\n"
"QLabel{\n"
"color: #000000;\n"
"background:transparent;\n"
"border: none;\n"
"}\n"
"QLineEdit{\n"
"background:transparent;\n"
"border:none;\n"
"border-bottom:1px solid #bf4df0;\n"
"}\n"
"\n"
"/*#ajout,#stat,#tab,#tab_30,#tab_31,#tab_32,#tab_33,#tab_39,#tab_40,#tab_41,"
                        "#tab_42,#tab_43,#tab_36,#tab_37,#tab_38,#tab_34,#tab_35{\n"
"background-color: #FFF5BD;\n"
"}\n"
"#afficher,#modifier,#tab_19{\n"
"background-color: #FFF5BD;\n"
"}\n"
"#tab_3,#tab_4,#tab_5,#tab_6,#tab_7,#tab_8,#tab_9,#tab_10,#tab_11,#tab_12,#tab_13,#tab_14,#tab_15{\n"
"background-color: #FFF5BD;\n"
"}\n"
"#tab_16,#tab_17,#tab_18,#tab_20,#tab_21,#tab_22,#tab_23{\n"
"background-color: #FFF5BD;\n"
"}\n"
"#statis,#ajout_2,#tab_24,#tab_25,#tab_26,#tab_27,#tab_28,#tab_29{\n"
"background-color: #FFF5BD;\n"
"}\n"
"#supprimer1,#supprimer1_2,#afficher_2,#modifier_2,#Commandes{\n"
"background-color: #FFF5BD;\n"
"}*/\n"
"\n"
"QTabWidget::pane {\n"
"    	border-top: 1px solid rgba(255,255,255,0.6);\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"   background-color:rgba(255,255,255,0.6);\n"
" 	border-style: outset;\n"
"	border-width: 1px;\n"
"	border-right-color: qlineargradient(spread:pad, x1:0.4, y1:0.5, x2:0.6, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-left-color: qlineargradient(spread:pad, "
                        "x1:0.6, y1:0.5, x2:0.4, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"    border-bottom-color: rgb(58, 58, 58);\n"
"	border-bottom-width: 1px;\n"
"	border-top-width: 0px;\n"
"	border-style: solid;\n"
"    color: rgb(87, 232, 235);\n"
"	padding: 4px;\n"
"    font-style: #000000;\n"
"}\n"
"\n"
"QTabBar::tab:selected, QTabBar::tab:hover {\n"
"   color:rgba(191, 77, 240,0.7);\n"
"   border-color:rgb(42, 42, 42);\n"
"   margin-left: 0px;\n"
"   margin-right: 0px;\n"
"   border-bottom-right-radius:4px;\n"
"   border-bottom-left-radius:4px;\n"
"   font-style: #000000;\n"
"}\n"
"\n"
"QTabBar::tab:last:selected {\n"
"  \n"
"	border-color:rgba(191, 77, 240,0.7);\n"
"	margin-left: 0px;\n"
"  	margin-right: 0px;\n"
"	border-bottom-right-radius:4px;\n"
"	border-bottom-left-radius:4px;\n"
"}\n"
"\n"
"QTabBar::tab:!selected {\n"
"   margin-bottom: 4px;\n"
"   border-bottom-right-radius:4px;\n"
"   border-bottom-left-radius:4px;\n"
"}"));
        ajouter_13 = new QWidget();
        ajouter_13->setObjectName(QStringLiteral("ajouter_13"));
        cadreajout_19 = new QGroupBox(ajouter_13);
        cadreajout_19->setObjectName(QStringLiteral("cadreajout_19"));
        cadreajout_19->setGeometry(QRect(10, 10, 851, 471));
        ID_28 = new QLabel(cadreajout_19);
        ID_28->setObjectName(QStringLiteral("ID_28"));
        ID_28->setGeometry(QRect(10, 40, 56, 16));
        ID_28->setMaximumSize(QSize(56, 16));
        Type_16 = new QLabel(cadreajout_19);
        Type_16->setObjectName(QStringLiteral("Type_16"));
        Type_16->setGeometry(QRect(10, 70, 56, 16));
        Type_16->setMaximumSize(QSize(56, 16));
        Nom_14 = new QLabel(cadreajout_19);
        Nom_14->setObjectName(QStringLiteral("Nom_14"));
        Nom_14->setGeometry(QRect(10, 100, 56, 16));
        Nom_14->setMaximumSize(QSize(56, 16));
        le_id_site_2 = new QLineEdit(cadreajout_19);
        le_id_site_2->setObjectName(QStringLiteral("le_id_site_2"));
        le_id_site_2->setGeometry(QRect(190, 40, 113, 22));
        le_id_site_2->setMaximumSize(QSize(113, 22));
        le_type_site_2 = new QLineEdit(cadreajout_19);
        le_type_site_2->setObjectName(QStringLiteral("le_type_site_2"));
        le_type_site_2->setGeometry(QRect(190, 70, 113, 22));
        le_type_site_2->setMaximumSize(QSize(113, 22));
        le_nom_site_2 = new QLineEdit(cadreajout_19);
        le_nom_site_2->setObjectName(QStringLiteral("le_nom_site_2"));
        le_nom_site_2->setGeometry(QRect(190, 100, 113, 22));
        le_nom_site_2->setMaximumSize(QSize(113, 22));
        pb_ajouter_site_2 = new QPushButton(cadreajout_19);
        pb_ajouter_site_2->setObjectName(QStringLiteral("pb_ajouter_site_2"));
        pb_ajouter_site_2->setGeometry(QRect(390, 120, 93, 28));
        pb_ajouter_site_2->setMaximumSize(QSize(93, 28));
        pb_ajouter_site_2->setStyleSheet(QLatin1String("background-color: rgb(255, 85, 255);\n"
"border-color: rgb(170, 0, 255);"));
        le_adresse_site_2 = new QLineEdit(cadreajout_19);
        le_adresse_site_2->setObjectName(QStringLiteral("le_adresse_site_2"));
        le_adresse_site_2->setGeometry(QRect(190, 130, 113, 22));
        le_adresse_site_2->setMaximumSize(QSize(113, 22));
        adresse_14 = new QLabel(cadreajout_19);
        adresse_14->setObjectName(QStringLiteral("adresse_14"));
        adresse_14->setGeometry(QRect(10, 130, 56, 16));
        adresse_14->setMaximumSize(QSize(56, 16));
        nb_visite_11 = new QLabel(cadreajout_19);
        nb_visite_11->setObjectName(QStringLiteral("nb_visite_11"));
        nb_visite_11->setGeometry(QRect(10, 160, 91, 16));
        nb_visite_11->setMaximumSize(QSize(56222, 16));
        blockage_11 = new QLabel(cadreajout_19);
        blockage_11->setObjectName(QStringLiteral("blockage_11"));
        blockage_11->setGeometry(QRect(10, 190, 91, 31));
        blockage_11->setMaximumSize(QSize(56222, 16888));
        date_4 = new QLabel(cadreajout_19);
        date_4->setObjectName(QStringLiteral("date_4"));
        date_4->setGeometry(QRect(10, 230, 151, 16));
        date_4->setMaximumSize(QSize(56222, 16));
        temps_11 = new QLabel(cadreajout_19);
        temps_11->setObjectName(QStringLiteral("temps_11"));
        temps_11->setGeometry(QRect(10, 260, 201, 16));
        temps_11->setMaximumSize(QSize(56222, 16));
        le_blockage_site_2 = new QLineEdit(cadreajout_19);
        le_blockage_site_2->setObjectName(QStringLiteral("le_blockage_site_2"));
        le_blockage_site_2->setGeometry(QRect(190, 190, 113, 22));
        le_blockage_site_2->setMaximumSize(QSize(113, 22));
        le_temps_site_2 = new QLineEdit(cadreajout_19);
        le_temps_site_2->setObjectName(QStringLiteral("le_temps_site_2"));
        le_temps_site_2->setGeometry(QRect(190, 250, 113, 22));
        le_temps_site_2->setMaximumSize(QSize(113, 22));
        le_nb_site_2 = new QLineEdit(cadreajout_19);
        le_nb_site_2->setObjectName(QStringLiteral("le_nb_site_2"));
        le_nb_site_2->setGeometry(QRect(190, 160, 113, 22));
        le_nb_site_2->setMaximumSize(QSize(113, 22));
        le_date_site_2 = new QDateEdit(cadreajout_19);
        le_date_site_2->setObjectName(QStringLiteral("le_date_site_2"));
        le_date_site_2->setGeometry(QRect(190, 230, 110, 22));
        pb_back1_2 = new QPushButton(cadreajout_19);
        pb_back1_2->setObjectName(QStringLiteral("pb_back1_2"));
        pb_back1_2->setGeometry(QRect(250, 420, 351, 31));
        afficher_site_tab_2->addTab(ajouter_13, QString());
        afficher_13 = new QWidget();
        afficher_13->setObjectName(QStringLiteral("afficher_13"));
        affichercadre_13 = new QGroupBox(afficher_13);
        affichercadre_13->setObjectName(QStringLiteral("affichercadre_13"));
        affichercadre_13->setGeometry(QRect(10, 10, 1031, 571));
        tab_siteafficher_3 = new QTableView(affichercadre_13);
        tab_siteafficher_3->setObjectName(QStringLiteral("tab_siteafficher_3"));
        tab_siteafficher_3->setGeometry(QRect(15, 21, 1011, 541));
        afficher_site_tab_2->addTab(afficher_13, QString());
        modifier_13 = new QWidget();
        modifier_13->setObjectName(QStringLiteral("modifier_13"));
        groupBox_7 = new QGroupBox(modifier_13);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(10, 10, 951, 541));
        nom_modif_site_2 = new QLineEdit(groupBox_7);
        nom_modif_site_2->setObjectName(QStringLiteral("nom_modif_site_2"));
        nom_modif_site_2->setGeometry(QRect(420, 80, 113, 20));
        label_40 = new QLabel(groupBox_7);
        label_40->setObjectName(QStringLiteral("label_40"));
        label_40->setGeometry(QRect(220, 290, 141, 16));
        label_41 = new QLabel(groupBox_7);
        label_41->setObjectName(QStringLiteral("label_41"));
        label_41->setGeometry(QRect(220, 50, 171, 21));
        label_42 = new QLabel(groupBox_7);
        label_42->setObjectName(QStringLiteral("label_42"));
        label_42->setGeometry(QRect(220, 120, 47, 21));
        pb_modifiersite_2 = new QPushButton(groupBox_7);
        pb_modifiersite_2->setObjectName(QStringLiteral("pb_modifiersite_2"));
        pb_modifiersite_2->setGeometry(QRect(300, 390, 121, 31));
        label_43 = new QLabel(groupBox_7);
        label_43->setObjectName(QStringLiteral("label_43"));
        label_43->setGeometry(QRect(220, 160, 71, 16));
        adresse_modif_site_2 = new QLineEdit(groupBox_7);
        adresse_modif_site_2->setObjectName(QStringLiteral("adresse_modif_site_2"));
        adresse_modif_site_2->setGeometry(QRect(420, 160, 113, 20));
        label_44 = new QLabel(groupBox_7);
        label_44->setObjectName(QStringLiteral("label_44"));
        label_44->setGeometry(QRect(220, 90, 47, 14));
        type_modif_site_2 = new QLineEdit(groupBox_7);
        type_modif_site_2->setObjectName(QStringLiteral("type_modif_site_2"));
        type_modif_site_2->setGeometry(QRect(420, 120, 113, 20));
        blockage_12 = new QLabel(groupBox_7);
        blockage_12->setObjectName(QStringLiteral("blockage_12"));
        blockage_12->setGeometry(QRect(220, 240, 91, 16));
        blockage_12->setMaximumSize(QSize(5656, 16));
        nb_visite_12 = new QLabel(groupBox_7);
        nb_visite_12->setObjectName(QStringLiteral("nb_visite_12"));
        nb_visite_12->setGeometry(QRect(220, 200, 91, 16));
        nb_visite_12->setMaximumSize(QSize(456789, 16));
        temps_12 = new QLabel(groupBox_7);
        temps_12->setObjectName(QStringLiteral("temps_12"));
        temps_12->setGeometry(QRect(220, 330, 181, 16));
        temps_12->setMaximumSize(QSize(5567, 16));
        nbvisite_modif_site_2 = new QLineEdit(groupBox_7);
        nbvisite_modif_site_2->setObjectName(QStringLiteral("nbvisite_modif_site_2"));
        nbvisite_modif_site_2->setGeometry(QRect(420, 200, 113, 20));
        blockage_modif_site_2 = new QLineEdit(groupBox_7);
        blockage_modif_site_2->setObjectName(QStringLiteral("blockage_modif_site_2"));
        blockage_modif_site_2->setGeometry(QRect(420, 240, 113, 20));
        temps_modif_site_2 = new QLineEdit(groupBox_7);
        temps_modif_site_2->setObjectName(QStringLiteral("temps_modif_site_2"));
        temps_modif_site_2->setGeometry(QRect(420, 320, 113, 20));
        id_modif_site_2 = new QLineEdit(groupBox_7);
        id_modif_site_2->setObjectName(QStringLiteral("id_modif_site_2"));
        id_modif_site_2->setGeometry(QRect(420, 40, 113, 20));
        date_modif_site_2 = new QDateEdit(groupBox_7);
        date_modif_site_2->setObjectName(QStringLiteral("date_modif_site_2"));
        date_modif_site_2->setGeometry(QRect(420, 290, 110, 22));
        afficher_site_tab_2->addTab(modifier_13, QString());
        supprimer_13 = new QWidget();
        supprimer_13->setObjectName(QStringLiteral("supprimer_13"));
        supprimercadre_13 = new QGroupBox(supprimer_13);
        supprimercadre_13->setObjectName(QStringLiteral("supprimercadre_13"));
        supprimercadre_13->setGeometry(QRect(10, 10, 1001, 571));
        pb_supprimer_site_2 = new QPushButton(supprimercadre_13);
        pb_supprimer_site_2->setObjectName(QStringLiteral("pb_supprimer_site_2"));
        pb_supprimer_site_2->setGeometry(QRect(290, 130, 93, 28));
        pb_supprimer_site_2->setStyleSheet(QLatin1String("background-color: rgb(255, 85, 255);\n"
"border-color: rgb(170, 0, 255);"));
        leid_supp_site_2 = new QLineEdit(supprimercadre_13);
        leid_supp_site_2->setObjectName(QStringLiteral("leid_supp_site_2"));
        leid_supp_site_2->setGeometry(QRect(150, 60, 113, 22));
        id_13 = new QLabel(supprimercadre_13);
        id_13->setObjectName(QStringLiteral("id_13"));
        id_13->setGeometry(QRect(50, 70, 111, 16));
        afficher_site_tab_2->addTab(supprimer_13, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        label_122 = new QLabel(tab_8);
        label_122->setObjectName(QStringLiteral("label_122"));
        label_122->setGeometry(QRect(610, 60, 91, 21));
        label_123 = new QLabel(tab_8);
        label_123->setObjectName(QStringLiteral("label_123"));
        label_123->setGeometry(QRect(768, 290, 171, 20));
        label_130 = new QLabel(tab_8);
        label_130->setObjectName(QStringLiteral("label_130"));
        label_130->setGeometry(QRect(762, 60, 91, 21));
        label_131 = new QLabel(tab_8);
        label_131->setObjectName(QStringLiteral("label_131"));
        label_131->setGeometry(QRect(880, 60, 101, 20));
        trier_nb_2 = new QPushButton(tab_8);
        trier_nb_2->setObjectName(QStringLiteral("trier_nb_2"));
        trier_nb_2->setGeometry(QRect(780, 330, 111, 23));
        label_132 = new QLabel(tab_8);
        label_132->setObjectName(QStringLiteral("label_132"));
        label_132->setGeometry(QRect(646, 290, 41, 16));
        label_133 = new QLabel(tab_8);
        label_133->setObjectName(QStringLiteral("label_133"));
        label_133->setGeometry(QRect(780, 160, 91, 21));
        cherchernom_2 = new QPushButton(tab_8);
        cherchernom_2->setObjectName(QStringLiteral("cherchernom_2"));
        cherchernom_2->setGeometry(QRect(740, 120, 93, 28));
        nomrecher_2 = new QLineEdit(tab_8);
        nomrecher_2->setObjectName(QStringLiteral("nomrecher_2"));
        nomrecher_2->setGeometry(QRect(730, 90, 113, 22));
        cherchertype_2 = new QPushButton(tab_8);
        cherchertype_2->setObjectName(QStringLiteral("cherchertype_2"));
        cherchertype_2->setGeometry(QRect(870, 120, 93, 28));
        typerecher_2 = new QLineEdit(tab_8);
        typerecher_2->setObjectName(QStringLiteral("typerecher_2"));
        typerecher_2->setGeometry(QRect(860, 90, 113, 22));
        chercheradresse_2 = new QPushButton(tab_8);
        chercheradresse_2->setObjectName(QStringLiteral("chercheradresse_2"));
        chercheradresse_2->setGeometry(QRect(780, 210, 93, 28));
        adresserecher_2 = new QLineEdit(tab_8);
        adresserecher_2->setObjectName(QStringLiteral("adresserecher_2"));
        adresserecher_2->setGeometry(QRect(770, 180, 113, 22));
        tab_affrecherche_2 = new QTableView(tab_8);
        tab_affrecherche_2->setObjectName(QStringLiteral("tab_affrecherche_2"));
        tab_affrecherche_2->setGeometry(QRect(30, 50, 551, 491));
        label_134 = new QLabel(tab_8);
        label_134->setObjectName(QStringLiteral("label_134"));
        label_134->setGeometry(QRect(646, 380, 41, 16));
        trier_date_2 = new QPushButton(tab_8);
        trier_date_2->setObjectName(QStringLiteral("trier_date_2"));
        trier_date_2->setGeometry(QRect(780, 420, 111, 23));
        label_135 = new QLabel(tab_8);
        label_135->setObjectName(QStringLiteral("label_135"));
        label_135->setGeometry(QRect(768, 380, 251, 20));
        trier_temps_2 = new QPushButton(tab_8);
        trier_temps_2->setObjectName(QStringLiteral("trier_temps_2"));
        trier_temps_2->setGeometry(QRect(780, 510, 111, 23));
        label_136 = new QLabel(tab_8);
        label_136->setObjectName(QStringLiteral("label_136"));
        label_136->setGeometry(QRect(768, 470, 231, 20));
        label_137 = new QLabel(tab_8);
        label_137->setObjectName(QStringLiteral("label_137"));
        label_137->setGeometry(QRect(646, 470, 41, 16));
        afficher_site_tab_2->addTab(tab_8, QString());
        main_tab->addTab(site_2, QString());
        ordinateur_2 = new QWidget();
        ordinateur_2->setObjectName(QStringLiteral("ordinateur_2"));
        mailing_2 = new QTabWidget(ordinateur_2);
        mailing_2->setObjectName(QStringLiteral("mailing_2"));
        mailing_2->setGeometry(QRect(0, 0, 1081, 661));
        mailing_2->setMinimumSize(QSize(0, 441));
        mailing_2->setMaximumSize(QSize(16777209, 16777215));
        mailing_2->setFont(font1);
        ajouter_14 = new QWidget();
        ajouter_14->setObjectName(QStringLiteral("ajouter_14"));
        cadreajout_20 = new QGroupBox(ajouter_14);
        cadreajout_20->setObjectName(QStringLiteral("cadreajout_20"));
        cadreajout_20->setGeometry(QRect(10, 10, 821, 451));
        ID_29 = new QLabel(cadreajout_20);
        ID_29->setObjectName(QStringLiteral("ID_29"));
        ID_29->setGeometry(QRect(10, 40, 56, 16));
        le_id_ordi_2 = new QLineEdit(cadreajout_20);
        le_id_ordi_2->setObjectName(QStringLiteral("le_id_ordi_2"));
        le_id_ordi_2->setGeometry(QRect(160, 40, 113, 22));
        pb_ajouter_ordinateur_2 = new QPushButton(cadreajout_20);
        pb_ajouter_ordinateur_2->setObjectName(QStringLiteral("pb_ajouter_ordinateur_2"));
        pb_ajouter_ordinateur_2->setGeometry(QRect(270, 170, 93, 28));
        pb_ajouter_ordinateur_2->setStyleSheet(QLatin1String("background-color: rgb(255, 85, 255);\n"
"border-color: rgb(170, 0, 255);"));
        ID_30 = new QLabel(cadreajout_20);
        ID_30->setObjectName(QStringLiteral("ID_30"));
        ID_30->setGeometry(QRect(10, 80, 71, 16));
        le_modele_ordi_2 = new QLineEdit(cadreajout_20);
        le_modele_ordi_2->setObjectName(QStringLiteral("le_modele_ordi_2"));
        le_modele_ordi_2->setGeometry(QRect(160, 80, 113, 22));
        pb_back1_4 = new QPushButton(cadreajout_20);
        pb_back1_4->setObjectName(QStringLiteral("pb_back1_4"));
        pb_back1_4->setGeometry(QRect(220, 380, 351, 31));
        mailing_2->addTab(ajouter_14, QString());
        afficher_14 = new QWidget();
        afficher_14->setObjectName(QStringLiteral("afficher_14"));
        affichercadre_14 = new QGroupBox(afficher_14);
        affichercadre_14->setObjectName(QStringLiteral("affichercadre_14"));
        affichercadre_14->setGeometry(QRect(10, 10, 941, 591));
        tab_siteafficher_4 = new QTableView(affichercadre_14);
        tab_siteafficher_4->setObjectName(QStringLiteral("tab_siteafficher_4"));
        tab_siteafficher_4->setGeometry(QRect(10, 20, 1011, 541));
        mailing_2->addTab(afficher_14, QString());
        modifier_14 = new QWidget();
        modifier_14->setObjectName(QStringLiteral("modifier_14"));
        groupBox_9 = new QGroupBox(modifier_14);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        groupBox_9->setGeometry(QRect(10, 10, 751, 391));
        ID_31 = new QLabel(groupBox_9);
        ID_31->setObjectName(QStringLiteral("ID_31"));
        ID_31->setGeometry(QRect(160, 110, 111, 41));
        modele_modordina_2 = new QLineEdit(groupBox_9);
        modele_modordina_2->setObjectName(QStringLiteral("modele_modordina_2"));
        modele_modordina_2->setGeometry(QRect(300, 120, 113, 22));
        le_id_modordina_2 = new QLineEdit(groupBox_9);
        le_id_modordina_2->setObjectName(QStringLiteral("le_id_modordina_2"));
        le_id_modordina_2->setGeometry(QRect(300, 80, 113, 22));
        ID_32 = new QLabel(groupBox_9);
        ID_32->setObjectName(QStringLiteral("ID_32"));
        ID_32->setGeometry(QRect(150, 80, 101, 31));
        pb_modif_ordina_2 = new QPushButton(groupBox_9);
        pb_modif_ordina_2->setObjectName(QStringLiteral("pb_modif_ordina_2"));
        pb_modif_ordina_2->setGeometry(QRect(300, 280, 121, 31));
        mailing_2->addTab(modifier_14, QString());
        supprimer_14 = new QWidget();
        supprimer_14->setObjectName(QStringLiteral("supprimer_14"));
        supprimercadre_14 = new QGroupBox(supprimer_14);
        supprimercadre_14->setObjectName(QStringLiteral("supprimercadre_14"));
        supprimercadre_14->setGeometry(QRect(10, 10, 791, 361));
        pb_supprimer_ordina_2 = new QPushButton(supprimercadre_14);
        pb_supprimer_ordina_2->setObjectName(QStringLiteral("pb_supprimer_ordina_2"));
        pb_supprimer_ordina_2->setGeometry(QRect(290, 130, 93, 28));
        pb_supprimer_ordina_2->setStyleSheet(QLatin1String("background-color: rgb(255, 85, 255);\n"
"border-color: rgb(170, 0, 255);"));
        leid_supp_ordi_2 = new QLineEdit(supprimercadre_14);
        leid_supp_ordi_2->setObjectName(QStringLiteral("leid_supp_ordi_2"));
        leid_supp_ordi_2->setGeometry(QRect(150, 60, 113, 22));
        id_14 = new QLabel(supprimercadre_14);
        id_14->setObjectName(QStringLiteral("id_14"));
        id_14->setGeometry(QRect(120, 60, 16, 16));
        mailing_2->addTab(supprimer_14, QString());
        Mail_2 = new QWidget();
        Mail_2->setObjectName(QStringLiteral("Mail_2"));
        groupBox_10 = new QGroupBox(Mail_2);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        groupBox_10->setGeometry(QRect(10, 10, 671, 501));
        rcpt_2 = new QLineEdit(groupBox_10);
        rcpt_2->setObjectName(QStringLiteral("rcpt_2"));
        rcpt_2->setGeometry(QRect(20, 70, 251, 20));
        subject_2 = new QLineEdit(groupBox_10);
        subject_2->setObjectName(QStringLiteral("subject_2"));
        subject_2->setGeometry(QRect(20, 100, 381, 20));
        msg_2 = new QTextEdit(groupBox_10);
        msg_2->setObjectName(QStringLiteral("msg_2"));
        msg_2->setGeometry(QRect(20, 130, 631, 241));
        sendBtn_2 = new QPushButton(groupBox_10);
        sendBtn_2->setObjectName(QStringLiteral("sendBtn_2"));
        sendBtn_2->setGeometry(QRect(140, 390, 381, 23));
        sendBtn_2->setFont(font);
        sendBtn_2->setStyleSheet(QLatin1String("#sendBtn{\n"
"\n"
"\n"
"\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:1 rgba(0, 255, 213, 255));}\n"
"\n"
"#sendBtn:pressed{\n"
"	color: rgb(170, 255, 255);}"));
        mailing_2->addTab(Mail_2, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        nomrecher_5 = new QLineEdit(tab);
        nomrecher_5->setObjectName(QStringLiteral("nomrecher_5"));
        nomrecher_5->setGeometry(QRect(718, 170, 113, 22));
        label_128 = new QLabel(tab);
        label_128->setObjectName(QStringLiteral("label_128"));
        label_128->setGeometry(QRect(720, 60, 101, 41));
        QFont font2;
        font2.setFamily(QStringLiteral("century gothic"));
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        font2.setKerning(false);
        label_128->setFont(font2);
        label_160 = new QLabel(tab);
        label_160->setObjectName(QStringLiteral("label_160"));
        label_160->setGeometry(QRect(740, 140, 91, 21));
        cherchernom_5 = new QPushButton(tab);
        cherchernom_5->setObjectName(QStringLiteral("cherchernom_5"));
        cherchernom_5->setGeometry(QRect(728, 210, 93, 28));
        cherchertype_5 = new QPushButton(tab);
        cherchertype_5->setObjectName(QStringLiteral("cherchertype_5"));
        cherchertype_5->setGeometry(QRect(730, 360, 93, 28));
        typerecher_5 = new QLineEdit(tab);
        typerecher_5->setObjectName(QStringLiteral("typerecher_5"));
        typerecher_5->setGeometry(QRect(720, 320, 113, 22));
        label_161 = new QLabel(tab);
        label_161->setObjectName(QStringLiteral("label_161"));
        label_161->setGeometry(QRect(730, 290, 101, 20));
        tab_affrecherche_6 = new QTableView(tab);
        tab_affrecherche_6->setObjectName(QStringLiteral("tab_affrecherche_6"));
        tab_affrecherche_6->setGeometry(QRect(20, 40, 551, 491));
        mailing_2->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        layoutWidget_11 = new QWidget(tab_2);
        layoutWidget_11->setObjectName(QStringLiteral("layoutWidget_11"));
        layoutWidget_11->setGeometry(QRect(70, 480, 881, 61));
        horizontalLayout = new QHBoxLayout(layoutWidget_11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ActiveCam = new QPushButton(layoutWidget_11);
        ActiveCam->setObjectName(QStringLiteral("ActiveCam"));

        horizontalLayout->addWidget(ActiveCam);

        CaptureCam = new QPushButton(layoutWidget_11);
        CaptureCam->setObjectName(QStringLiteral("CaptureCam"));

        horizontalLayout->addWidget(CaptureCam);

        DesactiveCam = new QPushButton(layoutWidget_11);
        DesactiveCam->setObjectName(QStringLiteral("DesactiveCam"));

        horizontalLayout->addWidget(DesactiveCam);

        CamWidget = new QWidget(tab_2);
        CamWidget->setObjectName(QStringLiteral("CamWidget"));
        CamWidget->setGeometry(QRect(60, 20, 891, 391));
        mailing_2->addTab(tab_2, QString());
        main_tab->addTab(ordinateur_2, QString());
        stackedWidget->addWidget(site_ordinateur);
        chambres_cameras = new QWidget();
        chambres_cameras->setObjectName(QStringLiteral("chambres_cameras"));
        main_tab_2 = new QTabWidget(chambres_cameras);
        main_tab_2->setObjectName(QStringLiteral("main_tab_2"));
        main_tab_2->setGeometry(QRect(0, 0, 1071, 671));
        main_tab_2->setStyleSheet(QLatin1String("*{\n"
"font-family:century gothic;\n"
"font-size:15px;\n"
"/*background-color:#ffffee;*/\n"
"/*background:transparent;*/\n"
"font-style:black;\n"
"background-color:rgba(255,255,255,0.6);\n"
"}\n"
"#MainWindow{\n"
"	border-image: url(:/bg/back.png);\n"
"}\n"
"QFrame{\n"
"background:rgb(191, 77, 240);\n"
"border-radius:15px;\n"
"}\n"
"QComboBox{\n"
"border:none;\n"
"border-bottom:1px solid #bf4df0;\n"
"}\n"
"QComboBox::hover{\n"
"background: rgba(191, 77, 240,0.7);\n"
"}\n"
"QPushButton{\n"
"background:  rgba(191, 77, 240,0.7);\n"
"border-radius:20px;\n"
"border-radius:15px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background: rgba(191, 77, 240,0.9);\n"
"color:white;\n"
"}\n"
"\n"
"QToolButton{\n"
"background:  white;\n"
"border-radius:50px;\n"
"}\n"
"QLabel{\n"
"color: #000000;\n"
"background:transparent;\n"
"border: none;\n"
"}\n"
"QLineEdit{\n"
"background:transparent;\n"
"border:none;\n"
"border-bottom:1px solid #bf4df0;\n"
"}\n"
"\n"
"/*#ajout,#stat,#tab,#tab_30,#tab_31,#tab_32,#tab_33,#tab_39,#tab_40,#tab_41,"
                        "#tab_42,#tab_43,#tab_36,#tab_37,#tab_38,#tab_34,#tab_35{\n"
"background-color: #FFF5BD;\n"
"}\n"
"#afficher,#modifier,#tab_19{\n"
"background-color: #FFF5BD;\n"
"}\n"
"#tab_3,#tab_4,#tab_5,#tab_6,#tab_7,#tab_8,#tab_9,#tab_10,#tab_11,#tab_12,#tab_13,#tab_14,#tab_15{\n"
"background-color: #FFF5BD;\n"
"}\n"
"#tab_16,#tab_17,#tab_18,#tab_20,#tab_21,#tab_22,#tab_23{\n"
"background-color: #FFF5BD;\n"
"}\n"
"#statis,#ajout_2,#tab_24,#tab_25,#tab_26,#tab_27,#tab_28,#tab_29{\n"
"background-color: #FFF5BD;\n"
"}\n"
"#supprimer1,#supprimer1_2,#afficher_2,#modifier_2,#Commandes{\n"
"background-color: #FFF5BD;\n"
"}*/\n"
"\n"
"QTabWidget::pane {\n"
"    	border-top: 1px solid rgba(255,255,255,0.6);\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"   background-color:rgba(255,255,255,0.6);\n"
" 	border-style: outset;\n"
"	border-width: 1px;\n"
"	border-right-color: qlineargradient(spread:pad, x1:0.4, y1:0.5, x2:0.6, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-left-color: qlineargradient(spread:pad, "
                        "x1:0.6, y1:0.5, x2:0.4, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"    border-bottom-color: rgb(58, 58, 58);\n"
"	border-bottom-width: 1px;\n"
"	border-top-width: 0px;\n"
"	border-style: solid;\n"
"    color: rgb(87, 232, 235);\n"
"	padding: 4px;\n"
"    font-style: #000000;\n"
"}\n"
"\n"
"QTabBar::tab:selected, QTabBar::tab:hover {\n"
"   color:rgba(191, 77, 240,0.7);\n"
"   border-color:rgb(42, 42, 42);\n"
"   margin-left: 0px;\n"
"   margin-right: 0px;\n"
"   border-bottom-right-radius:4px;\n"
"   border-bottom-left-radius:4px;\n"
"   font-style: #000000;\n"
"}\n"
"\n"
"QTabBar::tab:last:selected {\n"
"  \n"
"	border-color:rgba(191, 77, 240,0.7);\n"
"	margin-left: 0px;\n"
"  	margin-right: 0px;\n"
"	border-bottom-right-radius:4px;\n"
"	border-bottom-left-radius:4px;\n"
"}\n"
"\n"
"QTabBar::tab:!selected {\n"
"   margin-bottom: 4px;\n"
"   border-bottom-right-radius:4px;\n"
"   border-bottom-left-radius:4px;\n"
"}"));
        main_tab_2->setTabPosition(QTabWidget::West);
        Camera_2 = new QWidget();
        Camera_2->setObjectName(QStringLiteral("Camera_2"));
        afficher_cameras_tab_2 = new QTabWidget(Camera_2);
        afficher_cameras_tab_2->setObjectName(QStringLiteral("afficher_cameras_tab_2"));
        afficher_cameras_tab_2->setGeometry(QRect(0, 0, 1061, 661));
        afficher_cameras_tab_2->setMinimumSize(QSize(0, 441));
        ajouter_17 = new QWidget();
        ajouter_17->setObjectName(QStringLiteral("ajouter_17"));
        cadreajout_23 = new QGroupBox(ajouter_17);
        cadreajout_23->setObjectName(QStringLiteral("cadreajout_23"));
        cadreajout_23->setGeometry(QRect(10, 10, 1021, 491));
        ID_38 = new QLabel(cadreajout_23);
        ID_38->setObjectName(QStringLiteral("ID_38"));
        ID_38->setGeometry(QRect(10, 40, 56, 16));
        ID_38->setMaximumSize(QSize(56, 16));
        Type_18 = new QLabel(cadreajout_23);
        Type_18->setObjectName(QStringLiteral("Type_18"));
        Type_18->setGeometry(QRect(10, 70, 56, 16));
        Type_18->setMaximumSize(QSize(56, 16));
        Nom_16 = new QLabel(cadreajout_23);
        Nom_16->setObjectName(QStringLiteral("Nom_16"));
        Nom_16->setGeometry(QRect(10, 100, 56, 16));
        Nom_16->setMaximumSize(QSize(56, 16));
        id_camera_2 = new QLineEdit(cadreajout_23);
        id_camera_2->setObjectName(QStringLiteral("id_camera_2"));
        id_camera_2->setGeometry(QRect(160, 40, 113, 22));
        id_camera_2->setMaximumSize(QSize(113, 22));
        modele_camera_2 = new QLineEdit(cadreajout_23);
        modele_camera_2->setObjectName(QStringLiteral("modele_camera_2"));
        modele_camera_2->setGeometry(QRect(160, 70, 113, 22));
        modele_camera_2->setMaximumSize(QSize(113, 22));
        etat_camera_2 = new QLineEdit(cadreajout_23);
        etat_camera_2->setObjectName(QStringLiteral("etat_camera_2"));
        etat_camera_2->setGeometry(QRect(160, 100, 113, 22));
        etat_camera_2->setMaximumSize(QSize(113, 22));
        pb_ajouter_camera_2 = new QPushButton(cadreajout_23);
        pb_ajouter_camera_2->setObjectName(QStringLiteral("pb_ajouter_camera_2"));
        pb_ajouter_camera_2->setGeometry(QRect(390, 120, 93, 28));
        pb_ajouter_camera_2->setMaximumSize(QSize(93, 28));
        pb_ajouter_camera_2->setStyleSheet(QLatin1String("background-color: rgb(255, 85, 255);\n"
"border-color: rgb(170, 0, 255);"));
        emplacement_camera_2 = new QLineEdit(cadreajout_23);
        emplacement_camera_2->setObjectName(QStringLiteral("emplacement_camera_2"));
        emplacement_camera_2->setGeometry(QRect(160, 130, 113, 22));
        emplacement_camera_2->setMaximumSize(QSize(113, 22));
        adresse_16 = new QLabel(cadreajout_23);
        adresse_16->setObjectName(QStringLiteral("adresse_16"));
        adresse_16->setGeometry(QRect(10, 130, 91, 16));
        adresse_16->setMaximumSize(QSize(100, 16));
        pb_back1_3 = new QPushButton(cadreajout_23);
        pb_back1_3->setObjectName(QStringLiteral("pb_back1_3"));
        pb_back1_3->setGeometry(QRect(310, 430, 351, 31));
        afficher_cameras_tab_2->addTab(ajouter_17, QString());
        afficher_17 = new QWidget();
        afficher_17->setObjectName(QStringLiteral("afficher_17"));
        affichercadre_17 = new QGroupBox(afficher_17);
        affichercadre_17->setObjectName(QStringLiteral("affichercadre_17"));
        affichercadre_17->setGeometry(QRect(0, 10, 1031, 571));
        affichage_cam_2 = new QTableView(affichercadre_17);
        affichage_cam_2->setObjectName(QStringLiteral("affichage_cam_2"));
        affichage_cam_2->setGeometry(QRect(15, 21, 1011, 541));
        afficher_cameras_tab_2->addTab(afficher_17, QString());
        modifier_17 = new QWidget();
        modifier_17->setObjectName(QStringLiteral("modifier_17"));
        cadreajout_24 = new QGroupBox(modifier_17);
        cadreajout_24->setObjectName(QStringLiteral("cadreajout_24"));
        cadreajout_24->setGeometry(QRect(20, 30, 731, 421));
        ID_39 = new QLabel(cadreajout_24);
        ID_39->setObjectName(QStringLiteral("ID_39"));
        ID_39->setGeometry(QRect(10, 40, 56, 16));
        ID_39->setMaximumSize(QSize(56, 16));
        Type_19 = new QLabel(cadreajout_24);
        Type_19->setObjectName(QStringLiteral("Type_19"));
        Type_19->setGeometry(QRect(10, 70, 56, 16));
        Type_19->setMaximumSize(QSize(56, 16));
        Nom_17 = new QLabel(cadreajout_24);
        Nom_17->setObjectName(QStringLiteral("Nom_17"));
        Nom_17->setGeometry(QRect(10, 100, 56, 16));
        Nom_17->setMaximumSize(QSize(56, 16));
        id_camera_mod_2 = new QLineEdit(cadreajout_24);
        id_camera_mod_2->setObjectName(QStringLiteral("id_camera_mod_2"));
        id_camera_mod_2->setGeometry(QRect(160, 40, 113, 22));
        id_camera_mod_2->setMaximumSize(QSize(113, 22));
        modele_camera_mod_2 = new QLineEdit(cadreajout_24);
        modele_camera_mod_2->setObjectName(QStringLiteral("modele_camera_mod_2"));
        modele_camera_mod_2->setGeometry(QRect(160, 70, 113, 22));
        modele_camera_mod_2->setMaximumSize(QSize(113, 22));
        etat_camera_mod_2 = new QLineEdit(cadreajout_24);
        etat_camera_mod_2->setObjectName(QStringLiteral("etat_camera_mod_2"));
        etat_camera_mod_2->setGeometry(QRect(160, 100, 113, 22));
        etat_camera_mod_2->setMaximumSize(QSize(113, 22));
        pb_modifier_camera_2 = new QPushButton(cadreajout_24);
        pb_modifier_camera_2->setObjectName(QStringLiteral("pb_modifier_camera_2"));
        pb_modifier_camera_2->setGeometry(QRect(210, 220, 93, 28));
        pb_modifier_camera_2->setMaximumSize(QSize(93, 28));
        pb_modifier_camera_2->setStyleSheet(QLatin1String("background-color: rgb(255, 85, 255);\n"
"border-color: rgb(170, 0, 255);"));
        emplacement_camera_mod_2 = new QLineEdit(cadreajout_24);
        emplacement_camera_mod_2->setObjectName(QStringLiteral("emplacement_camera_mod_2"));
        emplacement_camera_mod_2->setGeometry(QRect(160, 130, 113, 22));
        emplacement_camera_mod_2->setMaximumSize(QSize(113, 22));
        adresse_17 = new QLabel(cadreajout_24);
        adresse_17->setObjectName(QStringLiteral("adresse_17"));
        adresse_17->setGeometry(QRect(10, 130, 91, 16));
        adresse_17->setMaximumSize(QSize(100, 16));
        pb_back1_5 = new QPushButton(cadreajout_24);
        pb_back1_5->setObjectName(QStringLiteral("pb_back1_5"));
        pb_back1_5->setGeometry(QRect(190, 350, 351, 31));
        afficher_cameras_tab_2->addTab(modifier_17, QString());
        supprimer_17 = new QWidget();
        supprimer_17->setObjectName(QStringLiteral("supprimer_17"));
        supprimercadre_17 = new QGroupBox(supprimer_17);
        supprimercadre_17->setObjectName(QStringLiteral("supprimercadre_17"));
        supprimercadre_17->setGeometry(QRect(40, 20, 791, 361));
        pb_supprimer_camera_2 = new QPushButton(supprimercadre_17);
        pb_supprimer_camera_2->setObjectName(QStringLiteral("pb_supprimer_camera_2"));
        pb_supprimer_camera_2->setGeometry(QRect(290, 130, 93, 28));
        pb_supprimer_camera_2->setStyleSheet(QLatin1String("background-color: rgb(255, 85, 255);\n"
"border-color: rgb(170, 0, 255);"));
        id_supprimer_cam_2 = new QLineEdit(supprimercadre_17);
        id_supprimer_cam_2->setObjectName(QStringLiteral("id_supprimer_cam_2"));
        id_supprimer_cam_2->setGeometry(QRect(150, 60, 113, 22));
        id_17 = new QLabel(supprimercadre_17);
        id_17->setObjectName(QStringLiteral("id_17"));
        id_17->setGeometry(QRect(120, 60, 16, 16));
        afficher_cameras_tab_2->addTab(supprimer_17, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        etat_rech_2 = new QLineEdit(tab_5);
        etat_rech_2->setObjectName(QStringLiteral("etat_rech_2"));
        etat_rech_2->setGeometry(QRect(860, 120, 113, 22));
        label_148 = new QLabel(tab_5);
        label_148->setObjectName(QStringLiteral("label_148"));
        label_148->setGeometry(QRect(730, 90, 91, 21));
        etat_re_2 = new QPushButton(tab_5);
        etat_re_2->setObjectName(QStringLiteral("etat_re_2"));
        etat_re_2->setGeometry(QRect(870, 150, 93, 28));
        trier_etat_2 = new QPushButton(tab_5);
        trier_etat_2->setObjectName(QStringLiteral("trier_etat_2"));
        trier_etat_2->setGeometry(QRect(740, 330, 111, 23));
        label_149 = new QLabel(tab_5);
        label_149->setObjectName(QStringLiteral("label_149"));
        label_149->setGeometry(QRect(610, 90, 91, 21));
        tab_affrecherche_5 = new QTableView(tab_5);
        tab_affrecherche_5->setObjectName(QStringLiteral("tab_affrecherche_5"));
        tab_affrecherche_5->setGeometry(QRect(50, 60, 521, 421));
        label_150 = new QLabel(tab_5);
        label_150->setObjectName(QStringLiteral("label_150"));
        label_150->setGeometry(QRect(606, 290, 41, 16));
        label_151 = new QLabel(tab_5);
        label_151->setObjectName(QStringLiteral("label_151"));
        label_151->setGeometry(QRect(760, 190, 141, 21));
        emplacement_rech_2 = new QLineEdit(tab_5);
        emplacement_rech_2->setObjectName(QStringLiteral("emplacement_rech_2"));
        emplacement_rech_2->setGeometry(QRect(770, 210, 113, 22));
        emplacement_re_2 = new QPushButton(tab_5);
        emplacement_re_2->setObjectName(QStringLiteral("emplacement_re_2"));
        emplacement_re_2->setGeometry(QRect(780, 240, 93, 28));
        modele_re_2 = new QPushButton(tab_5);
        modele_re_2->setObjectName(QStringLiteral("modele_re_2"));
        modele_re_2->setGeometry(QRect(740, 150, 93, 28));
        label_152 = new QLabel(tab_5);
        label_152->setObjectName(QStringLiteral("label_152"));
        label_152->setGeometry(QRect(892, 90, 101, 20));
        label_153 = new QLabel(tab_5);
        label_153->setObjectName(QStringLiteral("label_153"));
        label_153->setGeometry(QRect(728, 290, 131, 20));
        rech_modele_2 = new QLineEdit(tab_5);
        rech_modele_2->setObjectName(QStringLiteral("rech_modele_2"));
        rech_modele_2->setGeometry(QRect(730, 120, 113, 22));
        pdf_2 = new QPushButton(tab_5);
        pdf_2->setObjectName(QStringLiteral("pdf_2"));
        pdf_2->setGeometry(QRect(700, 460, 231, 51));
        afficher_cameras_tab_2->addTab(tab_5, QString());
        main_tab_2->addTab(Camera_2, QString());
        chambres_2 = new QWidget();
        chambres_2->setObjectName(QStringLiteral("chambres_2"));
        afficher_chambres_tab_2 = new QTabWidget(chambres_2);
        afficher_chambres_tab_2->setObjectName(QStringLiteral("afficher_chambres_tab_2"));
        afficher_chambres_tab_2->setGeometry(QRect(0, 0, 1061, 661));
        afficher_chambres_tab_2->setMinimumSize(QSize(0, 441));
        ajouter_18 = new QWidget();
        ajouter_18->setObjectName(QStringLiteral("ajouter_18"));
        cadreajout_25 = new QGroupBox(ajouter_18);
        cadreajout_25->setObjectName(QStringLiteral("cadreajout_25"));
        cadreajout_25->setGeometry(QRect(10, 0, 821, 411));
        ID_40 = new QLabel(cadreajout_25);
        ID_40->setObjectName(QStringLiteral("ID_40"));
        ID_40->setGeometry(QRect(30, 40, 91, 31));
        ID_40->setMaximumSize(QSize(56776, 65567));
        Type_20 = new QLabel(cadreajout_25);
        Type_20->setObjectName(QStringLiteral("Type_20"));
        Type_20->setGeometry(QRect(30, 70, 101, 31));
        Type_20->setMaximumSize(QSize(5567, 543));
        numero_cham_2 = new QLineEdit(cadreajout_25);
        numero_cham_2->setObjectName(QStringLiteral("numero_cham_2"));
        numero_cham_2->setGeometry(QRect(160, 40, 113, 22));
        numero_cham_2->setMaximumSize(QSize(113, 22));
        description_champ_2 = new QLineEdit(cadreajout_25);
        description_champ_2->setObjectName(QStringLiteral("description_champ_2"));
        description_champ_2->setGeometry(QRect(160, 70, 113, 22));
        description_champ_2->setMaximumSize(QSize(113, 22));
        pb_ajouter_champ_2 = new QPushButton(cadreajout_25);
        pb_ajouter_champ_2->setObjectName(QStringLiteral("pb_ajouter_champ_2"));
        pb_ajouter_champ_2->setGeometry(QRect(210, 160, 93, 28));
        pb_ajouter_champ_2->setMaximumSize(QSize(93, 28));
        pb_ajouter_champ_2->setStyleSheet(QLatin1String("background-color: rgb(255, 85, 255);\n"
"border-color: rgb(170, 0, 255);"));
        pb_back1_6 = new QPushButton(cadreajout_25);
        pb_back1_6->setObjectName(QStringLiteral("pb_back1_6"));
        pb_back1_6->setGeometry(QRect(230, 340, 351, 31));
        afficher_chambres_tab_2->addTab(ajouter_18, QString());
        afficher_18 = new QWidget();
        afficher_18->setObjectName(QStringLiteral("afficher_18"));
        affichercadre_18 = new QGroupBox(afficher_18);
        affichercadre_18->setObjectName(QStringLiteral("affichercadre_18"));
        affichercadre_18->setGeometry(QRect(10, 10, 1031, 571));
        affichage_chambres_2 = new QTableView(affichercadre_18);
        affichage_chambres_2->setObjectName(QStringLiteral("affichage_chambres_2"));
        affichage_chambres_2->setGeometry(QRect(15, 21, 1011, 541));
        afficher_chambres_tab_2->addTab(afficher_18, QString());
        modifier_18 = new QWidget();
        modifier_18->setObjectName(QStringLiteral("modifier_18"));
        cadreajout_26 = new QGroupBox(modifier_18);
        cadreajout_26->setObjectName(QStringLiteral("cadreajout_26"));
        cadreajout_26->setGeometry(QRect(10, 10, 991, 651));
        pb_modif_cham_2 = new QPushButton(cadreajout_26);
        pb_modif_cham_2->setObjectName(QStringLiteral("pb_modif_cham_2"));
        pb_modif_cham_2->setGeometry(QRect(250, 330, 93, 28));
        pb_modif_cham_2->setMaximumSize(QSize(93, 28));
        pb_modif_cham_2->setStyleSheet(QLatin1String("background-color: rgb(255, 85, 255);\n"
"border-color: rgb(170, 0, 255);"));
        Type_21 = new QLabel(cadreajout_26);
        Type_21->setObjectName(QStringLiteral("Type_21"));
        Type_21->setGeometry(QRect(80, 90, 70, 16));
        Type_21->setMaximumSize(QSize(70, 16));
        ID_41 = new QLabel(cadreajout_26);
        ID_41->setObjectName(QStringLiteral("ID_41"));
        ID_41->setGeometry(QRect(80, 60, 56, 16));
        ID_41->setMaximumSize(QSize(56, 16));
        description_mod_champ_2 = new QLineEdit(cadreajout_26);
        description_mod_champ_2->setObjectName(QStringLiteral("description_mod_champ_2"));
        description_mod_champ_2->setGeometry(QRect(230, 90, 113, 22));
        description_mod_champ_2->setMaximumSize(QSize(113, 22));
        num_mod_cham_2 = new QLineEdit(cadreajout_26);
        num_mod_cham_2->setObjectName(QStringLiteral("num_mod_cham_2"));
        num_mod_cham_2->setGeometry(QRect(230, 60, 113, 22));
        num_mod_cham_2->setMaximumSize(QSize(113, 22));
        afficher_chambres_tab_2->addTab(modifier_18, QString());
        supprimer_18 = new QWidget();
        supprimer_18->setObjectName(QStringLiteral("supprimer_18"));
        supprimercadre_18 = new QGroupBox(supprimer_18);
        supprimercadre_18->setObjectName(QStringLiteral("supprimercadre_18"));
        supprimercadre_18->setGeometry(QRect(10, 10, 991, 601));
        pb_supprimer_champ_2 = new QPushButton(supprimercadre_18);
        pb_supprimer_champ_2->setObjectName(QStringLiteral("pb_supprimer_champ_2"));
        pb_supprimer_champ_2->setGeometry(QRect(290, 130, 93, 28));
        pb_supprimer_champ_2->setStyleSheet(QLatin1String("background-color: rgb(255, 85, 255);\n"
"border-color: rgb(170, 0, 255);"));
        leid_supp_champ_2 = new QLineEdit(supprimercadre_18);
        leid_supp_champ_2->setObjectName(QStringLiteral("leid_supp_champ_2"));
        leid_supp_champ_2->setGeometry(QRect(150, 60, 113, 22));
        id_18 = new QLabel(supprimercadre_18);
        id_18->setObjectName(QStringLiteral("id_18"));
        id_18->setGeometry(QRect(120, 60, 16, 16));
        afficher_chambres_tab_2->addTab(supprimer_18, QString());
        main_tab_2->addTab(chambres_2, QString());
        stackedWidget->addWidget(chambres_cameras);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1012, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);
        tabWidget_2->setCurrentIndex(0);
        tabWidget_5->setCurrentIndex(1);
        tabWidget_6->setCurrentIndex(1);
        tabWidget->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(2);
        tabWidget_4->setCurrentIndex(1);
        tabWidget_7->setCurrentIndex(0);
        tabWidget_8->setCurrentIndex(1);
        tabWidget_9->setCurrentIndex(0);
        tabWidget_10->setCurrentIndex(1);
        tabWidget_11->setCurrentIndex(0);
        main_tab->setCurrentIndex(0);
        afficher_site_tab_2->setCurrentIndex(1);
        mailing_2->setCurrentIndex(5);
        main_tab_2->setCurrentIndex(0);
        afficher_cameras_tab_2->setCurrentIndex(0);
        afficher_chambres_tab_2->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label_23->setText(QApplication::translate("MainWindow", "Nom", Q_NULLPTR));
        label_24->setText(QApplication::translate("MainWindow", "Prenom", Q_NULLPTR));
        label_25->setText(QApplication::translate("MainWindow", "Age", Q_NULLPTR));
        label_26->setText(QApplication::translate("MainWindow", "Parent", Q_NULLPTR));
        pb_ajouterEnfant->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        tabWidget_5->setTabText(tabWidget_5->indexOf(AjouterEnfant), QApplication::translate("MainWindow", "Ajouter Enfant", Q_NULLPTR));
        pushButton_actualiserEnfant->setText(QApplication::translate("MainWindow", "Actualiser", Q_NULLPTR));
        pushButton_suppEnfant->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        pushButton_modifEnfant->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        pushButton_exporterEnfant->setText(QApplication::translate("MainWindow", "Exporter", Q_NULLPTR));
        pushButton_triAgeEnfant->setText(QApplication::translate("MainWindow", "Tri Age", Q_NULLPTR));
        tabWidget_5->setTabText(tabWidget_5->indexOf(AfficherEnfant), QApplication::translate("MainWindow", "Afficher Enfant", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(Enfant), QApplication::translate("MainWindow", "Enfant", Q_NULLPTR));
        label_27->setText(QApplication::translate("MainWindow", "Nom", Q_NULLPTR));
        label_28->setText(QApplication::translate("MainWindow", "Description", Q_NULLPTR));
        label_29->setText(QApplication::translate("MainWindow", "Dur\303\251e", Q_NULLPTR));
        label_30->setText(QApplication::translate("MainWindow", "Temps", Q_NULLPTR));
        label_31->setText(QApplication::translate("MainWindow", "Date", Q_NULLPTR));
        label_32->setText(QApplication::translate("MainWindow", "Rdv", Q_NULLPTR));
        label_33->setText(QApplication::translate("MainWindow", "Id enfant", Q_NULLPTR));
        pb_ajouter_activite->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        tabWidget_6->setTabText(tabWidget_6->indexOf(AjouterActivite), QApplication::translate("MainWindow", "Ajouter Activite", Q_NULLPTR));
        pushButton_ModifAct->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        pushButton_suppAct->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        pushButton_exportAct->setText(QApplication::translate("MainWindow", "Exporter", Q_NULLPTR));
        pushButton_ExportExcelAct->setText(QApplication::translate("MainWindow", "Exporter Excel", Q_NULLPTR));
        pushButton_triDateAct->setText(QApplication::translate("MainWindow", "Tri par date", Q_NULLPTR));
        tabWidget_6->setTabText(tabWidget_6->indexOf(AfficherActivite), QApplication::translate("MainWindow", "Afficher Activite", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(Activite), QApplication::translate("MainWindow", "Activite", Q_NULLPTR));
        pb_back1->setText(QApplication::translate("MainWindow", "Retour au menu", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Matricule", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Nom", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Prenom", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Mail", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Adresse", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Numero", Q_NULLPTR));
        pb_ajouter_parents->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(AjouterParent), QApplication::translate("MainWindow", "Ajouter Parent", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Numero", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Matricule", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Mail", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Prenom", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Nom", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "Adresse", Q_NULLPTR));
        pb_actualiser_parents->setText(QApplication::translate("MainWindow", "Actualiser", Q_NULLPTR));
        pb_modifier_parents->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        pb_rechercherP->setText(QApplication::translate("MainWindow", "Rechercher", Q_NULLPTR));
        pb_validerModifP->setText(QApplication::translate("MainWindow", "Valider", Q_NULLPTR));
        rb_triNom_parent->setText(QApplication::translate("MainWindow", "Tri par nom", Q_NULLPTR));
        rb_triPrenom_parent->setText(QApplication::translate("MainWindow", "Tri par prenom", Q_NULLPTR));
        rb_triNum_parent->setText(QApplication::translate("MainWindow", "Tri par numero", Q_NULLPTR));
        pb_exportPDF_P->setText(QApplication::translate("MainWindow", "Exporter", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(AfficherParent), QApplication::translate("MainWindow", "Afficher Parent", Q_NULLPTR));
        pb_supprimer_parents->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(SupprimerParent), QApplication::translate("MainWindow", "Supprimer Parent", Q_NULLPTR));
        pb_back2_2->setText(QApplication::translate("MainWindow", "Retour au menu", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Parent), QApplication::translate("MainWindow", "Parent", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "Matricule", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "Type", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "Etat", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "Emplacement", Q_NULLPTR));
        pb_ajouter_machine->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        tabWidget_4->setTabText(tabWidget_4->indexOf(AjouterElectromenager), QApplication::translate("MainWindow", "Ajouter Electromenager", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "Emplacement", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "Matricule", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindow", "Etat", Q_NULLPTR));
        label_21->setText(QApplication::translate("MainWindow", "Type", Q_NULLPTR));
        pb_actualiser_machine->setText(QApplication::translate("MainWindow", "Actualiser", Q_NULLPTR));
        pb_modifier_machine->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        pb_valider_modifM->setText(QApplication::translate("MainWindow", "Valider", Q_NULLPTR));
        rb_triTypeM->setText(QApplication::translate("MainWindow", "Tri par type", Q_NULLPTR));
        rb_triEtatM->setText(QApplication::translate("MainWindow", "Tri par etat", Q_NULLPTR));
        rb_triEmplacementM->setText(QApplication::translate("MainWindow", "Tri par emplacement", Q_NULLPTR));
        pb_exportPDF_M->setText(QApplication::translate("MainWindow", "Exporter PDF", Q_NULLPTR));
        pb_exportExcel_machine->setText(QApplication::translate("MainWindow", "exporter excel", Q_NULLPTR));
        label_34->setText(QApplication::translate("MainWindow", "Recherche", Q_NULLPTR));
        tabWidget_4->setTabText(tabWidget_4->indexOf(AfficherElectromenager), QApplication::translate("MainWindow", "Afficher Electromenager", Q_NULLPTR));
        pb_supprimer_machine->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        label_22->setText(QApplication::translate("MainWindow", "MATRICULE", Q_NULLPTR));
        tabWidget_4->setTabText(tabWidget_4->indexOf(SupprimerElectromenager), QApplication::translate("MainWindow", "Supprimer Electromenager", Q_NULLPTR));
        pb_back2->setText(QApplication::translate("MainWindow", "Retour au menu", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Electromenager), QApplication::translate("MainWindow", "Electromenager", Q_NULLPTR));
        label_35->setText(QApplication::translate("MainWindow", "Matricule", Q_NULLPTR));
        label_36->setText(QApplication::translate("MainWindow", "Model", Q_NULLPTR));
        comboBox_emplacement_tele->clear();
        comboBox_emplacement_tele->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Salon", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Chambre", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Cuisine", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Verradan", Q_NULLPTR)
        );
        etat_tele->clear();
        etat_tele->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Bonne Etat", Q_NULLPTR)
         << QApplication::translate("MainWindow", "En Panne", Q_NULLPTR)
         << QApplication::translate("MainWindow", "En reparation", Q_NULLPTR)
        );
        label_37->setText(QApplication::translate("MainWindow", "Emplacement", Q_NULLPTR));
        label_38->setText(QApplication::translate("MainWindow", "Etat", Q_NULLPTR));
        label_39->setText(QApplication::translate("MainWindow", "Verouillage", Q_NULLPTR));
        Ajout_tele->setText(QApplication::translate("MainWindow", "Ajout", Q_NULLPTR));
        tabWidget_8->setTabText(tabWidget_8->indexOf(tab_7), QApplication::translate("MainWindow", "Ajouter Television", Q_NULLPTR));
        M_emplacement->clear();
        M_emplacement->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Salon", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Chambre", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Cuisine", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Veradan", Q_NULLPTR)
        );
        M_etat->clear();
        M_etat->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Bonne etat", Q_NULLPTR)
         << QApplication::translate("MainWindow", "En Panne", Q_NULLPTR)
         << QApplication::translate("MainWindow", "En reparation", Q_NULLPTR)
        );
        Modifier_Television->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        label_45->setText(QApplication::translate("MainWindow", "Matricule", Q_NULLPTR));
        label_46->setText(QApplication::translate("MainWindow", "Model", Q_NULLPTR));
        label_47->setText(QApplication::translate("MainWindow", "Emplacement", Q_NULLPTR));
        label_48->setText(QApplication::translate("MainWindow", "Etat", Q_NULLPTR));
        label_49->setText(QApplication::translate("MainWindow", "Verouillage", Q_NULLPTR));
        tabWidget_9->setTabText(tabWidget_9->indexOf(tab_9), QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        label_50->setText(QApplication::translate("MainWindow", "Matricule", Q_NULLPTR));
        tabWidget_9->setTabText(tabWidget_9->indexOf(tab_10), QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        comboBox_Trie->clear();
        comboBox_Trie->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Emplacement", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Matricule", Q_NULLPTR)
        );
        Tele_up->setText(QApplication::translate("MainWindow", "Up", Q_NULLPTR));
        Tele_down->setText(QApplication::translate("MainWindow", "Down", Q_NULLPTR));
        Trie_television->setText(QApplication::translate("MainWindow", "Trier", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("MainWindow", "Imprimer", Q_NULLPTR));
        tabWidget_8->setTabText(tabWidget_8->indexOf(tab_6), QApplication::translate("MainWindow", "Afficher Television", Q_NULLPTR));
        Retoure_Menue->setText(QApplication::translate("MainWindow", "Retour Menue", Q_NULLPTR));
        label_62->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:24pt; color:#aa00ff;\">TextLabel</span></p></body></html>", Q_NULLPTR));
        tabWidget_7->setTabText(tabWidget_7->indexOf(tab_3), QApplication::translate("MainWindow", "Television", Q_NULLPTR));
        lineEdit_MT->setText(QString());
        comboBox_EmT->clear();
        comboBox_EmT->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Salon", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Chambre", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Cuisine", Q_NULLPTR)
         << QString()
        );
        comboBox_EtT->clear();
        comboBox_EtT->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Bonne Etat", Q_NULLPTR)
         << QApplication::translate("MainWindow", "En panne", Q_NULLPTR)
         << QApplication::translate("MainWindow", "En Reparation", Q_NULLPTR)
        );
        label_51->setText(QApplication::translate("MainWindow", "Matricule", Q_NULLPTR));
        label_52->setText(QApplication::translate("MainWindow", "Temperature", Q_NULLPTR));
        Ajouter_Thermometre->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        label_58->setText(QApplication::translate("MainWindow", "Emplacement", Q_NULLPTR));
        label_59->setText(QApplication::translate("MainWindow", "Etat", Q_NULLPTR));
        tabWidget_10->setTabText(tabWidget_10->indexOf(tab_11), QApplication::translate("MainWindow", "Ajouter Thermometre", Q_NULLPTR));
        comboBox_Mod_EmpT->clear();
        comboBox_Mod_EmpT->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Salon", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Chambre", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Cuisine", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Nouvel \303\251l\303\251ment", Q_NULLPTR)
        );
        comboBox_Mod_EtaT->clear();
        comboBox_Mod_EtaT->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Bonne Etat", Q_NULLPTR)
         << QApplication::translate("MainWindow", "En Panne", Q_NULLPTR)
         << QApplication::translate("MainWindow", "En Reparation", Q_NULLPTR)
        );
        label_53->setText(QApplication::translate("MainWindow", "Matricule", Q_NULLPTR));
        label_54->setText(QApplication::translate("MainWindow", "Emplacement", Q_NULLPTR));
        label_55->setText(QApplication::translate("MainWindow", "Etat", Q_NULLPTR));
        label_56->setText(QApplication::translate("MainWindow", "Temperature", Q_NULLPTR));
        Modifier_Thermo->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        tabWidget_11->setTabText(tabWidget_11->indexOf(tab_13), QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        label_57->setText(QApplication::translate("MainWindow", "Matricule", Q_NULLPTR));
        tabWidget_11->setTabText(tabWidget_11->indexOf(tab_14), QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        Trie_Thermometre->setText(QApplication::translate("MainWindow", "Trier", Q_NULLPTR));
        Trie_thermo->clear();
        Trie_thermo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Emplacement", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Matricule", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Temperature", Q_NULLPTR)
        );
        radioButton_Thermo->setText(QApplication::translate("MainWindow", "up", Q_NULLPTR));
        radioButtonn_Thermo->setText(QApplication::translate("MainWindow", "Down", Q_NULLPTR));
        comboBox_R->clear();
        comboBox_R->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Tempererature", Q_NULLPTR)
        );
        Recherche_Thermometre->setText(QApplication::translate("MainWindow", "Recherche", Q_NULLPTR));
        tabWidget_10->setTabText(tabWidget_10->indexOf(tab_12), QApplication::translate("MainWindow", "Afficher Theremometre", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MainWindow", "OK", Q_NULLPTR));
        label_60->setText(QApplication::translate("MainWindow", "Matricule", Q_NULLPTR));
        label_61->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:20pt; color:#ff0000;\">Temperature</span></p></body></html>", Q_NULLPTR));
        tabWidget_10->setTabText(tabWidget_10->indexOf(tab_15), QApplication::translate("MainWindow", "Temperature", Q_NULLPTR));
        Retouraumenu->setText(QApplication::translate("MainWindow", "Retour Menu", Q_NULLPTR));
        time->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:24pt; color:#aa55ff;\">TextLabel</span></p></body></html>", Q_NULLPTR));
        tabWidget_7->setTabText(tabWidget_7->indexOf(tab_4), QApplication::translate("MainWindow", "Thermometre", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Menu Principal", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Espace Enfant et activite", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Espace Parent et electromenager", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "Espace Ordinateur et Site", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "Espace Chambres et Cameras", Q_NULLPTR));
        Gestion_Thermo_Tele->setText(QApplication::translate("MainWindow", "Espace T\303\251l\303\251visions et Thermom\303\250tre", Q_NULLPTR));
        cadreajout_19->setTitle(QApplication::translate("MainWindow", "Ajout", Q_NULLPTR));
        ID_28->setText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        Type_16->setText(QApplication::translate("MainWindow", "Type", Q_NULLPTR));
        Nom_14->setText(QApplication::translate("MainWindow", "Nom", Q_NULLPTR));
        pb_ajouter_site_2->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        adresse_14->setText(QApplication::translate("MainWindow", "Adresse", Q_NULLPTR));
        nb_visite_11->setText(QApplication::translate("MainWindow", "Nb Visites", Q_NULLPTR));
        blockage_11->setText(QApplication::translate("MainWindow", "Blockage", Q_NULLPTR));
        date_4->setText(QApplication::translate("MainWindow", "Date derniere visite", Q_NULLPTR));
        temps_11->setText(QApplication::translate("MainWindow", "Temps derniere visite", Q_NULLPTR));
        pb_back1_2->setText(QApplication::translate("MainWindow", "Retour au menu", Q_NULLPTR));
        afficher_site_tab_2->setTabText(afficher_site_tab_2->indexOf(ajouter_13), QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        affichercadre_13->setTitle(QApplication::translate("MainWindow", "Affichage", Q_NULLPTR));
        afficher_site_tab_2->setTabText(afficher_site_tab_2->indexOf(afficher_13), QApplication::translate("MainWindow", "Afficher", Q_NULLPTR));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        label_40->setText(QApplication::translate("MainWindow", "Date derniere visite", Q_NULLPTR));
        label_41->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Identifiant</p></body></html>", Q_NULLPTR));
        label_42->setText(QApplication::translate("MainWindow", "Type", Q_NULLPTR));
        pb_modifiersite_2->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        label_43->setText(QApplication::translate("MainWindow", "Adresse", Q_NULLPTR));
        label_44->setText(QApplication::translate("MainWindow", "Nom", Q_NULLPTR));
        blockage_12->setText(QApplication::translate("MainWindow", "Blockage", Q_NULLPTR));
        nb_visite_12->setText(QApplication::translate("MainWindow", "Nb Visites", Q_NULLPTR));
        temps_12->setText(QApplication::translate("MainWindow", "Temps derniere visite", Q_NULLPTR));
        afficher_site_tab_2->setTabText(afficher_site_tab_2->indexOf(modifier_13), QApplication::translate("MainWindow", "Modifer", Q_NULLPTR));
        supprimercadre_13->setTitle(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        pb_supprimer_site_2->setText(QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
        id_13->setText(QApplication::translate("MainWindow", "Identifiant", Q_NULLPTR));
        afficher_site_tab_2->setTabText(afficher_site_tab_2->indexOf(supprimer_13), QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        label_122->setText(QApplication::translate("MainWindow", "Recherche", Q_NULLPTR));
        label_123->setText(QApplication::translate("MainWindow", "Trier par Nombre de visite", Q_NULLPTR));
        label_130->setText(QApplication::translate("MainWindow", "Par Nom ", Q_NULLPTR));
        label_131->setText(QApplication::translate("MainWindow", "Par type", Q_NULLPTR));
        trier_nb_2->setText(QApplication::translate("MainWindow", "Trier", Q_NULLPTR));
        label_132->setText(QApplication::translate("MainWindow", "TRI", Q_NULLPTR));
        label_133->setText(QApplication::translate("MainWindow", "Par Adresse", Q_NULLPTR));
        cherchernom_2->setText(QApplication::translate("MainWindow", "Chercher", Q_NULLPTR));
        cherchertype_2->setText(QApplication::translate("MainWindow", "Chercher", Q_NULLPTR));
        chercheradresse_2->setText(QApplication::translate("MainWindow", "Chercher", Q_NULLPTR));
        label_134->setText(QApplication::translate("MainWindow", "TRI", Q_NULLPTR));
        trier_date_2->setText(QApplication::translate("MainWindow", "Trier", Q_NULLPTR));
        label_135->setText(QApplication::translate("MainWindow", "Trier par date d\303\251rniere visite", Q_NULLPTR));
        trier_temps_2->setText(QApplication::translate("MainWindow", "Trier", Q_NULLPTR));
        label_136->setText(QApplication::translate("MainWindow", "Trier par temps d\303\251rniere visite", Q_NULLPTR));
        label_137->setText(QApplication::translate("MainWindow", "TRI", Q_NULLPTR));
        afficher_site_tab_2->setTabText(afficher_site_tab_2->indexOf(tab_8), QApplication::translate("MainWindow", "Recherche et Tri", Q_NULLPTR));
        main_tab->setTabText(main_tab->indexOf(site_2), QApplication::translate("MainWindow", "         Site         ", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        mailing_2->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p>Mailing</p><p><br/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        cadreajout_20->setTitle(QApplication::translate("MainWindow", "Ajout", Q_NULLPTR));
        ID_29->setText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        pb_ajouter_ordinateur_2->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        ID_30->setText(QApplication::translate("MainWindow", "Mod\303\251le", Q_NULLPTR));
        pb_back1_4->setText(QApplication::translate("MainWindow", "Retour au menu", Q_NULLPTR));
        mailing_2->setTabText(mailing_2->indexOf(ajouter_14), QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        affichercadre_14->setTitle(QApplication::translate("MainWindow", "Affichage", Q_NULLPTR));
        mailing_2->setTabText(mailing_2->indexOf(afficher_14), QApplication::translate("MainWindow", "Afficher", Q_NULLPTR));
        groupBox_9->setTitle(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        ID_31->setText(QApplication::translate("MainWindow", "Mod\303\251le", Q_NULLPTR));
        ID_32->setText(QApplication::translate("MainWindow", "Identifiant", Q_NULLPTR));
        pb_modif_ordina_2->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        mailing_2->setTabText(mailing_2->indexOf(modifier_14), QApplication::translate("MainWindow", "Modifer", Q_NULLPTR));
        supprimercadre_14->setTitle(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        pb_supprimer_ordina_2->setText(QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
        id_14->setText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        mailing_2->setTabText(mailing_2->indexOf(supprimer_14), QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        groupBox_10->setTitle(QApplication::translate("MainWindow", "Envoi mail", Q_NULLPTR));
        rcpt_2->setPlaceholderText(QApplication::translate("MainWindow", "recipient", Q_NULLPTR));
        subject_2->setPlaceholderText(QApplication::translate("MainWindow", "subject", Q_NULLPTR));
        msg_2->setPlaceholderText(QApplication::translate("MainWindow", "type your message here ...", Q_NULLPTR));
        sendBtn_2->setText(QApplication::translate("MainWindow", "Send", Q_NULLPTR));
        mailing_2->setTabText(mailing_2->indexOf(Mail_2), QApplication::translate("MainWindow", "Mailing", Q_NULLPTR));
        label_128->setText(QApplication::translate("MainWindow", "Recherche", Q_NULLPTR));
        label_160->setText(QApplication::translate("MainWindow", "Par id", Q_NULLPTR));
        cherchernom_5->setText(QApplication::translate("MainWindow", "Chercher", Q_NULLPTR));
        cherchertype_5->setText(QApplication::translate("MainWindow", "Chercher", Q_NULLPTR));
        label_161->setText(QApplication::translate("MainWindow", "Par mod\303\251le", Q_NULLPTR));
        mailing_2->setTabText(mailing_2->indexOf(tab), QApplication::translate("MainWindow", "Recherche", Q_NULLPTR));
        ActiveCam->setText(QApplication::translate("MainWindow", "Activer", Q_NULLPTR));
        CaptureCam->setText(QApplication::translate("MainWindow", "Capturer", Q_NULLPTR));
        DesactiveCam->setText(QApplication::translate("MainWindow", "Decactiver", Q_NULLPTR));
        mailing_2->setTabText(mailing_2->indexOf(tab_2), QApplication::translate("MainWindow", "Camera", Q_NULLPTR));
        main_tab->setTabText(main_tab->indexOf(ordinateur_2), QApplication::translate("MainWindow", "      Ordinateur      ", Q_NULLPTR));
        cadreajout_23->setTitle(QApplication::translate("MainWindow", "Ajout", Q_NULLPTR));
        ID_38->setText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        Type_18->setText(QApplication::translate("MainWindow", "Mod\303\251le", Q_NULLPTR));
        Nom_16->setText(QApplication::translate("MainWindow", "Etat", Q_NULLPTR));
        pb_ajouter_camera_2->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        adresse_16->setText(QApplication::translate("MainWindow", "Emplacement", Q_NULLPTR));
        pb_back1_3->setText(QApplication::translate("MainWindow", "Retour au menu", Q_NULLPTR));
        afficher_cameras_tab_2->setTabText(afficher_cameras_tab_2->indexOf(ajouter_17), QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        affichercadre_17->setTitle(QApplication::translate("MainWindow", "Affichage", Q_NULLPTR));
        afficher_cameras_tab_2->setTabText(afficher_cameras_tab_2->indexOf(afficher_17), QApplication::translate("MainWindow", "Afficher", Q_NULLPTR));
        cadreajout_24->setTitle(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        ID_39->setText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        Type_19->setText(QApplication::translate("MainWindow", "Mod\303\251le", Q_NULLPTR));
        Nom_17->setText(QApplication::translate("MainWindow", "Etat", Q_NULLPTR));
        pb_modifier_camera_2->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        adresse_17->setText(QApplication::translate("MainWindow", "Emplacement", Q_NULLPTR));
        pb_back1_5->setText(QApplication::translate("MainWindow", "Retour au menu", Q_NULLPTR));
        afficher_cameras_tab_2->setTabText(afficher_cameras_tab_2->indexOf(modifier_17), QApplication::translate("MainWindow", "Modifer", Q_NULLPTR));
        supprimercadre_17->setTitle(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        pb_supprimer_camera_2->setText(QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
        id_17->setText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        afficher_cameras_tab_2->setTabText(afficher_cameras_tab_2->indexOf(supprimer_17), QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        label_148->setText(QApplication::translate("MainWindow", "Par mod\303\250le ", Q_NULLPTR));
        etat_re_2->setText(QApplication::translate("MainWindow", "Chercher", Q_NULLPTR));
        trier_etat_2->setText(QApplication::translate("MainWindow", "Trier", Q_NULLPTR));
        label_149->setText(QApplication::translate("MainWindow", "Recherche", Q_NULLPTR));
        label_150->setText(QApplication::translate("MainWindow", "TRI", Q_NULLPTR));
        label_151->setText(QApplication::translate("MainWindow", "Par emplacement", Q_NULLPTR));
        emplacement_re_2->setText(QApplication::translate("MainWindow", "Chercher", Q_NULLPTR));
        modele_re_2->setText(QApplication::translate("MainWindow", "Chercher", Q_NULLPTR));
        label_152->setText(QApplication::translate("MainWindow", "Par \303\251tat", Q_NULLPTR));
        label_153->setText(QApplication::translate("MainWindow", "Trie par \303\251tat", Q_NULLPTR));
        pdf_2->setText(QApplication::translate("MainWindow", "imprimer", Q_NULLPTR));
        afficher_cameras_tab_2->setTabText(afficher_cameras_tab_2->indexOf(tab_5), QApplication::translate("MainWindow", "Recherche et Tri", Q_NULLPTR));
        main_tab_2->setTabText(main_tab_2->indexOf(Camera_2), QApplication::translate("MainWindow", "     Cameras    ", Q_NULLPTR));
        cadreajout_25->setTitle(QApplication::translate("MainWindow", "Ajout", Q_NULLPTR));
        ID_40->setText(QApplication::translate("MainWindow", "Num\303\251ro", Q_NULLPTR));
        Type_20->setText(QApplication::translate("MainWindow", "Description", Q_NULLPTR));
        pb_ajouter_champ_2->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        pb_back1_6->setText(QApplication::translate("MainWindow", "Retour au menu", Q_NULLPTR));
        afficher_chambres_tab_2->setTabText(afficher_chambres_tab_2->indexOf(ajouter_18), QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        affichercadre_18->setTitle(QApplication::translate("MainWindow", "Affichage", Q_NULLPTR));
        afficher_chambres_tab_2->setTabText(afficher_chambres_tab_2->indexOf(afficher_18), QApplication::translate("MainWindow", "Afficher", Q_NULLPTR));
        cadreajout_26->setTitle(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        pb_modif_cham_2->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        Type_21->setText(QApplication::translate("MainWindow", "Description", Q_NULLPTR));
        ID_41->setText(QApplication::translate("MainWindow", "Num\303\251ro", Q_NULLPTR));
        afficher_chambres_tab_2->setTabText(afficher_chambres_tab_2->indexOf(modifier_18), QApplication::translate("MainWindow", "Modifer", Q_NULLPTR));
        supprimercadre_18->setTitle(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        pb_supprimer_champ_2->setText(QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
        id_18->setText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        afficher_chambres_tab_2->setTabText(afficher_chambres_tab_2->indexOf(supprimer_18), QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        main_tab_2->setTabText(main_tab_2->indexOf(chambres_2), QApplication::translate("MainWindow", "     Chambres    ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
