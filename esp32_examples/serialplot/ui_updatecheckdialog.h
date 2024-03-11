/********************************************************************************
** Form generated from reading UI file 'updatecheckdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATECHECKDIALOG_H
#define UI_UPDATECHECKDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_UpdateCheckDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QCheckBox *cbPeriodic;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *UpdateCheckDialog)
    {
        if (UpdateCheckDialog->objectName().isEmpty())
            UpdateCheckDialog->setObjectName(QString::fromUtf8("UpdateCheckDialog"));
        UpdateCheckDialog->resize(400, 148);
        verticalLayout = new QVBoxLayout(UpdateCheckDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(UpdateCheckDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setOpenExternalLinks(true);

        verticalLayout->addWidget(label);

        cbPeriodic = new QCheckBox(UpdateCheckDialog);
        cbPeriodic->setObjectName(QString::fromUtf8("cbPeriodic"));
        cbPeriodic->setChecked(false);

        verticalLayout->addWidget(cbPeriodic);

        buttonBox = new QDialogButtonBox(UpdateCheckDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(UpdateCheckDialog);
        QObject::connect(buttonBox, SIGNAL(clicked(QAbstractButton*)), UpdateCheckDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(UpdateCheckDialog);
    } // setupUi

    void retranslateUi(QDialog *UpdateCheckDialog)
    {
        UpdateCheckDialog->setWindowTitle(QCoreApplication::translate("UpdateCheckDialog", "Check Update", nullptr));
        label->setText(QCoreApplication::translate("UpdateCheckDialog", "Checking update...", nullptr));
#if QT_CONFIG(tooltip)
        cbPeriodic->setToolTip(QCoreApplication::translate("UpdateCheckDialog", "Updates will be checked only once a day at first start of the application", nullptr));
#endif // QT_CONFIG(tooltip)
        cbPeriodic->setText(QCoreApplication::translate("UpdateCheckDialog", "Check updates periodically", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpdateCheckDialog: public Ui_UpdateCheckDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATECHECKDIALOG_H
