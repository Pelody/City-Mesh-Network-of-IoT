/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "hidabletabwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionPause;
    QAction *actionClear;
    QAction *actionHelpAbout;
    QAction *actionDemoMode;
    QAction *actionExportCsv;
    QAction *actionQuit;
    QAction *actionReportBug;
    QAction *actionSaveSettings;
    QAction *actionLoadSettings;
    QAction *actionCheckUpdate;
    QAction *actionBarPlot;
    QAction *actionVertical;
    QAction *actionHorizontal;
    QAction *actionExportSvg;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QWidget *plotArea;
    HidableTabWidget *tabWidget;
    QWidget *tabLog;
    QHBoxLayout *horizontalLayout;
    QPlainTextEdit *ptLog;
    QMenuBar *menuBar;
    QMenu *menuHelp;
    QMenu *menuFile;
    QMenu *menuSecondary;
    QToolBar *plotToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(653, 650);
        actionPause = new QAction(MainWindow);
        actionPause->setObjectName(QString::fromUtf8("actionPause"));
        actionPause->setCheckable(true);
        actionPause->setChecked(false);
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("player_pause");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionPause->setIcon(icon);
        actionClear = new QAction(MainWindow);
        actionClear->setObjectName(QString::fromUtf8("actionClear"));
        QIcon icon1;
        iconThemeName = QString::fromUtf8("edit-clear");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionClear->setIcon(icon1);
        actionHelpAbout = new QAction(MainWindow);
        actionHelpAbout->setObjectName(QString::fromUtf8("actionHelpAbout"));
        actionDemoMode = new QAction(MainWindow);
        actionDemoMode->setObjectName(QString::fromUtf8("actionDemoMode"));
        actionDemoMode->setCheckable(true);
        actionExportCsv = new QAction(MainWindow);
        actionExportCsv->setObjectName(QString::fromUtf8("actionExportCsv"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionReportBug = new QAction(MainWindow);
        actionReportBug->setObjectName(QString::fromUtf8("actionReportBug"));
        actionSaveSettings = new QAction(MainWindow);
        actionSaveSettings->setObjectName(QString::fromUtf8("actionSaveSettings"));
        actionLoadSettings = new QAction(MainWindow);
        actionLoadSettings->setObjectName(QString::fromUtf8("actionLoadSettings"));
        actionCheckUpdate = new QAction(MainWindow);
        actionCheckUpdate->setObjectName(QString::fromUtf8("actionCheckUpdate"));
        actionBarPlot = new QAction(MainWindow);
        actionBarPlot->setObjectName(QString::fromUtf8("actionBarPlot"));
        actionBarPlot->setCheckable(true);
        actionVertical = new QAction(MainWindow);
        actionVertical->setObjectName(QString::fromUtf8("actionVertical"));
        actionVertical->setCheckable(true);
        actionHorizontal = new QAction(MainWindow);
        actionHorizontal->setObjectName(QString::fromUtf8("actionHorizontal"));
        actionHorizontal->setCheckable(true);
        actionHorizontal->setChecked(true);
        actionExportSvg = new QAction(MainWindow);
        actionExportSvg->setObjectName(QString::fromUtf8("actionExportSvg"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setOrientation(Qt::Horizontal);
        plotArea = new QWidget(splitter);
        plotArea->setObjectName(QString::fromUtf8("plotArea"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(plotArea->sizePolicy().hasHeightForWidth());
        plotArea->setSizePolicy(sizePolicy1);
        splitter->addWidget(plotArea);

        verticalLayout->addWidget(splitter);

        tabWidget = new HidableTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy2);
        tabWidget->setMinimumSize(QSize(0, 0));
        tabWidget->setMaximumSize(QSize(16777215, 16777215));
        tabWidget->setMovable(false);
        tabLog = new QWidget();
        tabLog->setObjectName(QString::fromUtf8("tabLog"));
        horizontalLayout = new QHBoxLayout(tabLog);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(4, 4, 4, 4);
        ptLog = new QPlainTextEdit(tabLog);
        ptLog->setObjectName(QString::fromUtf8("ptLog"));
        ptLog->setReadOnly(true);

        horizontalLayout->addWidget(ptLog);

        tabWidget->addTab(tabLog, QString());

        verticalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 653, 22));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuSecondary = new QMenu(menuBar);
        menuSecondary->setObjectName(QString::fromUtf8("menuSecondary"));
        MainWindow->setMenuBar(menuBar);
        plotToolBar = new QToolBar(MainWindow);
        plotToolBar->setObjectName(QString::fromUtf8("plotToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, plotToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuSecondary->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuHelp->addAction(actionDemoMode);
        menuHelp->addAction(actionReportBug);
        menuHelp->addAction(actionCheckUpdate);
        menuHelp->addAction(actionHelpAbout);
        menuFile->addAction(actionSaveSettings);
        menuFile->addAction(actionLoadSettings);
        menuFile->addAction(actionExportCsv);
        menuFile->addAction(actionExportSvg);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuSecondary->addAction(actionBarPlot);
        menuSecondary->addSeparator();
        menuSecondary->addAction(actionHorizontal);
        menuSecondary->addAction(actionVertical);
        plotToolBar->addAction(actionPause);
        plotToolBar->addAction(actionClear);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "SerialPlot", nullptr));
        actionPause->setText(QCoreApplication::translate("MainWindow", "Pause", nullptr));
#if QT_CONFIG(tooltip)
        actionPause->setToolTip(QCoreApplication::translate("MainWindow", "Pause Plotting", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionPause->setShortcut(QCoreApplication::translate("MainWindow", "P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionClear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
#if QT_CONFIG(shortcut)
        actionClear->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+K", nullptr));
#endif // QT_CONFIG(shortcut)
        actionHelpAbout->setText(QCoreApplication::translate("MainWindow", "&About", nullptr));
        actionDemoMode->setText(QCoreApplication::translate("MainWindow", "&Demo Mode", nullptr));
#if QT_CONFIG(tooltip)
        actionDemoMode->setToolTip(QCoreApplication::translate("MainWindow", "Toggle Demo Mode", nullptr));
#endif // QT_CONFIG(tooltip)
        actionExportCsv->setText(QCoreApplication::translate("MainWindow", "&Export CSV", nullptr));
#if QT_CONFIG(tooltip)
        actionExportCsv->setToolTip(QCoreApplication::translate("MainWindow", "Export plot data to CSV", nullptr));
#endif // QT_CONFIG(tooltip)
        actionQuit->setText(QCoreApplication::translate("MainWindow", "&Quit", nullptr));
#if QT_CONFIG(shortcut)
        actionQuit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionReportBug->setText(QCoreApplication::translate("MainWindow", "&Report a Bug", nullptr));
#if QT_CONFIG(tooltip)
        actionReportBug->setToolTip(QCoreApplication::translate("MainWindow", "Report a Bug on SerialPlot Website", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSaveSettings->setText(QCoreApplication::translate("MainWindow", "&Save Settings", nullptr));
#if QT_CONFIG(tooltip)
        actionSaveSettings->setToolTip(QCoreApplication::translate("MainWindow", "Save Settings to a File", nullptr));
#endif // QT_CONFIG(tooltip)
        actionLoadSettings->setText(QCoreApplication::translate("MainWindow", "&Load Settings", nullptr));
#if QT_CONFIG(tooltip)
        actionLoadSettings->setToolTip(QCoreApplication::translate("MainWindow", "Load Settings from a File", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCheckUpdate->setText(QCoreApplication::translate("MainWindow", "&Check Update", nullptr));
        actionBarPlot->setText(QCoreApplication::translate("MainWindow", "Bar Plot", nullptr));
        actionVertical->setText(QCoreApplication::translate("MainWindow", "Vertical", nullptr));
        actionHorizontal->setText(QCoreApplication::translate("MainWindow", "Horizontal", nullptr));
        actionExportSvg->setText(QCoreApplication::translate("MainWindow", "E&xport SVG", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabLog), QCoreApplication::translate("MainWindow", "Log", nullptr));
#if QT_CONFIG(tooltip)
        tabWidget->setTabToolTip(tabWidget->indexOf(tabLog), QCoreApplication::translate("MainWindow", "Error and Warning Messages", nullptr));
#endif // QT_CONFIG(tooltip)
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "&Help", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "&File", nullptr));
        menuSecondary->setTitle(QCoreApplication::translate("MainWindow", "Secondary", nullptr));
        plotToolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "Plot Toolbar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
