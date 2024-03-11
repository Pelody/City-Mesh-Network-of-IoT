/********************************************************************************
** Form generated from reading UI file 'recordpanel.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECORDPANEL_H
#define UI_RECORDPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RecordPanel
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *leFileName;
    QPushButton *pbBrowse;
    QGridLayout *gridLayout;
    QCheckBox *cbStopOnClose;
    QCheckBox *cbAutoIncrement;
    QCheckBox *cbDisableBuffering;
    QCheckBox *cbWindowsLE;
    QCheckBox *cbHeader;
    QCheckBox *cbRecordPaused;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *cbTimestamp;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *leSeparator;
    QLabel *label_2;
    QSpinBox *spDecimals;
    QLabel *label_3;
    QComboBox *cbTimestampFormat;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QToolButton *pbRecord;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *RecordPanel)
    {
        if (RecordPanel->objectName().isEmpty())
            RecordPanel->setObjectName(QString::fromUtf8("RecordPanel"));
        RecordPanel->resize(627, 209);
        horizontalLayout_2 = new QHBoxLayout(RecordPanel);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        leFileName = new QLineEdit(RecordPanel);
        leFileName->setObjectName(QString::fromUtf8("leFileName"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(leFileName->sizePolicy().hasHeightForWidth());
        leFileName->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(leFileName);

        pbBrowse = new QPushButton(RecordPanel);
        pbBrowse->setObjectName(QString::fromUtf8("pbBrowse"));

        horizontalLayout->addWidget(pbBrowse);


        verticalLayout->addLayout(horizontalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        cbStopOnClose = new QCheckBox(RecordPanel);
        cbStopOnClose->setObjectName(QString::fromUtf8("cbStopOnClose"));
        cbStopOnClose->setChecked(true);

        gridLayout->addWidget(cbStopOnClose, 2, 1, 1, 1);

        cbAutoIncrement = new QCheckBox(RecordPanel);
        cbAutoIncrement->setObjectName(QString::fromUtf8("cbAutoIncrement"));
        cbAutoIncrement->setChecked(true);

        gridLayout->addWidget(cbAutoIncrement, 1, 0, 1, 1);

        cbDisableBuffering = new QCheckBox(RecordPanel);
        cbDisableBuffering->setObjectName(QString::fromUtf8("cbDisableBuffering"));

        gridLayout->addWidget(cbDisableBuffering, 3, 0, 1, 1);

        cbWindowsLE = new QCheckBox(RecordPanel);
        cbWindowsLE->setObjectName(QString::fromUtf8("cbWindowsLE"));
        cbWindowsLE->setChecked(false);

        gridLayout->addWidget(cbWindowsLE, 3, 1, 1, 1);

        cbHeader = new QCheckBox(RecordPanel);
        cbHeader->setObjectName(QString::fromUtf8("cbHeader"));
        cbHeader->setChecked(true);

        gridLayout->addWidget(cbHeader, 1, 1, 1, 1);

        cbRecordPaused = new QCheckBox(RecordPanel);
        cbRecordPaused->setObjectName(QString::fromUtf8("cbRecordPaused"));
        cbRecordPaused->setChecked(true);

        gridLayout->addWidget(cbRecordPaused, 2, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        cbTimestamp = new QCheckBox(RecordPanel);
        cbTimestamp->setObjectName(QString::fromUtf8("cbTimestamp"));

        gridLayout->addWidget(cbTimestamp, 4, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout_4, 4, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(RecordPanel);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        leSeparator = new QLineEdit(RecordPanel);
        leSeparator->setObjectName(QString::fromUtf8("leSeparator"));
        leSeparator->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_3->addWidget(leSeparator);

        label_2 = new QLabel(RecordPanel);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        spDecimals = new QSpinBox(RecordPanel);
        spDecimals->setObjectName(QString::fromUtf8("spDecimals"));
        spDecimals->setValue(6);

        horizontalLayout_3->addWidget(spDecimals);

        label_3 = new QLabel(RecordPanel);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        cbTimestampFormat = new QComboBox(RecordPanel);
        cbTimestampFormat->setObjectName(QString::fromUtf8("cbTimestampFormat"));

        horizontalLayout_3->addWidget(cbTimestampFormat);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pbRecord = new QToolButton(RecordPanel);
        pbRecord->setObjectName(QString::fromUtf8("pbRecord"));
        pbRecord->setMinimumSize(QSize(85, 50));

        verticalLayout_2->addWidget(pbRecord);

        verticalSpacer_2 = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout_2->addLayout(verticalLayout_2);


        retranslateUi(RecordPanel);

        QMetaObject::connectSlotsByName(RecordPanel);
    } // setupUi

    void retranslateUi(QWidget *RecordPanel)
    {
        RecordPanel->setWindowTitle(QCoreApplication::translate("RecordPanel", "Form", nullptr));
#if QT_CONFIG(tooltip)
        leFileName->setToolTip(QCoreApplication::translate("RecordPanel", "You can use C `strftime` function format specifiers for timestamps in your file name.", nullptr));
#endif // QT_CONFIG(tooltip)
        leFileName->setPlaceholderText(QCoreApplication::translate("RecordPanel", "Enter file name or browse", nullptr));
#if QT_CONFIG(tooltip)
        pbBrowse->setToolTip(QCoreApplication::translate("RecordPanel", "Select record file", nullptr));
#endif // QT_CONFIG(tooltip)
        pbBrowse->setText(QCoreApplication::translate("RecordPanel", "Browse", nullptr));
        cbStopOnClose->setText(QCoreApplication::translate("RecordPanel", "Stop recording when port closed", nullptr));
#if QT_CONFIG(tooltip)
        cbAutoIncrement->setToolTip(QCoreApplication::translate("RecordPanel", "Increments file name automatically everytime a new recording starts", nullptr));
#endif // QT_CONFIG(tooltip)
        cbAutoIncrement->setText(QCoreApplication::translate("RecordPanel", "Auto increment file name", nullptr));
#if QT_CONFIG(tooltip)
        cbDisableBuffering->setToolTip(QCoreApplication::translate("RecordPanel", "Do not buffer when writing to file. Check this if you are using other software to open the file during recording.", nullptr));
#endif // QT_CONFIG(tooltip)
        cbDisableBuffering->setText(QCoreApplication::translate("RecordPanel", "Disable buffering", nullptr));
#if QT_CONFIG(tooltip)
        cbWindowsLE->setToolTip(QCoreApplication::translate("RecordPanel", "Use CR+LF as line endings. Some windows software may not show lines correctly otherwise. Can't be changed during recording.", nullptr));
#endif // QT_CONFIG(tooltip)
        cbWindowsLE->setText(QCoreApplication::translate("RecordPanel", "Windows Style Line Endings", nullptr));
#if QT_CONFIG(tooltip)
        cbHeader->setToolTip(QCoreApplication::translate("RecordPanel", "Channel names are written to the first line of record file", nullptr));
#endif // QT_CONFIG(tooltip)
        cbHeader->setText(QCoreApplication::translate("RecordPanel", "Write header line", nullptr));
#if QT_CONFIG(tooltip)
        cbRecordPaused->setToolTip(QCoreApplication::translate("RecordPanel", "Continue recording to file even when plotting is paused", nullptr));
#endif // QT_CONFIG(tooltip)
        cbRecordPaused->setText(QCoreApplication::translate("RecordPanel", "Record while paused", nullptr));
#if QT_CONFIG(tooltip)
        cbTimestamp->setToolTip(QCoreApplication::translate("RecordPanel", "Insert timestamp (milliseconds from epoch) as first column", nullptr));
#endif // QT_CONFIG(tooltip)
        cbTimestamp->setText(QCoreApplication::translate("RecordPanel", "Insert timestamp", nullptr));
        label->setText(QCoreApplication::translate("RecordPanel", "Column Separator:", nullptr));
#if QT_CONFIG(tooltip)
        leSeparator->setToolTip(QCoreApplication::translate("RecordPanel", "For TAB character enter \\t", nullptr));
#endif // QT_CONFIG(tooltip)
        leSeparator->setText(QCoreApplication::translate("RecordPanel", ",", nullptr));
        label_2->setText(QCoreApplication::translate("RecordPanel", "Decimals:", nullptr));
#if QT_CONFIG(tooltip)
        spDecimals->setToolTip(QCoreApplication::translate("RecordPanel", "Number of digits after comma", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("RecordPanel", "Timestamp In:", nullptr));
#if QT_CONFIG(tooltip)
        pbRecord->setToolTip(QCoreApplication::translate("RecordPanel", "Start/Stop Recording", nullptr));
#endif // QT_CONFIG(tooltip)
        pbRecord->setText(QCoreApplication::translate("RecordPanel", "Record", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RecordPanel: public Ui_RecordPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECORDPANEL_H
