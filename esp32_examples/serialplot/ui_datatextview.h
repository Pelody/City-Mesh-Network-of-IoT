/********************************************************************************
** Form generated from reading UI file 'datatextview.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATATEXTVIEW_H
#define UI_DATATEXTVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DataTextView
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QCheckBox *cbEnable;
    QLabel *label;
    QSpinBox *spNumLines;
    QLabel *label_2;
    QSpinBox *spDecimals;
    QSpacerItem *verticalSpacer;
    QPushButton *pbClear;
    QPlainTextEdit *textView;

    void setupUi(QWidget *DataTextView)
    {
        if (DataTextView->objectName().isEmpty())
            DataTextView->setObjectName(QString::fromUtf8("DataTextView"));
        DataTextView->resize(451, 212);
        horizontalLayout = new QHBoxLayout(DataTextView);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        cbEnable = new QCheckBox(DataTextView);
        cbEnable->setObjectName(QString::fromUtf8("cbEnable"));

        verticalLayout->addWidget(cbEnable);

        label = new QLabel(DataTextView);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        spNumLines = new QSpinBox(DataTextView);
        spNumLines->setObjectName(QString::fromUtf8("spNumLines"));
        spNumLines->setMinimum(1);
        spNumLines->setMaximum(10000);
        spNumLines->setValue(1000);

        verticalLayout->addWidget(spNumLines);

        label_2 = new QLabel(DataTextView);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        spDecimals = new QSpinBox(DataTextView);
        spDecimals->setObjectName(QString::fromUtf8("spDecimals"));
        spDecimals->setMaximum(9);
        spDecimals->setValue(6);

        verticalLayout->addWidget(spDecimals);

        verticalSpacer = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pbClear = new QPushButton(DataTextView);
        pbClear->setObjectName(QString::fromUtf8("pbClear"));

        verticalLayout->addWidget(pbClear);


        horizontalLayout->addLayout(verticalLayout);

        textView = new QPlainTextEdit(DataTextView);
        textView->setObjectName(QString::fromUtf8("textView"));
        textView->setReadOnly(true);

        horizontalLayout->addWidget(textView);


        retranslateUi(DataTextView);

        QMetaObject::connectSlotsByName(DataTextView);
    } // setupUi

    void retranslateUi(QWidget *DataTextView)
    {
        DataTextView->setWindowTitle(QCoreApplication::translate("DataTextView", "Form", nullptr));
#if QT_CONFIG(tooltip)
        cbEnable->setToolTip(QCoreApplication::translate("DataTextView", "Enable display of plotted data as text.", nullptr));
#endif // QT_CONFIG(tooltip)
        cbEnable->setText(QCoreApplication::translate("DataTextView", "Enable", nullptr));
        label->setText(QCoreApplication::translate("DataTextView", "Num. Lines:", nullptr));
        label_2->setText(QCoreApplication::translate("DataTextView", "Decimals:", nullptr));
        pbClear->setText(QCoreApplication::translate("DataTextView", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DataTextView: public Ui_DataTextView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATATEXTVIEW_H
