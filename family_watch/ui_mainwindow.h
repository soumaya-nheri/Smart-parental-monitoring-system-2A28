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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget_gestionOumayma;
    QWidget *tab_parents;
    QTabWidget *tabWidget_parents;
    QWidget *ajourterParents;
    QGroupBox *groupBox_ajoutParent;
    QLineEdit *le_matricule_parents;
    QLineEdit *le_nom_parents;
    QLineEdit *le_prenom_parents;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *le_mail_parents;
    QPushButton *pb_ajouter_parents;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *le_adresse_parents;
    QLineEdit *le_numero_parents;
    QWidget *afficherParents;
    QTableView *tableView_afficherParents;
    QPushButton *pb_actualiser_parents;
    QPushButton *pb_modifier_parent;
    QLineEdit *le_nom_parent2;
    QLineEdit *le_prenom_parent2;
    QLineEdit *le_mail_parent2;
    QLineEdit *le_adresse_parent2;
    QLineEdit *le_numero_parent2;
    QPushButton *pb_validerModifP;
    QLineEdit *le_matricule_parent2;
    QPushButton *pb_rechercheP;
    QLineEdit *le_rechercheP;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QRadioButton *rb_triNomP;
    QRadioButton *rb_triPrenomP;
    QRadioButton *rb_triNumeroP;
    QPushButton *pd_exportPDFP;
    QWidget *supprimerParents;
    QPushButton *pb_supprimer_parent;
    QLineEdit *le_parent_supp;
    QLabel *label_4;
    QWidget *afficherMachine;
    QTabWidget *tabWidget_afficherMachine;
    QWidget *tab_3;
    QGroupBox *groupBox_2;
    QLineEdit *le_matricule_machine;
    QLineEdit *le_type_machine;
    QLineEdit *le_etat_machine;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *le_emplacement_machine;
    QPushButton *pb_ajouter_machine;
    QWidget *tab_4;
    QTableView *tableView_afficherMachine;
    QPushButton *pb_actualiser_machine;
    QPushButton *pb_modifier_machine;
    QLineEdit *le_matricule_machine2;
    QLineEdit *le_type_machine2;
    QLineEdit *le_etat_machine2;
    QLineEdit *le_emplacement_machine2;
    QPushButton *pb_valider_modifE;
    QPushButton *pb_imprimerM;
    QRadioButton *rb_etatM;
    QRadioButton *rb_emplacementM;
    QRadioButton *rb_typeM;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QPushButton *pb_rechercheM;
    QLineEdit *le_rechercheM;
    QWidget *tab_5;
    QLineEdit *le_machine_supp;
    QLabel *label_3;
    QPushButton *pb_supprimer_machine;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(931, 600);
        MainWindow->setStyleSheet(QLatin1String("#centralwidget {\n"
"background-image: url(\"fond.png\");\n"
"}\n"
"#tab_3 #tab_4  #tab_5{\n"
"background: transparent;\n"
"}\n"
"#tab_parents{\n"
"background: transparent;\n"
"}\n"
"#ajourterParents{\n"
"background: transparent;\n"
"}\n"
"#afficherParents{\n"
"background: transparent;\n"
"}\n"
"#afficherMachine{\n"
"background: transparent;\n"
"}\n"
"#supprimerParents{\n"
"background: transparent;\n"
"}\n"
"#QGroupBox{\n"
"background: transparent;\n"
"}\n"
"QTabWidget::pane { /* The tab widget frame */\n"
"     border-top: 2px solid #aaaaff;\n"
"background-image: url(\"fond.png\");\n"
" }\n"
"\n"
" \n"
"QTabBar::tab {\n"
"     background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                 stop: 0 #E1E1E1, stop: 0.4 #DDDDDD,\n"
"                                 stop: 0.5 #D8D8D8, stop: 1.0 #D3D3D3);\n"
"     border: 2px solid #595fdd;\n"
"     border-bottom-color: #595fdd; /* same as the pane color */\n"
"     border-top-left-radius: 4px;\n"
"     border-top-right-radius: 4px;\n"
""
                        "     min-width: 8ex;\n"
"     padding: 2px;\n"
"\n"
" }\n"
" \n"
" QTabBar::tab:selected, QTabBar::tab:hover {\n"
"     background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                 stop: 0 #aaaaff, stop: 0.4 #aaaaff,\n"
"                                 stop: 0.5 #aaaaff, stop: 1.0 #aaaaff);\n"
"	color:white; \n"
"}\n"
" \n"
" QTabBar::tab:selected {\n"
"     border-color: #9B9B9B;\n"
"     border-bottom-color: #595fdd; /* same as pane color */\n"
" }\n"
" \n"
" QTabBar::tab:!selected {\n"
"     margin-top: 2px; /* make non-selected tabs look smaller */\n"
" }\n"
" \n"
" /* make use of negative margins for overlapping tabs */\n"
" QTabBar::tab:selected {\n"
"     /* expand/overlap to the left and right by 4px */\n"
"     margin-left: -4px;\n"
"     margin-right: -4px;\n"
" }\n"
" \n"
" QTabBar::tab:first:selected {\n"
"     margin-left: 0; /* the first selected tab has nothing to overlap with on the left */\n"
" }\n"
" \n"
" QTabBar::tab:last:selected {\n"
"     margin-right: 0;"
                        " /* the last selected tab has nothing to overlap with on the right */\n"
" }\n"
" \n"
" QTabBar::tab:only-one {\n"
"     margin: 0; /* if there is only one tab, we don't want overlapping margins */\n"
"}\n"
"\n"
" \n"
"\n"
"QTableView {border: 3px solid #595fdd;text-align: top;padding: 4px;border-radius: 7px;border-bottom-left-radius: 7px;background: #fff;opacity:0.5;width: 15px;}\n"
"QTableView::item:focus{selection-background-color: #8FE585;}\n"
"\n"
"#MyLoginForm {\n"
"background: red;\n"
"}\n"
"\n"
"#mainFrame {\n"
"border: 3px solid red;\n"
"border-radius: 40px;\n"
"background: white;\n"
"}\n"
"QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid #595fdd;\n"
"border-radius: 8px;\n"
"}\n"
"QTextEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid #595fdd;\n"
"border-radius: 8px;\n"
"}\n"
"QDateEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid #595fdd;\n"
"border-radius: 8px;\n"
"}\n"
"QTimeEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
""
                        "border: 2px solid #595fdd;\n"
"border-radius: 8px;\n"
"}\n"
"\n"
"QPushButton {\n"
"color: black;\n"
"  background: white;\n"
"\n"
"border-width: 2px;\n"
"border-color: #595fdd;\n"
"border-style: solid;\n"
"border-radius: 10;\n"
"padding: 3px;\n"
"font-size: 12px;\n"
"padding-left: 5px;\n"
"padding-right: 5px;\n"
"min-width: 80px;\n"
"max-width:1800px;\n"
"min-height: 20px;\n"
"max-height: 20px;\n"
"}\n"
"QLabel {\n"
"font-weight: blue;\n"
"font-size: 13px;\n"
"}\n"
"QPushButton:hover { background-color: #595fdd; }\n"
"QComboBox{\n"
"border-style: solid;\n"
"border: 2px solid #595fdd;\n"
"\n"
"\n"
" }"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget_gestionOumayma = new QTabWidget(centralwidget);
        tabWidget_gestionOumayma->setObjectName(QStringLiteral("tabWidget_gestionOumayma"));
        tabWidget_gestionOumayma->setGeometry(QRect(20, 20, 891, 541));
        tabWidget_gestionOumayma->setStyleSheet(QStringLiteral(""));
        tab_parents = new QWidget();
        tab_parents->setObjectName(QStringLiteral("tab_parents"));
        tab_parents->setStyleSheet(QStringLiteral(""));
        tabWidget_parents = new QTabWidget(tab_parents);
        tabWidget_parents->setObjectName(QStringLiteral("tabWidget_parents"));
        tabWidget_parents->setGeometry(QRect(20, 10, 811, 501));
        tabWidget_parents->setMouseTracking(false);
        tabWidget_parents->setStyleSheet(QStringLiteral("font: 8pt \"Comic Sans MS\";"));
        tabWidget_parents->setTabShape(QTabWidget::Rounded);
        ajourterParents = new QWidget();
        ajourterParents->setObjectName(QStringLiteral("ajourterParents"));
        ajourterParents->setStyleSheet(QLatin1String("#ajouterParents {\n"
"background-image: url(\"fond.png\");\n"
"}"));
        groupBox_ajoutParent = new QGroupBox(ajourterParents);
        groupBox_ajoutParent->setObjectName(QStringLiteral("groupBox_ajoutParent"));
        groupBox_ajoutParent->setGeometry(QRect(50, 10, 441, 441));
        groupBox_ajoutParent->setStyleSheet(QLatin1String("#groupBox_ajoutParent{\n"
"background_image : url(\"fond.png\");\n"
"}"));
        le_matricule_parents = new QLineEdit(groupBox_ajoutParent);
        le_matricule_parents->setObjectName(QStringLiteral("le_matricule_parents"));
        le_matricule_parents->setGeometry(QRect(160, 40, 113, 20));
        le_matricule_parents->setStyleSheet(QLatin1String("background-color: rgb(201, 204, 255);\n"
"border-color: rgb(255, 255, 255);"));
        le_nom_parents = new QLineEdit(groupBox_ajoutParent);
        le_nom_parents->setObjectName(QStringLiteral("le_nom_parents"));
        le_nom_parents->setGeometry(QRect(160, 90, 113, 20));
        le_nom_parents->setStyleSheet(QLatin1String("background-color: rgb(201, 204, 255);\n"
"border-color: rgb(255, 255, 255);"));
        le_prenom_parents = new QLineEdit(groupBox_ajoutParent);
        le_prenom_parents->setObjectName(QStringLiteral("le_prenom_parents"));
        le_prenom_parents->setGeometry(QRect(160, 140, 113, 20));
        le_prenom_parents->setStyleSheet(QLatin1String("background-color: rgb(201, 204, 255);\n"
"border-color: rgb(255, 255, 255);"));
        label_9 = new QLabel(groupBox_ajoutParent);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(70, 40, 61, 16));
        label_10 = new QLabel(groupBox_ajoutParent);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(70, 90, 47, 13));
        label_11 = new QLabel(groupBox_ajoutParent);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(70, 140, 47, 13));
        label_12 = new QLabel(groupBox_ajoutParent);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(70, 190, 71, 16));
        le_mail_parents = new QLineEdit(groupBox_ajoutParent);
        le_mail_parents->setObjectName(QStringLiteral("le_mail_parents"));
        le_mail_parents->setGeometry(QRect(160, 190, 113, 20));
        le_mail_parents->setStyleSheet(QLatin1String("background-color: rgb(201, 204, 255);\n"
"border-color: rgb(255, 255, 255);"));
        pb_ajouter_parents = new QPushButton(groupBox_ajoutParent);
        pb_ajouter_parents->setObjectName(QStringLiteral("pb_ajouter_parents"));
        pb_ajouter_parents->setGeometry(QRect(330, 400, 94, 30));
        pb_ajouter_parents->setStyleSheet(QStringLiteral("font: 75 10pt \"Comic Sans MS\";"));
        label = new QLabel(groupBox_ajoutParent);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 240, 47, 13));
        label_2 = new QLabel(groupBox_ajoutParent);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 290, 47, 13));
        le_adresse_parents = new QLineEdit(groupBox_ajoutParent);
        le_adresse_parents->setObjectName(QStringLiteral("le_adresse_parents"));
        le_adresse_parents->setGeometry(QRect(160, 240, 113, 20));
        le_adresse_parents->setStyleSheet(QLatin1String("background-color: rgb(201, 204, 255);\n"
"border-color: rgb(255, 255, 255);"));
        le_numero_parents = new QLineEdit(groupBox_ajoutParent);
        le_numero_parents->setObjectName(QStringLiteral("le_numero_parents"));
        le_numero_parents->setGeometry(QRect(160, 290, 113, 20));
        le_numero_parents->setStyleSheet(QLatin1String("background-color: rgb(201, 204, 255);\n"
"border-color: rgb(255, 255, 255);"));
        tabWidget_parents->addTab(ajourterParents, QString());
        afficherParents = new QWidget();
        afficherParents->setObjectName(QStringLiteral("afficherParents"));
        tableView_afficherParents = new QTableView(afficherParents);
        tableView_afficherParents->setObjectName(QStringLiteral("tableView_afficherParents"));
        tableView_afficherParents->setGeometry(QRect(20, 20, 531, 351));
        tableView_afficherParents->setStyleSheet(QLatin1String("background-color: rgb(201, 204, 255);\n"
"alternate-background-color: rgb(201, 204, 255);\n"
"border-color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(222, 124, 255);"));
        pb_actualiser_parents = new QPushButton(afficherParents);
        pb_actualiser_parents->setObjectName(QStringLiteral("pb_actualiser_parents"));
        pb_actualiser_parents->setGeometry(QRect(40, 410, 94, 30));
        pb_actualiser_parents->setStyleSheet(QStringLiteral("font: 75 10pt \"Comic Sans MS\";"));
        pb_modifier_parent = new QPushButton(afficherParents);
        pb_modifier_parent->setObjectName(QStringLiteral("pb_modifier_parent"));
        pb_modifier_parent->setGeometry(QRect(160, 410, 94, 30));
        pb_modifier_parent->setStyleSheet(QStringLiteral("font: 75 10pt \"Comic Sans MS\";"));
        le_nom_parent2 = new QLineEdit(afficherParents);
        le_nom_parent2->setObjectName(QStringLiteral("le_nom_parent2"));
        le_nom_parent2->setGeometry(QRect(670, 70, 113, 20));
        le_nom_parent2->setStyleSheet(QLatin1String("background-color: rgb(201, 204, 255);\n"
"border-color: rgb(255, 255, 255);"));
        le_prenom_parent2 = new QLineEdit(afficherParents);
        le_prenom_parent2->setObjectName(QStringLiteral("le_prenom_parent2"));
        le_prenom_parent2->setGeometry(QRect(670, 120, 113, 20));
        le_prenom_parent2->setStyleSheet(QLatin1String("background-color: rgb(201, 204, 255);\n"
"border-color: rgb(255, 255, 255);"));
        le_mail_parent2 = new QLineEdit(afficherParents);
        le_mail_parent2->setObjectName(QStringLiteral("le_mail_parent2"));
        le_mail_parent2->setGeometry(QRect(670, 170, 113, 20));
        le_mail_parent2->setStyleSheet(QLatin1String("background-color: rgb(201, 204, 255);\n"
"border-color: rgb(255, 255, 255);"));
        le_adresse_parent2 = new QLineEdit(afficherParents);
        le_adresse_parent2->setObjectName(QStringLiteral("le_adresse_parent2"));
        le_adresse_parent2->setGeometry(QRect(670, 220, 113, 20));
        le_adresse_parent2->setStyleSheet(QLatin1String("background-color: rgb(201, 204, 255);\n"
"border-color: rgb(255, 255, 255);"));
        le_numero_parent2 = new QLineEdit(afficherParents);
        le_numero_parent2->setObjectName(QStringLiteral("le_numero_parent2"));
        le_numero_parent2->setGeometry(QRect(670, 270, 113, 20));
        le_numero_parent2->setStyleSheet(QLatin1String("background-color: rgb(201, 204, 255);\n"
"border-color: rgb(255, 255, 255);"));
        pb_validerModifP = new QPushButton(afficherParents);
        pb_validerModifP->setObjectName(QStringLiteral("pb_validerModifP"));
        pb_validerModifP->setGeometry(QRect(690, 310, 94, 30));
        pb_validerModifP->setStyleSheet(QLatin1String("alternate-background-color: rgb(149, 151, 255);\n"
"font: 75 10pt \"Comic Sans MS\";"));
        le_matricule_parent2 = new QLineEdit(afficherParents);
        le_matricule_parent2->setObjectName(QStringLiteral("le_matricule_parent2"));
        le_matricule_parent2->setGeometry(QRect(670, 20, 113, 20));
        le_matricule_parent2->setStyleSheet(QLatin1String("border-color: rgb(255, 255, 255);\n"
"background-color: rgb(149, 151, 255);"));
        pb_rechercheP = new QPushButton(afficherParents);
        pb_rechercheP->setObjectName(QStringLiteral("pb_rechercheP"));
        pb_rechercheP->setGeometry(QRect(450, 410, 94, 30));
        pb_rechercheP->setStyleSheet(QStringLiteral("font: 75 10pt \"Comic Sans MS\";"));
        le_rechercheP = new QLineEdit(afficherParents);
        le_rechercheP->setObjectName(QStringLiteral("le_rechercheP"));
        le_rechercheP->setGeometry(QRect(320, 410, 113, 20));
        label_17 = new QLabel(afficherParents);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(590, 20, 61, 16));
        label_17->setStyleSheet(QStringLiteral("font: 8pt \"Comic Sans MS\";"));
        label_18 = new QLabel(afficherParents);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(590, 70, 47, 13));
        label_18->setStyleSheet(QStringLiteral("font: 8pt \"Comic Sans MS\";"));
        label_19 = new QLabel(afficherParents);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(590, 120, 47, 13));
        label_19->setStyleSheet(QStringLiteral("font: 8pt \"Comic Sans MS\";"));
        label_20 = new QLabel(afficherParents);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(590, 170, 47, 13));
        label_20->setStyleSheet(QStringLiteral("font: 8pt \"Comic Sans MS\";"));
        label_21 = new QLabel(afficherParents);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(590, 220, 47, 13));
        label_21->setStyleSheet(QStringLiteral("font: 8pt \"Comic Sans MS\";"));
        label_22 = new QLabel(afficherParents);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(590, 270, 47, 13));
        label_22->setStyleSheet(QLatin1String("font: 8pt \"Comic Sans MS\";\n"
""));
        rb_triNomP = new QRadioButton(afficherParents);
        rb_triNomP->setObjectName(QStringLiteral("rb_triNomP"));
        rb_triNomP->setGeometry(QRect(590, 350, 82, 17));
        rb_triNomP->setStyleSheet(QStringLiteral("font: 8pt \"Comic Sans MS\";"));
        rb_triPrenomP = new QRadioButton(afficherParents);
        rb_triPrenomP->setObjectName(QStringLiteral("rb_triPrenomP"));
        rb_triPrenomP->setGeometry(QRect(590, 380, 101, 17));
        rb_triPrenomP->setStyleSheet(QStringLiteral("font: 8pt \"Comic Sans MS\";"));
        rb_triNumeroP = new QRadioButton(afficherParents);
        rb_triNumeroP->setObjectName(QStringLiteral("rb_triNumeroP"));
        rb_triNumeroP->setGeometry(QRect(590, 410, 101, 17));
        rb_triNumeroP->setStyleSheet(QStringLiteral("font: 8pt \"Comic Sans MS\";"));
        pd_exportPDFP = new QPushButton(afficherParents);
        pd_exportPDFP->setObjectName(QStringLiteral("pd_exportPDFP"));
        pd_exportPDFP->setGeometry(QRect(700, 430, 94, 30));
        pd_exportPDFP->setStyleSheet(QStringLiteral("font: 75 10pt \"Comic Sans MS\";"));
        tabWidget_parents->addTab(afficherParents, QString());
        supprimerParents = new QWidget();
        supprimerParents->setObjectName(QStringLiteral("supprimerParents"));
        pb_supprimer_parent = new QPushButton(supprimerParents);
        pb_supprimer_parent->setObjectName(QStringLiteral("pb_supprimer_parent"));
        pb_supprimer_parent->setGeometry(QRect(410, 140, 94, 30));
        pb_supprimer_parent->setStyleSheet(QStringLiteral("font: 75 10pt \"Comic Sans MS\";"));
        le_parent_supp = new QLineEdit(supprimerParents);
        le_parent_supp->setObjectName(QStringLiteral("le_parent_supp"));
        le_parent_supp->setGeometry(QRect(210, 140, 113, 20));
        le_parent_supp->setStyleSheet(QLatin1String("background-color: rgb(201, 204, 255);\n"
"border-color: rgb(255, 255, 255);"));
        label_4 = new QLabel(supprimerParents);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(80, 140, 47, 13));
        tabWidget_parents->addTab(supprimerParents, QString());
        tabWidget_gestionOumayma->addTab(tab_parents, QString());
        afficherMachine = new QWidget();
        afficherMachine->setObjectName(QStringLiteral("afficherMachine"));
        tabWidget_afficherMachine = new QTabWidget(afficherMachine);
        tabWidget_afficherMachine->setObjectName(QStringLiteral("tabWidget_afficherMachine"));
        tabWidget_afficherMachine->setGeometry(QRect(10, 20, 851, 451));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        groupBox_2 = new QGroupBox(tab_3);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(80, 40, 441, 331));
        le_matricule_machine = new QLineEdit(groupBox_2);
        le_matricule_machine->setObjectName(QStringLiteral("le_matricule_machine"));
        le_matricule_machine->setGeometry(QRect(160, 40, 113, 20));
        le_matricule_machine->setStyleSheet(QLatin1String("background-color: rgb(201, 204, 255);\n"
"border-color: rgb(255, 255, 255);"));
        le_type_machine = new QLineEdit(groupBox_2);
        le_type_machine->setObjectName(QStringLiteral("le_type_machine"));
        le_type_machine->setGeometry(QRect(160, 110, 113, 20));
        le_type_machine->setStyleSheet(QLatin1String("background-color: rgb(201, 204, 255);\n"
"border-color: rgb(255, 255, 255);"));
        le_etat_machine = new QLineEdit(groupBox_2);
        le_etat_machine->setObjectName(QStringLiteral("le_etat_machine"));
        le_etat_machine->setGeometry(QRect(160, 180, 113, 20));
        le_etat_machine->setStyleSheet(QLatin1String("background-color: rgb(201, 204, 255);\n"
"border-color: rgb(255, 255, 255);"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(70, 40, 47, 13));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(70, 110, 47, 13));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(70, 180, 47, 13));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(66, 250, 71, 16));
        le_emplacement_machine = new QLineEdit(groupBox_2);
        le_emplacement_machine->setObjectName(QStringLiteral("le_emplacement_machine"));
        le_emplacement_machine->setGeometry(QRect(160, 250, 113, 20));
        le_emplacement_machine->setStyleSheet(QLatin1String("background-color: rgb(201, 204, 255);\n"
"border-color: rgb(255, 255, 255);"));
        pb_ajouter_machine = new QPushButton(groupBox_2);
        pb_ajouter_machine->setObjectName(QStringLiteral("pb_ajouter_machine"));
        pb_ajouter_machine->setGeometry(QRect(330, 290, 94, 30));
        tabWidget_afficherMachine->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tableView_afficherMachine = new QTableView(tab_4);
        tableView_afficherMachine->setObjectName(QStringLiteral("tableView_afficherMachine"));
        tableView_afficherMachine->setGeometry(QRect(30, 20, 521, 341));
        tableView_afficherMachine->setStyleSheet(QLatin1String("background-color: rgb(201, 204, 255);\n"
"alternate-background-color: rgb(201, 204, 255);\n"
"border-color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(222, 124, 255);"));
        tableView_afficherMachine->setGridStyle(Qt::SolidLine);
        pb_actualiser_machine = new QPushButton(tab_4);
        pb_actualiser_machine->setObjectName(QStringLiteral("pb_actualiser_machine"));
        pb_actualiser_machine->setGeometry(QRect(30, 380, 94, 30));
        pb_modifier_machine = new QPushButton(tab_4);
        pb_modifier_machine->setObjectName(QStringLiteral("pb_modifier_machine"));
        pb_modifier_machine->setGeometry(QRect(200, 380, 94, 30));
        le_matricule_machine2 = new QLineEdit(tab_4);
        le_matricule_machine2->setObjectName(QStringLiteral("le_matricule_machine2"));
        le_matricule_machine2->setGeometry(QRect(700, 40, 113, 20));
        le_matricule_machine2->setStyleSheet(QLatin1String("border-color: rgb(255, 255, 255);\n"
"background-color: rgb(149, 151, 255);"));
        le_type_machine2 = new QLineEdit(tab_4);
        le_type_machine2->setObjectName(QStringLiteral("le_type_machine2"));
        le_type_machine2->setGeometry(QRect(700, 90, 113, 20));
        le_type_machine2->setStyleSheet(QLatin1String("background-color: rgb(201, 204, 255);\n"
"border-color: rgb(255, 255, 255);"));
        le_etat_machine2 = new QLineEdit(tab_4);
        le_etat_machine2->setObjectName(QStringLiteral("le_etat_machine2"));
        le_etat_machine2->setGeometry(QRect(700, 140, 113, 20));
        le_etat_machine2->setStyleSheet(QLatin1String("background-color: rgb(201, 204, 255);\n"
"border-color: rgb(255, 255, 255);"));
        le_emplacement_machine2 = new QLineEdit(tab_4);
        le_emplacement_machine2->setObjectName(QStringLiteral("le_emplacement_machine2"));
        le_emplacement_machine2->setGeometry(QRect(700, 190, 113, 20));
        le_emplacement_machine2->setStyleSheet(QLatin1String("background-color: rgb(201, 204, 255);\n"
"border-color: rgb(255, 255, 255);"));
        pb_valider_modifE = new QPushButton(tab_4);
        pb_valider_modifE->setObjectName(QStringLiteral("pb_valider_modifE"));
        pb_valider_modifE->setGeometry(QRect(720, 240, 94, 30));
        pb_imprimerM = new QPushButton(tab_4);
        pb_imprimerM->setObjectName(QStringLiteral("pb_imprimerM"));
        pb_imprimerM->setGeometry(QRect(720, 380, 94, 30));
        rb_etatM = new QRadioButton(tab_4);
        rb_etatM->setObjectName(QStringLiteral("rb_etatM"));
        rb_etatM->setGeometry(QRect(580, 270, 82, 17));
        rb_emplacementM = new QRadioButton(tab_4);
        rb_emplacementM->setObjectName(QStringLiteral("rb_emplacementM"));
        rb_emplacementM->setGeometry(QRect(580, 300, 121, 17));
        rb_typeM = new QRadioButton(tab_4);
        rb_typeM->setObjectName(QStringLiteral("rb_typeM"));
        rb_typeM->setGeometry(QRect(580, 330, 82, 17));
        label_13 = new QLabel(tab_4);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(590, 40, 47, 13));
        label_14 = new QLabel(tab_4);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(590, 90, 47, 13));
        label_15 = new QLabel(tab_4);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(590, 140, 47, 13));
        label_16 = new QLabel(tab_4);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(590, 190, 91, 16));
        pb_rechercheM = new QPushButton(tab_4);
        pb_rechercheM->setObjectName(QStringLiteral("pb_rechercheM"));
        pb_rechercheM->setGeometry(QRect(500, 380, 94, 30));
        le_rechercheM = new QLineEdit(tab_4);
        le_rechercheM->setObjectName(QStringLiteral("le_rechercheM"));
        le_rechercheM->setGeometry(QRect(350, 380, 113, 20));
        tabWidget_afficherMachine->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        le_machine_supp = new QLineEdit(tab_5);
        le_machine_supp->setObjectName(QStringLiteral("le_machine_supp"));
        le_machine_supp->setGeometry(QRect(210, 129, 141, 31));
        le_machine_supp->setStyleSheet(QLatin1String("background-color: rgb(201, 204, 255);\n"
"border-color: rgb(255, 255, 255);"));
        label_3 = new QLabel(tab_5);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(100, 140, 61, 16));
        pb_supprimer_machine = new QPushButton(tab_5);
        pb_supprimer_machine->setObjectName(QStringLiteral("pb_supprimer_machine"));
        pb_supprimer_machine->setGeometry(QRect(410, 130, 94, 30));
        tabWidget_afficherMachine->addTab(tab_5, QString());
        tabWidget_gestionOumayma->addTab(afficherMachine, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 931, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget_gestionOumayma->setCurrentIndex(0);
        tabWidget_parents->setCurrentIndex(0);
        tabWidget_afficherMachine->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        groupBox_ajoutParent->setTitle(QApplication::translate("MainWindow", "Ajout", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Matricule", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Nom", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Prenom", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "Mail", Q_NULLPTR));
        pb_ajouter_parents->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Adresse", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Numero", Q_NULLPTR));
        tabWidget_parents->setTabText(tabWidget_parents->indexOf(ajourterParents), QApplication::translate("MainWindow", "Ajouter parent", Q_NULLPTR));
        pb_actualiser_parents->setText(QApplication::translate("MainWindow", "Actualiser", Q_NULLPTR));
        pb_modifier_parent->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        pb_validerModifP->setText(QApplication::translate("MainWindow", "Valider", Q_NULLPTR));
        pb_rechercheP->setText(QApplication::translate("MainWindow", "Rechercher", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "Matricule", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "Nom", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "Prenom", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindow", "Mail", Q_NULLPTR));
        label_21->setText(QApplication::translate("MainWindow", "Adresse", Q_NULLPTR));
        label_22->setText(QApplication::translate("MainWindow", "Numero", Q_NULLPTR));
        rb_triNomP->setText(QApplication::translate("MainWindow", "Tri Par nom", Q_NULLPTR));
        rb_triPrenomP->setText(QApplication::translate("MainWindow", "Tri par pr\303\251nom", Q_NULLPTR));
        rb_triNumeroP->setText(QApplication::translate("MainWindow", "Tri par numero", Q_NULLPTR));
        pd_exportPDFP->setText(QApplication::translate("MainWindow", "Export PDF", Q_NULLPTR));
        tabWidget_parents->setTabText(tabWidget_parents->indexOf(afficherParents), QApplication::translate("MainWindow", "Afficher parent", Q_NULLPTR));
        pb_supprimer_parent->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Id", Q_NULLPTR));
        tabWidget_parents->setTabText(tabWidget_parents->indexOf(supprimerParents), QApplication::translate("MainWindow", "Supprimer parent", Q_NULLPTR));
        tabWidget_gestionOumayma->setTabText(tabWidget_gestionOumayma->indexOf(tab_parents), QApplication::translate("MainWindow", "Parent", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Ajout", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Matricule", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Type", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Etat", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Emplacement", Q_NULLPTR));
        pb_ajouter_machine->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        tabWidget_afficherMachine->setTabText(tabWidget_afficherMachine->indexOf(tab_3), QApplication::translate("MainWindow", "Ajouter machine", Q_NULLPTR));
        pb_actualiser_machine->setText(QApplication::translate("MainWindow", "Actualiser", Q_NULLPTR));
        pb_modifier_machine->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        pb_valider_modifE->setText(QApplication::translate("MainWindow", "Valider", Q_NULLPTR));
        pb_imprimerM->setText(QApplication::translate("MainWindow", "Imprimer", Q_NULLPTR));
        rb_etatM->setText(QApplication::translate("MainWindow", "Tri par etat", Q_NULLPTR));
        rb_emplacementM->setText(QApplication::translate("MainWindow", "Tri par emplacement", Q_NULLPTR));
        rb_typeM->setText(QApplication::translate("MainWindow", "Tri par type", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "Matricule", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "Type", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "Etat", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "Emplacement", Q_NULLPTR));
        pb_rechercheM->setText(QApplication::translate("MainWindow", "Recherche", Q_NULLPTR));
        tabWidget_afficherMachine->setTabText(tabWidget_afficherMachine->indexOf(tab_4), QApplication::translate("MainWindow", "Afficher machines", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Matricule", Q_NULLPTR));
        pb_supprimer_machine->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        tabWidget_afficherMachine->setTabText(tabWidget_afficherMachine->indexOf(tab_5), QApplication::translate("MainWindow", "Supprimer machine", Q_NULLPTR));
        tabWidget_gestionOumayma->setTabText(tabWidget_gestionOumayma->indexOf(afficherMachine), QApplication::translate("MainWindow", "Electromenager", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
