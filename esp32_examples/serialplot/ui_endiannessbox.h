/********************************************************************************
** Form generated from reading UI file 'endiannessbox.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENDIANNESSBOX_H
#define UI_ENDIANNESSBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EndiannessBox
{
public:
    QHBoxLayout *horizontalLayout;
    QRadioButton *rbLittleE;
    QRadioButton *rbBigE;

    void setupUi(QWidget *EndiannessBox)
    {
        if (EndiannessBox->objectName().isEmpty())
            EndiannessBox->setObjectName(QString::fromUtf8("EndiannessBox"));
        EndiannessBox->resize(202, 22);
        horizontalLayout = new QHBoxLayout(EndiannessBox);
        horizontalLayout->setSpacing(3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        rbLittleE = new QRadioButton(EndiannessBox);
        rbLittleE->setObjectName(QString::fromUtf8("rbLittleE"));
        rbLittleE->setChecked(true);

        horizontalLayout->addWidget(rbLittleE);

        rbBigE = new QRadioButton(EndiannessBox);
        rbBigE->setObjectName(QString::fromUtf8("rbBigE"));

        horizontalLayout->addWidget(rbBigE);


        retranslateUi(EndiannessBox);

        QMetaObject::connectSlotsByName(EndiannessBox);
    } // setupUi

    void retranslateUi(QWidget *EndiannessBox)
    {
        EndiannessBox->setWindowTitle(QCoreApplication::translate("EndiannessBox", "EndiannessBox", nullptr));
#if QT_CONFIG(tooltip)
        rbLittleE->setToolTip(QCoreApplication::translate("EndiannessBox", "least significant byte first", nullptr));
#endif // QT_CONFIG(tooltip)
        rbLittleE->setText(QCoreApplication::translate("EndiannessBox", "Little Endian", nullptr));
#if QT_CONFIG(tooltip)
        rbBigE->setToolTip(QCoreApplication::translate("EndiannessBox", "most significant byte first", nullptr));
#endif // QT_CONFIG(tooltip)
        rbBigE->setText(QCoreApplication::translate("EndiannessBox", "Big Endian", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EndiannessBox: public Ui_EndiannessBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENDIANNESSBOX_H
