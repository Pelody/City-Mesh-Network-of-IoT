/********************************************************************************
** Form generated from reading UI file 'snapshotview.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SNAPSHOTVIEW_H
#define UI_SNAPSHOTVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SnapshotView
{
public:
    QAction *actionSave;
    QAction *actionRename;
    QAction *actionClose;
    QAction *actionExportSvg;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QWidget *plotArea;
    QMenuBar *menubar;
    QMenu *menuSnapshot;

    void setupUi(QMainWindow *SnapshotView)
    {
        if (SnapshotView->objectName().isEmpty())
            SnapshotView->setObjectName(QString::fromUtf8("SnapshotView"));
        SnapshotView->resize(544, 449);
        actionSave = new QAction(SnapshotView);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionRename = new QAction(SnapshotView);
        actionRename->setObjectName(QString::fromUtf8("actionRename"));
        actionClose = new QAction(SnapshotView);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        actionExportSvg = new QAction(SnapshotView);
        actionExportSvg->setObjectName(QString::fromUtf8("actionExportSvg"));
        centralwidget = new QWidget(SnapshotView);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        plotArea = new QWidget(centralwidget);
        plotArea->setObjectName(QString::fromUtf8("plotArea"));

        verticalLayout->addWidget(plotArea);

        SnapshotView->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SnapshotView);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 544, 24));
        menuSnapshot = new QMenu(menubar);
        menuSnapshot->setObjectName(QString::fromUtf8("menuSnapshot"));
        SnapshotView->setMenuBar(menubar);

        menubar->addAction(menuSnapshot->menuAction());
        menuSnapshot->addAction(actionRename);
        menuSnapshot->addAction(actionSave);
        menuSnapshot->addAction(actionExportSvg);
        menuSnapshot->addAction(actionClose);

        retranslateUi(SnapshotView);
        QObject::connect(actionClose, SIGNAL(triggered()), SnapshotView, SLOT(close()));

        QMetaObject::connectSlotsByName(SnapshotView);
    } // setupUi

    void retranslateUi(QMainWindow *SnapshotView)
    {
        SnapshotView->setWindowTitle(QCoreApplication::translate("SnapshotView", "MainWindow", nullptr));
        actionSave->setText(QCoreApplication::translate("SnapshotView", "&Save as CSV", nullptr));
#if QT_CONFIG(tooltip)
        actionSave->setToolTip(QCoreApplication::translate("SnapshotView", "Save snapshot as CSV file", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRename->setText(QCoreApplication::translate("SnapshotView", "&Rename", nullptr));
#if QT_CONFIG(tooltip)
        actionRename->setToolTip(QCoreApplication::translate("SnapshotView", "Rename this snapshot", nullptr));
#endif // QT_CONFIG(tooltip)
        actionClose->setText(QCoreApplication::translate("SnapshotView", "&Close", nullptr));
#if QT_CONFIG(tooltip)
        actionClose->setToolTip(QCoreApplication::translate("SnapshotView", "Close Window", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionClose->setShortcut(QCoreApplication::translate("SnapshotView", "Ctrl+W", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExportSvg->setText(QCoreApplication::translate("SnapshotView", "E&xport SVG", nullptr));
#if QT_CONFIG(tooltip)
        actionExportSvg->setToolTip(QCoreApplication::translate("SnapshotView", "Export snapshot as SVG", nullptr));
#endif // QT_CONFIG(tooltip)
        menuSnapshot->setTitle(QCoreApplication::translate("SnapshotView", "&Snapshot", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SnapshotView: public Ui_SnapshotView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SNAPSHOTVIEW_H
