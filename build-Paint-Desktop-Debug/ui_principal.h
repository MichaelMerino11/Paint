/********************************************************************************
** Form generated from reading UI file 'principal.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINCIPAL_H
#define UI_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Principal
{
public:
    QAction *actionNuevo;
    QAction *actionGuardar;
    QAction *actionColor;
    QAction *actionAncho;
    QAction *actionLineas;
    QAction *actionLibre;
    QAction *actionRect_nculos;
    QAction *actionCircunferencias;
    QAction *actionAbrir;
    QAction *actionLimpiar;
    QAction *actionLinea;
    QAction *actionRectangulo;
    QAction *actionCircunferencia;
    QAction *actionLIbre;
    QAction *actionColor_2;
    QAction *actionGrosor;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuArchivo;
    QMenu *menuFigura;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Principal)
    {
        if (Principal->objectName().isEmpty())
            Principal->setObjectName(QString::fromUtf8("Principal"));
        Principal->resize(800, 615);
        Principal->setMinimumSize(QSize(0, 50));
        Principal->setCursor(QCursor(Qt::CrossCursor));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Recursos/cepillo.png"), QSize(), QIcon::Normal, QIcon::Off);
        Principal->setWindowIcon(icon);
        actionNuevo = new QAction(Principal);
        actionNuevo->setObjectName(QString::fromUtf8("actionNuevo"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Recursos/archivo-nuevo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNuevo->setIcon(icon1);
        actionGuardar = new QAction(Principal);
        actionGuardar->setObjectName(QString::fromUtf8("actionGuardar"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Recursos/guardar-el-archivo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGuardar->setIcon(icon2);
        actionColor = new QAction(Principal);
        actionColor->setObjectName(QString::fromUtf8("actionColor"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Recursos/rueda-de-color.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionColor->setIcon(icon3);
        actionAncho = new QAction(Principal);
        actionAncho->setObjectName(QString::fromUtf8("actionAncho"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Recursos/ancho.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAncho->setIcon(icon4);
        actionLineas = new QAction(Principal);
        actionLineas->setObjectName(QString::fromUtf8("actionLineas"));
        actionLineas->setCheckable(true);
        actionLineas->setChecked(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Recursos/linea-diagonal.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLineas->setIcon(icon5);
        actionLibre = new QAction(Principal);
        actionLibre->setObjectName(QString::fromUtf8("actionLibre"));
        actionLibre->setCheckable(true);
        actionLibre->setChecked(true);
        actionLibre->setEnabled(true);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Recursos/pincel.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLibre->setIcon(icon6);
        actionLibre->setShortcutContext(Qt::WindowShortcut);
        actionLibre->setPriority(QAction::NormalPriority);
        actionRect_nculos = new QAction(Principal);
        actionRect_nculos->setObjectName(QString::fromUtf8("actionRect_nculos"));
        actionRect_nculos->setCheckable(true);
        actionRect_nculos->setEnabled(true);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Recursos/rectangulo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRect_nculos->setIcon(icon7);
        actionRect_nculos->setAutoRepeat(true);
        actionCircunferencias = new QAction(Principal);
        actionCircunferencias->setObjectName(QString::fromUtf8("actionCircunferencias"));
        actionCircunferencias->setCheckable(true);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/Recursos/lavado-en-seco.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCircunferencias->setIcon(icon8);
        actionAbrir = new QAction(Principal);
        actionAbrir->setObjectName(QString::fromUtf8("actionAbrir"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/Recursos/abrir-carpeta-con-documento.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbrir->setIcon(icon9);
        actionLimpiar = new QAction(Principal);
        actionLimpiar->setObjectName(QString::fromUtf8("actionLimpiar"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/Recursos/Limpiar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLimpiar->setIcon(icon10);
        actionLinea = new QAction(Principal);
        actionLinea->setObjectName(QString::fromUtf8("actionLinea"));
        actionRectangulo = new QAction(Principal);
        actionRectangulo->setObjectName(QString::fromUtf8("actionRectangulo"));
        actionCircunferencia = new QAction(Principal);
        actionCircunferencia->setObjectName(QString::fromUtf8("actionCircunferencia"));
        actionLIbre = new QAction(Principal);
        actionLIbre->setObjectName(QString::fromUtf8("actionLIbre"));
        actionColor_2 = new QAction(Principal);
        actionColor_2->setObjectName(QString::fromUtf8("actionColor_2"));
        actionGrosor = new QAction(Principal);
        actionGrosor->setObjectName(QString::fromUtf8("actionGrosor"));
        centralwidget = new QWidget(Principal);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Principal->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Principal);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuArchivo = new QMenu(menubar);
        menuArchivo->setObjectName(QString::fromUtf8("menuArchivo"));
        menuArchivo->setTearOffEnabled(false);
        menuArchivo->setToolTipsVisible(false);
        menuFigura = new QMenu(menubar);
        menuFigura->setObjectName(QString::fromUtf8("menuFigura"));
        Principal->setMenuBar(menubar);
        statusbar = new QStatusBar(Principal);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Principal->setStatusBar(statusbar);
        toolBar = new QToolBar(Principal);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setMinimumSize(QSize(0, 0));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        Principal->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuArchivo->menuAction());
        menubar->addAction(menuFigura->menuAction());
        menuArchivo->addSeparator();
        menuArchivo->addAction(actionNuevo);
        menuArchivo->addAction(actionAbrir);
        menuArchivo->addAction(actionGuardar);
        menuArchivo->addAction(actionLimpiar);
        menuFigura->addAction(actionLinea);
        menuFigura->addAction(actionRectangulo);
        menuFigura->addAction(actionCircunferencia);
        menuFigura->addAction(actionLIbre);
        menuFigura->addAction(actionColor_2);
        menuFigura->addAction(actionGrosor);
        toolBar->addAction(actionColor);
        toolBar->addAction(actionAncho);
        toolBar->addSeparator();
        toolBar->addAction(actionLibre);
        toolBar->addAction(actionLineas);
        toolBar->addAction(actionRect_nculos);
        toolBar->addAction(actionCircunferencias);

        retranslateUi(Principal);

        QMetaObject::connectSlotsByName(Principal);
    } // setupUi

    void retranslateUi(QMainWindow *Principal)
    {
        Principal->setWindowTitle(QCoreApplication::translate("Principal", "Principal", nullptr));
        actionNuevo->setText(QCoreApplication::translate("Principal", "Nuevo", nullptr));
#if QT_CONFIG(shortcut)
        actionNuevo->setShortcut(QCoreApplication::translate("Principal", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGuardar->setText(QCoreApplication::translate("Principal", "Guardar", nullptr));
#if QT_CONFIG(shortcut)
        actionGuardar->setShortcut(QCoreApplication::translate("Principal", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionColor->setText(QString());
#if QT_CONFIG(shortcut)
        actionColor->setShortcut(QCoreApplication::translate("Principal", "Ctrl+Shift+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAncho->setText(QString());
#if QT_CONFIG(shortcut)
        actionAncho->setShortcut(QCoreApplication::translate("Principal", "Ctrl+Shift+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionLineas->setText(QString());
        actionLibre->setText(QString());
        actionRect_nculos->setText(QString());
#if QT_CONFIG(statustip)
        actionRect_nculos->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        actionCircunferencias->setText(QString());
        actionAbrir->setText(QCoreApplication::translate("Principal", "Abrir", nullptr));
#if QT_CONFIG(shortcut)
        actionAbrir->setShortcut(QCoreApplication::translate("Principal", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionLimpiar->setText(QCoreApplication::translate("Principal", "Limpiar", nullptr));
        actionLinea->setText(QCoreApplication::translate("Principal", "Linea", nullptr));
        actionRectangulo->setText(QCoreApplication::translate("Principal", "Rectangulo", nullptr));
        actionCircunferencia->setText(QCoreApplication::translate("Principal", "Circunferencia", nullptr));
        actionLIbre->setText(QCoreApplication::translate("Principal", "LIbre", nullptr));
        actionColor_2->setText(QCoreApplication::translate("Principal", "Color", nullptr));
        actionGrosor->setText(QCoreApplication::translate("Principal", "Grosor", nullptr));
        menuArchivo->setTitle(QCoreApplication::translate("Principal", "Archivo", nullptr));
        menuFigura->setTitle(QCoreApplication::translate("Principal", "Figura", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("Principal", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Principal: public Ui_Principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINCIPAL_H
