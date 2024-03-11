/********************************************************************************
** Form generated from reading UI file 'asciireadersettings.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASCIIREADERSETTINGS_H
#define UI_ASCIIREADERSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AsciiReaderSettings
{
public:
    QFormLayout *formLayout;
    QLabel *label_4;
    QSpinBox *spNumOfChannels;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QRadioButton *rbComma;
    QRadioButton *rbSpace;
    QRadioButton *rbTab;
    QRadioButton *rbOtherDelimiter;
    QLineEdit *leDelimiter;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *rbFilterDisabled;
    QRadioButton *rbFilterInclude;
    QRadioButton *rbFilterExclude;
    QLineEdit *leFilterPrefix;
    QLabel *label_6;
    QCheckBox *cbHex;

    void setupUi(QWidget *AsciiReaderSettings)
    {
        if (AsciiReaderSettings->objectName().isEmpty())
            AsciiReaderSettings->setObjectName(QString::fromUtf8("AsciiReaderSettings"));
        AsciiReaderSettings->resize(562, 171);
        formLayout = new QFormLayout(AsciiReaderSettings);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(AsciiReaderSettings);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_4);

        spNumOfChannels = new QSpinBox(AsciiReaderSettings);
        spNumOfChannels->setObjectName(QString::fromUtf8("spNumOfChannels"));
        spNumOfChannels->setMinimumSize(QSize(60, 0));
        spNumOfChannels->setKeyboardTracking(false);
        spNumOfChannels->setMinimum(0);
        spNumOfChannels->setMaximum(32);

        formLayout->setWidget(0, QFormLayout::FieldRole, spNumOfChannels);

        label = new QLabel(AsciiReaderSettings);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        rbComma = new QRadioButton(AsciiReaderSettings);
        rbComma->setObjectName(QString::fromUtf8("rbComma"));
        rbComma->setChecked(true);

        horizontalLayout->addWidget(rbComma);

        rbSpace = new QRadioButton(AsciiReaderSettings);
        rbSpace->setObjectName(QString::fromUtf8("rbSpace"));

        horizontalLayout->addWidget(rbSpace);

        rbTab = new QRadioButton(AsciiReaderSettings);
        rbTab->setObjectName(QString::fromUtf8("rbTab"));

        horizontalLayout->addWidget(rbTab);

        rbOtherDelimiter = new QRadioButton(AsciiReaderSettings);
        rbOtherDelimiter->setObjectName(QString::fromUtf8("rbOtherDelimiter"));

        horizontalLayout->addWidget(rbOtherDelimiter);

        leDelimiter = new QLineEdit(AsciiReaderSettings);
        leDelimiter->setObjectName(QString::fromUtf8("leDelimiter"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(leDelimiter->sizePolicy().hasHeightForWidth());
        leDelimiter->setSizePolicy(sizePolicy);
        leDelimiter->setMaximumSize(QSize(30, 16777215));

        horizontalLayout->addWidget(leDelimiter);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout);

        label_2 = new QLabel(AsciiReaderSettings);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        rbFilterDisabled = new QRadioButton(AsciiReaderSettings);
        rbFilterDisabled->setObjectName(QString::fromUtf8("rbFilterDisabled"));
        rbFilterDisabled->setChecked(true);

        horizontalLayout_2->addWidget(rbFilterDisabled);

        rbFilterInclude = new QRadioButton(AsciiReaderSettings);
        rbFilterInclude->setObjectName(QString::fromUtf8("rbFilterInclude"));

        horizontalLayout_2->addWidget(rbFilterInclude);

        rbFilterExclude = new QRadioButton(AsciiReaderSettings);
        rbFilterExclude->setObjectName(QString::fromUtf8("rbFilterExclude"));

        horizontalLayout_2->addWidget(rbFilterExclude);

        leFilterPrefix = new QLineEdit(AsciiReaderSettings);
        leFilterPrefix->setObjectName(QString::fromUtf8("leFilterPrefix"));
        leFilterPrefix->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(leFilterPrefix->sizePolicy().hasHeightForWidth());
        leFilterPrefix->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(leFilterPrefix);


        formLayout->setLayout(4, QFormLayout::FieldRole, horizontalLayout_2);

        label_6 = new QLabel(AsciiReaderSettings);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        cbHex = new QCheckBox(AsciiReaderSettings);
        cbHex->setObjectName(QString::fromUtf8("cbHex"));

        formLayout->setWidget(5, QFormLayout::FieldRole, cbHex);


        retranslateUi(AsciiReaderSettings);

        QMetaObject::connectSlotsByName(AsciiReaderSettings);
    } // setupUi

    void retranslateUi(QWidget *AsciiReaderSettings)
    {
        AsciiReaderSettings->setWindowTitle(QCoreApplication::translate("AsciiReaderSettings", "Form", nullptr));
        label_4->setText(QCoreApplication::translate("AsciiReaderSettings", "Number Of Channels:", nullptr));
#if QT_CONFIG(tooltip)
        spNumOfChannels->setToolTip(QCoreApplication::translate("AsciiReaderSettings", "Select number of channels or set to 0 for Auto (determined from incoming data)", nullptr));
#endif // QT_CONFIG(tooltip)
        spNumOfChannels->setSpecialValueText(QCoreApplication::translate("AsciiReaderSettings", "Auto", nullptr));
        label->setText(QCoreApplication::translate("AsciiReaderSettings", "Column Delimiter:", nullptr));
        rbComma->setText(QCoreApplication::translate("AsciiReaderSettings", "comma", nullptr));
        rbSpace->setText(QCoreApplication::translate("AsciiReaderSettings", "space", nullptr));
        rbTab->setText(QCoreApplication::translate("AsciiReaderSettings", "tab", nullptr));
        rbOtherDelimiter->setText(QCoreApplication::translate("AsciiReaderSettings", "other:", nullptr));
#if QT_CONFIG(tooltip)
        leDelimiter->setToolTip(QCoreApplication::translate("AsciiReaderSettings", "Enter a custom delimiter character", nullptr));
#endif // QT_CONFIG(tooltip)
        leDelimiter->setInputMask(QString());
        leDelimiter->setText(QCoreApplication::translate("AsciiReaderSettings", "|", nullptr));
        label_2->setText(QCoreApplication::translate("AsciiReaderSettings", "Filter by Prefix:", nullptr));
        rbFilterDisabled->setText(QCoreApplication::translate("AsciiReaderSettings", "Disabled", nullptr));
#if QT_CONFIG(tooltip)
        rbFilterInclude->setToolTip(QCoreApplication::translate("AsciiReaderSettings", "Only read lines that start with prefix", nullptr));
#endif // QT_CONFIG(tooltip)
        rbFilterInclude->setText(QCoreApplication::translate("AsciiReaderSettings", "Include", nullptr));
#if QT_CONFIG(tooltip)
        rbFilterExclude->setToolTip(QCoreApplication::translate("AsciiReaderSettings", "Do not read lines that start with prefix", nullptr));
#endif // QT_CONFIG(tooltip)
        rbFilterExclude->setText(QCoreApplication::translate("AsciiReaderSettings", "Exclude", nullptr));
#if QT_CONFIG(tooltip)
        leFilterPrefix->setToolTip(QCoreApplication::translate("AsciiReaderSettings", "Prefix text used to filter incoming data", nullptr));
#endif // QT_CONFIG(tooltip)
        leFilterPrefix->setPlaceholderText(QCoreApplication::translate("AsciiReaderSettings", "prefix text", nullptr));
        label_6->setText(QCoreApplication::translate("AsciiReaderSettings", "Value format:", nullptr));
#if QT_CONFIG(tooltip)
        cbHex->setToolTip(QCoreApplication::translate("AsciiReaderSettings", "Expect HEX data instead of decimal.", nullptr));
#endif // QT_CONFIG(tooltip)
        cbHex->setText(QCoreApplication::translate("AsciiReaderSettings", "Hex data", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AsciiReaderSettings: public Ui_AsciiReaderSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASCIIREADERSETTINGS_H
