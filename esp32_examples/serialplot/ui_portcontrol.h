/********************************************************************************
** Form generated from reading UI file 'portcontrol.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PORTCONTROL_H
#define UI_PORTCONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ledwidget.h"

QT_BEGIN_NAMESPACE

class Ui_PortControl
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *cbPortList;
    QComboBox *cbBaudRate;
    QLabel *label_2;
    QToolButton *pbReloadPorts;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_5;
    QRadioButton *rbNoParity;
    QRadioButton *rbOddParity;
    QRadioButton *rbEvenParity;
    QSpacerItem *verticalSpacer_2;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_7;
    QRadioButton *rb8Bits;
    QRadioButton *rb7Bits;
    QRadioButton *rb6Bits;
    QRadioButton *rb5Bits;
    QSpacerItem *verticalSpacer_3;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout;
    QRadioButton *rb1StopBit;
    QRadioButton *rb2StopBit;
    QSpacerItem *verticalSpacer_4;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_6;
    QRadioButton *rbNoFlowControl;
    QRadioButton *rbHardwareControl;
    QRadioButton *rbSoftwareControl;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_4;
    QToolButton *pbOpenPort;
    QGridLayout *gridLayout_2;
    LedWidget *ledRTS;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pbDTR;
    LedWidget *ledDTR;
    LedWidget *ledDSR;
    QLabel *labDSR;
    QPushButton *pbRTS;
    QLabel *labDCD;
    LedWidget *ledDCD;
    QLabel *labRI;
    LedWidget *ledRI;
    LedWidget *ledCTS;
    QLabel *labCTS;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *PortControl)
    {
        if (PortControl->objectName().isEmpty())
            PortControl->setObjectName(QString::fromUtf8("PortControl"));
        PortControl->resize(631, 232);
        horizontalLayout = new QHBoxLayout(PortControl);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(PortControl);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        cbPortList = new QComboBox(PortControl);
        cbPortList->setObjectName(QString::fromUtf8("cbPortList"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cbPortList->sizePolicy().hasHeightForWidth());
        cbPortList->setSizePolicy(sizePolicy);
        cbPortList->setEditable(true);

        gridLayout->addWidget(cbPortList, 0, 1, 1, 1);

        cbBaudRate = new QComboBox(PortControl);
        cbBaudRate->setObjectName(QString::fromUtf8("cbBaudRate"));
        cbBaudRate->setInputMethodHints(Qt::ImhPreferNumbers);
        cbBaudRate->setEditable(true);
        cbBaudRate->setInsertPolicy(QComboBox::InsertAtTop);

        gridLayout->addWidget(cbBaudRate, 1, 1, 1, 1);

        label_2 = new QLabel(PortControl);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        pbReloadPorts = new QToolButton(PortControl);
        pbReloadPorts->setObjectName(QString::fromUtf8("pbReloadPorts"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pbReloadPorts->sizePolicy().hasHeightForWidth());
        pbReloadPorts->setSizePolicy(sizePolicy1);
        pbReloadPorts->setMaximumSize(QSize(30, 16777215));

        gridLayout->addWidget(pbReloadPorts, 0, 2, 1, 1);


        verticalLayout_3->addLayout(gridLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        frame = new QFrame(PortControl);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        verticalLayout_5 = new QVBoxLayout(frame);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        rbNoParity = new QRadioButton(frame);
        rbNoParity->setObjectName(QString::fromUtf8("rbNoParity"));
        rbNoParity->setChecked(true);

        verticalLayout_5->addWidget(rbNoParity);

        rbOddParity = new QRadioButton(frame);
        rbOddParity->setObjectName(QString::fromUtf8("rbOddParity"));

        verticalLayout_5->addWidget(rbOddParity);

        rbEvenParity = new QRadioButton(frame);
        rbEvenParity->setObjectName(QString::fromUtf8("rbEvenParity"));

        verticalLayout_5->addWidget(rbEvenParity);

        verticalSpacer_2 = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);


        horizontalLayout_2->addWidget(frame);

        frame_3 = new QFrame(PortControl);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        verticalLayout_7 = new QVBoxLayout(frame_3);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        rb8Bits = new QRadioButton(frame_3);
        rb8Bits->setObjectName(QString::fromUtf8("rb8Bits"));
        rb8Bits->setChecked(true);

        verticalLayout_7->addWidget(rb8Bits);

        rb7Bits = new QRadioButton(frame_3);
        rb7Bits->setObjectName(QString::fromUtf8("rb7Bits"));

        verticalLayout_7->addWidget(rb7Bits);

        rb6Bits = new QRadioButton(frame_3);
        rb6Bits->setObjectName(QString::fromUtf8("rb6Bits"));

        verticalLayout_7->addWidget(rb6Bits);

        rb5Bits = new QRadioButton(frame_3);
        rb5Bits->setObjectName(QString::fromUtf8("rb5Bits"));

        verticalLayout_7->addWidget(rb5Bits);

        verticalSpacer_3 = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_3);


        horizontalLayout_2->addWidget(frame_3);

        frame_4 = new QFrame(PortControl);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        verticalLayout = new QVBoxLayout(frame_4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        rb1StopBit = new QRadioButton(frame_4);
        rb1StopBit->setObjectName(QString::fromUtf8("rb1StopBit"));
        rb1StopBit->setChecked(true);

        verticalLayout->addWidget(rb1StopBit);

        rb2StopBit = new QRadioButton(frame_4);
        rb2StopBit->setObjectName(QString::fromUtf8("rb2StopBit"));

        verticalLayout->addWidget(rb2StopBit);

        verticalSpacer_4 = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);


        horizontalLayout_2->addWidget(frame_4);

        frame_2 = new QFrame(PortControl);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        verticalLayout_6 = new QVBoxLayout(frame_2);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        rbNoFlowControl = new QRadioButton(frame_2);
        rbNoFlowControl->setObjectName(QString::fromUtf8("rbNoFlowControl"));
        rbNoFlowControl->setChecked(true);

        verticalLayout_6->addWidget(rbNoFlowControl);

        rbHardwareControl = new QRadioButton(frame_2);
        rbHardwareControl->setObjectName(QString::fromUtf8("rbHardwareControl"));

        verticalLayout_6->addWidget(rbHardwareControl);

        rbSoftwareControl = new QRadioButton(frame_2);
        rbSoftwareControl->setObjectName(QString::fromUtf8("rbSoftwareControl"));

        verticalLayout_6->addWidget(rbSoftwareControl);

        verticalSpacer_5 = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_5);


        horizontalLayout_2->addWidget(frame_2);


        verticalLayout_3->addLayout(horizontalLayout_2);


        horizontalLayout->addLayout(verticalLayout_3);

        horizontalSpacer = new QSpacerItem(10000, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        pbOpenPort = new QToolButton(PortControl);
        pbOpenPort->setObjectName(QString::fromUtf8("pbOpenPort"));
        sizePolicy1.setHeightForWidth(pbOpenPort->sizePolicy().hasHeightForWidth());
        pbOpenPort->setSizePolicy(sizePolicy1);
        pbOpenPort->setMinimumSize(QSize(85, 50));
        pbOpenPort->setCheckable(true);

        verticalLayout_4->addWidget(pbOpenPort);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        ledRTS = new LedWidget(PortControl);
        ledRTS->setObjectName(QString::fromUtf8("ledRTS"));
        ledRTS->setMinimumSize(QSize(15, 15));
        ledRTS->setMaximumSize(QSize(15, 15));

        gridLayout_2->addWidget(ledRTS, 1, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        pbDTR = new QPushButton(PortControl);
        pbDTR->setObjectName(QString::fromUtf8("pbDTR"));
        pbDTR->setMaximumSize(QSize(40, 20));

        gridLayout_2->addWidget(pbDTR, 0, 1, 1, 1);

        ledDTR = new LedWidget(PortControl);
        ledDTR->setObjectName(QString::fromUtf8("ledDTR"));
        ledDTR->setMinimumSize(QSize(15, 15));
        ledDTR->setMaximumSize(QSize(15, 15));

        gridLayout_2->addWidget(ledDTR, 0, 2, 1, 1);

        ledDSR = new LedWidget(PortControl);
        ledDSR->setObjectName(QString::fromUtf8("ledDSR"));
        ledDSR->setMinimumSize(QSize(15, 15));
        ledDSR->setMaximumSize(QSize(15, 15));

        gridLayout_2->addWidget(ledDSR, 3, 2, 1, 1);

        labDSR = new QLabel(PortControl);
        labDSR->setObjectName(QString::fromUtf8("labDSR"));
        labDSR->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(labDSR, 3, 1, 1, 1);

        pbRTS = new QPushButton(PortControl);
        pbRTS->setObjectName(QString::fromUtf8("pbRTS"));
        pbRTS->setMaximumSize(QSize(40, 20));

        gridLayout_2->addWidget(pbRTS, 1, 1, 1, 1);

        labDCD = new QLabel(PortControl);
        labDCD->setObjectName(QString::fromUtf8("labDCD"));
        labDCD->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(labDCD, 2, 1, 1, 1);

        ledDCD = new LedWidget(PortControl);
        ledDCD->setObjectName(QString::fromUtf8("ledDCD"));
        ledDCD->setMinimumSize(QSize(15, 15));
        ledDCD->setMaximumSize(QSize(15, 15));

        gridLayout_2->addWidget(ledDCD, 2, 2, 1, 1);

        labRI = new QLabel(PortControl);
        labRI->setObjectName(QString::fromUtf8("labRI"));
        labRI->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(labRI, 4, 1, 1, 1);

        ledRI = new LedWidget(PortControl);
        ledRI->setObjectName(QString::fromUtf8("ledRI"));
        ledRI->setMinimumSize(QSize(15, 15));
        ledRI->setMaximumSize(QSize(15, 15));

        gridLayout_2->addWidget(ledRI, 4, 2, 1, 1);

        ledCTS = new LedWidget(PortControl);
        ledCTS->setObjectName(QString::fromUtf8("ledCTS"));
        ledCTS->setMinimumSize(QSize(15, 15));
        ledCTS->setMaximumSize(QSize(15, 15));

        gridLayout_2->addWidget(ledCTS, 5, 2, 1, 1);

        labCTS = new QLabel(PortControl);
        labCTS->setObjectName(QString::fromUtf8("labCTS"));
        labCTS->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(labCTS, 5, 1, 1, 1);


        verticalLayout_4->addLayout(gridLayout_2);

        verticalSpacer = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_4);

        QWidget::setTabOrder(cbPortList, pbReloadPorts);
        QWidget::setTabOrder(pbReloadPorts, pbOpenPort);
        QWidget::setTabOrder(pbOpenPort, cbBaudRate);
        QWidget::setTabOrder(cbBaudRate, rbNoParity);
        QWidget::setTabOrder(rbNoParity, rbOddParity);
        QWidget::setTabOrder(rbOddParity, rbEvenParity);
        QWidget::setTabOrder(rbEvenParity, rb8Bits);
        QWidget::setTabOrder(rb8Bits, rb7Bits);
        QWidget::setTabOrder(rb7Bits, rb6Bits);
        QWidget::setTabOrder(rb6Bits, rb5Bits);
        QWidget::setTabOrder(rb5Bits, rb1StopBit);
        QWidget::setTabOrder(rb1StopBit, rb2StopBit);
        QWidget::setTabOrder(rb2StopBit, rbNoFlowControl);
        QWidget::setTabOrder(rbNoFlowControl, rbHardwareControl);
        QWidget::setTabOrder(rbHardwareControl, rbSoftwareControl);

        retranslateUi(PortControl);

        QMetaObject::connectSlotsByName(PortControl);
    } // setupUi

    void retranslateUi(QWidget *PortControl)
    {
        PortControl->setWindowTitle(QCoreApplication::translate("PortControl", "Form", nullptr));
        label->setText(QCoreApplication::translate("PortControl", "Port:", nullptr));
#if QT_CONFIG(tooltip)
        cbPortList->setToolTip(QCoreApplication::translate("PortControl", "You can enter a port name even if it's not listed, such as pseudo terminals.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        cbBaudRate->setToolTip(QCoreApplication::translate("PortControl", "You can enter a custom baud rate if it's supported by your OS/adapter.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("PortControl", "Baud Rate:", nullptr));
#if QT_CONFIG(tooltip)
        pbReloadPorts->setToolTip(QCoreApplication::translate("PortControl", "Reload the list of ports", nullptr));
#endif // QT_CONFIG(tooltip)
        pbReloadPorts->setText(QCoreApplication::translate("PortControl", "\342\206\272", nullptr));
        rbNoParity->setText(QCoreApplication::translate("PortControl", "No Parity", nullptr));
        rbOddParity->setText(QCoreApplication::translate("PortControl", "Odd Parity", nullptr));
        rbEvenParity->setText(QCoreApplication::translate("PortControl", "Even Parity", nullptr));
        rb8Bits->setText(QCoreApplication::translate("PortControl", "8 bits", nullptr));
        rb7Bits->setText(QCoreApplication::translate("PortControl", "7 bits", nullptr));
        rb6Bits->setText(QCoreApplication::translate("PortControl", "6 bits", nullptr));
        rb5Bits->setText(QCoreApplication::translate("PortControl", "5 bits", nullptr));
        rb1StopBit->setText(QCoreApplication::translate("PortControl", "1 Stop Bit", nullptr));
        rb2StopBit->setText(QCoreApplication::translate("PortControl", "2 Stop Bit", nullptr));
        rbNoFlowControl->setText(QCoreApplication::translate("PortControl", "No Flow Control", nullptr));
        rbHardwareControl->setText(QCoreApplication::translate("PortControl", "Hardware Control", nullptr));
        rbSoftwareControl->setText(QCoreApplication::translate("PortControl", "Software Control", nullptr));
#if QT_CONFIG(tooltip)
        pbOpenPort->setToolTip(QCoreApplication::translate("PortControl", "Toggle port status", nullptr));
#endif // QT_CONFIG(tooltip)
        pbOpenPort->setText(QCoreApplication::translate("PortControl", "Open", nullptr));
#if QT_CONFIG(tooltip)
        ledRTS->setToolTip(QCoreApplication::translate("PortControl", "Request To Send", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        pbDTR->setToolTip(QCoreApplication::translate("PortControl", "Data Terminal Ready", nullptr));
#endif // QT_CONFIG(tooltip)
        pbDTR->setText(QCoreApplication::translate("PortControl", "DTR", nullptr));
#if QT_CONFIG(tooltip)
        ledDTR->setToolTip(QCoreApplication::translate("PortControl", "Data Terminal Ready", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        ledDSR->setToolTip(QCoreApplication::translate("PortControl", "Data Set Ready", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        labDSR->setToolTip(QCoreApplication::translate("PortControl", "Data Set Ready", nullptr));
#endif // QT_CONFIG(tooltip)
        labDSR->setText(QCoreApplication::translate("PortControl", "DSR", nullptr));
#if QT_CONFIG(tooltip)
        pbRTS->setToolTip(QCoreApplication::translate("PortControl", "Request To Send", nullptr));
#endif // QT_CONFIG(tooltip)
        pbRTS->setText(QCoreApplication::translate("PortControl", "RTS", nullptr));
#if QT_CONFIG(tooltip)
        labDCD->setToolTip(QCoreApplication::translate("PortControl", "Data Carrier Detect", nullptr));
#endif // QT_CONFIG(tooltip)
        labDCD->setText(QCoreApplication::translate("PortControl", "DCD", nullptr));
#if QT_CONFIG(tooltip)
        ledDCD->setToolTip(QCoreApplication::translate("PortControl", "Data Carrier Detect", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        labRI->setToolTip(QCoreApplication::translate("PortControl", "Ring Indicator", nullptr));
#endif // QT_CONFIG(tooltip)
        labRI->setText(QCoreApplication::translate("PortControl", "RI", nullptr));
#if QT_CONFIG(tooltip)
        ledRI->setToolTip(QCoreApplication::translate("PortControl", "Ring Indicator", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        ledCTS->setToolTip(QCoreApplication::translate("PortControl", "Clear To Send", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        labCTS->setToolTip(QCoreApplication::translate("PortControl", "Clear To Send", nullptr));
#endif // QT_CONFIG(tooltip)
        labCTS->setText(QCoreApplication::translate("PortControl", "CTS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PortControl: public Ui_PortControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PORTCONTROL_H
