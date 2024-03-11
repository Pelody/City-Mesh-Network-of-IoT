/********************************************************************************
** Form generated from reading UI file 'demoreadersettings.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEMOREADERSETTINGS_H
#define UI_DEMOREADERSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DemoReaderSettings
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label_4;
    QSpinBox *spNumChannels;
    QSpacerItem *verticalSpacer;
    QLabel *label;

    void setupUi(QWidget *DemoReaderSettings)
    {
        if (DemoReaderSettings->objectName().isEmpty())
            DemoReaderSettings->setObjectName(QString::fromUtf8("DemoReaderSettings"));
        DemoReaderSettings->resize(444, 141);
        verticalLayout = new QVBoxLayout(DemoReaderSettings);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        label_4 = new QLabel(DemoReaderSettings);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_4);

        spNumChannels = new QSpinBox(DemoReaderSettings);
        spNumChannels->setObjectName(QString::fromUtf8("spNumChannels"));
        spNumChannels->setMinimumSize(QSize(60, 0));
        spNumChannels->setKeyboardTracking(false);
        spNumChannels->setMinimum(1);
        spNumChannels->setMaximum(32);
        spNumChannels->setValue(1);

        formLayout->setWidget(0, QFormLayout::FieldRole, spNumChannels);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label = new QLabel(DemoReaderSettings);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);


        retranslateUi(DemoReaderSettings);

        QMetaObject::connectSlotsByName(DemoReaderSettings);
    } // setupUi

    void retranslateUi(QWidget *DemoReaderSettings)
    {
        DemoReaderSettings->setWindowTitle(QCoreApplication::translate("DemoReaderSettings", "Form", nullptr));
        label_4->setText(QCoreApplication::translate("DemoReaderSettings", "Number Of Channels:", nullptr));
#if QT_CONFIG(tooltip)
        spNumChannels->setToolTip(QCoreApplication::translate("DemoReaderSettings", "Select number of channels or set to 0 for Auto (determined from incoming data)", nullptr));
#endif // QT_CONFIG(tooltip)
        spNumChannels->setSpecialValueText(QString());
        label->setText(QCoreApplication::translate("DemoReaderSettings", "Demo is enabled, exit demo for reader settings.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DemoReaderSettings: public Ui_DemoReaderSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEMOREADERSETTINGS_H
