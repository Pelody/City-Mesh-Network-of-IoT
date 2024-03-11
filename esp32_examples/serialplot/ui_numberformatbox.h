/********************************************************************************
** Form generated from reading UI file 'numberformatbox.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NUMBERFORMATBOX_H
#define UI_NUMBERFORMATBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NumberFormatBox
{
public:
    QHBoxLayout *horizontalLayout;
    QRadioButton *rbUint8;
    QRadioButton *rbUint16;
    QRadioButton *rbUint32;
    QRadioButton *rbInt8;
    QRadioButton *rbInt16;
    QRadioButton *rbInt32;
    QRadioButton *rbFloat;
    QRadioButton *rbDouble;

    void setupUi(QWidget *NumberFormatBox)
    {
        if (NumberFormatBox->objectName().isEmpty())
            NumberFormatBox->setObjectName(QString::fromUtf8("NumberFormatBox"));
        NumberFormatBox->resize(522, 22);
        horizontalLayout = new QHBoxLayout(NumberFormatBox);
        horizontalLayout->setSpacing(3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        rbUint8 = new QRadioButton(NumberFormatBox);
        rbUint8->setObjectName(QString::fromUtf8("rbUint8"));
        rbUint8->setChecked(true);

        horizontalLayout->addWidget(rbUint8);

        rbUint16 = new QRadioButton(NumberFormatBox);
        rbUint16->setObjectName(QString::fromUtf8("rbUint16"));

        horizontalLayout->addWidget(rbUint16);

        rbUint32 = new QRadioButton(NumberFormatBox);
        rbUint32->setObjectName(QString::fromUtf8("rbUint32"));

        horizontalLayout->addWidget(rbUint32);

        rbInt8 = new QRadioButton(NumberFormatBox);
        rbInt8->setObjectName(QString::fromUtf8("rbInt8"));

        horizontalLayout->addWidget(rbInt8);

        rbInt16 = new QRadioButton(NumberFormatBox);
        rbInt16->setObjectName(QString::fromUtf8("rbInt16"));

        horizontalLayout->addWidget(rbInt16);

        rbInt32 = new QRadioButton(NumberFormatBox);
        rbInt32->setObjectName(QString::fromUtf8("rbInt32"));

        horizontalLayout->addWidget(rbInt32);

        rbFloat = new QRadioButton(NumberFormatBox);
        rbFloat->setObjectName(QString::fromUtf8("rbFloat"));

        horizontalLayout->addWidget(rbFloat);

        rbDouble = new QRadioButton(NumberFormatBox);
        rbDouble->setObjectName(QString::fromUtf8("rbDouble"));

        horizontalLayout->addWidget(rbDouble);


        retranslateUi(NumberFormatBox);

        QMetaObject::connectSlotsByName(NumberFormatBox);
    } // setupUi

    void retranslateUi(QWidget *NumberFormatBox)
    {
        NumberFormatBox->setWindowTitle(QCoreApplication::translate("NumberFormatBox", "NumberFormat", nullptr));
#if QT_CONFIG(tooltip)
        rbUint8->setToolTip(QCoreApplication::translate("NumberFormatBox", "unsigned 1 byte integer", nullptr));
#endif // QT_CONFIG(tooltip)
        rbUint8->setText(QCoreApplication::translate("NumberFormatBox", "uint8", nullptr));
#if QT_CONFIG(tooltip)
        rbUint16->setToolTip(QCoreApplication::translate("NumberFormatBox", "unsigned 2 bytes integer", nullptr));
#endif // QT_CONFIG(tooltip)
        rbUint16->setText(QCoreApplication::translate("NumberFormatBox", "uint16", nullptr));
#if QT_CONFIG(tooltip)
        rbUint32->setToolTip(QCoreApplication::translate("NumberFormatBox", "unsigned 4 bytes integer", nullptr));
#endif // QT_CONFIG(tooltip)
        rbUint32->setText(QCoreApplication::translate("NumberFormatBox", "uint32", nullptr));
#if QT_CONFIG(tooltip)
        rbInt8->setToolTip(QCoreApplication::translate("NumberFormatBox", "signed 1 byte integer", nullptr));
#endif // QT_CONFIG(tooltip)
        rbInt8->setText(QCoreApplication::translate("NumberFormatBox", "int8", nullptr));
#if QT_CONFIG(tooltip)
        rbInt16->setToolTip(QCoreApplication::translate("NumberFormatBox", "signed 2 bytes integer", nullptr));
#endif // QT_CONFIG(tooltip)
        rbInt16->setText(QCoreApplication::translate("NumberFormatBox", "int16", nullptr));
#if QT_CONFIG(tooltip)
        rbInt32->setToolTip(QCoreApplication::translate("NumberFormatBox", "signed 4 bytes integer", nullptr));
#endif // QT_CONFIG(tooltip)
        rbInt32->setText(QCoreApplication::translate("NumberFormatBox", "int32", nullptr));
#if QT_CONFIG(tooltip)
        rbFloat->setToolTip(QCoreApplication::translate("NumberFormatBox", "4 bytes floating point number", nullptr));
#endif // QT_CONFIG(tooltip)
        rbFloat->setText(QCoreApplication::translate("NumberFormatBox", "float", nullptr));
#if QT_CONFIG(tooltip)
        rbDouble->setToolTip(QCoreApplication::translate("NumberFormatBox", "8 bytes double precision floating point number", nullptr));
#endif // QT_CONFIG(tooltip)
        rbDouble->setText(QCoreApplication::translate("NumberFormatBox", "double", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NumberFormatBox: public Ui_NumberFormatBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NUMBERFORMATBOX_H
