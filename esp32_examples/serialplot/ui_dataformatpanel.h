/********************************************************************************
** Form generated from reading UI file 'dataformatpanel.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATAFORMATPANEL_H
#define UI_DATAFORMATPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DataFormatPanel
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *vlRadioButtons;
    QRadioButton *rbBinary;
    QRadioButton *rbAscii;
    QRadioButton *rbFramed;
    QSpacerItem *verticalSpacer;
    QFrame *line;

    void setupUi(QWidget *DataFormatPanel)
    {
        if (DataFormatPanel->objectName().isEmpty())
            DataFormatPanel->setObjectName(QString::fromUtf8("DataFormatPanel"));
        DataFormatPanel->resize(607, 181);
        horizontalLayout = new QHBoxLayout(DataFormatPanel);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        vlRadioButtons = new QVBoxLayout();
        vlRadioButtons->setObjectName(QString::fromUtf8("vlRadioButtons"));
        rbBinary = new QRadioButton(DataFormatPanel);
        rbBinary->setObjectName(QString::fromUtf8("rbBinary"));
        rbBinary->setChecked(true);

        vlRadioButtons->addWidget(rbBinary);

        rbAscii = new QRadioButton(DataFormatPanel);
        rbAscii->setObjectName(QString::fromUtf8("rbAscii"));

        vlRadioButtons->addWidget(rbAscii);

        rbFramed = new QRadioButton(DataFormatPanel);
        rbFramed->setObjectName(QString::fromUtf8("rbFramed"));

        vlRadioButtons->addWidget(rbFramed);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vlRadioButtons->addItem(verticalSpacer);


        horizontalLayout->addLayout(vlRadioButtons);

        line = new QFrame(DataFormatPanel);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);


        retranslateUi(DataFormatPanel);

        QMetaObject::connectSlotsByName(DataFormatPanel);
    } // setupUi

    void retranslateUi(QWidget *DataFormatPanel)
    {
        DataFormatPanel->setWindowTitle(QCoreApplication::translate("DataFormatPanel", "Data Format", nullptr));
#if QT_CONFIG(tooltip)
        rbBinary->setToolTip(QCoreApplication::translate("DataFormatPanel", "Data is sent as consecutive samples in binary form. Syncing can be a problem.", nullptr));
#endif // QT_CONFIG(tooltip)
        rbBinary->setText(QCoreApplication::translate("DataFormatPanel", "Simple Binary", nullptr));
#if QT_CONFIG(tooltip)
        rbAscii->setToolTip(QCoreApplication::translate("DataFormatPanel", "Data is sent in the form of ASCII text as comma seperated values. Easy to implement.", nullptr));
#endif // QT_CONFIG(tooltip)
        rbAscii->setText(QCoreApplication::translate("DataFormatPanel", "ASCII", nullptr));
#if QT_CONFIG(tooltip)
        rbFramed->setToolTip(QCoreApplication::translate("DataFormatPanel", "Define a custom binary frame. Powerful.", nullptr));
#endif // QT_CONFIG(tooltip)
        rbFramed->setText(QCoreApplication::translate("DataFormatPanel", "Custom Frame", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DataFormatPanel: public Ui_DataFormatPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATAFORMATPANEL_H
