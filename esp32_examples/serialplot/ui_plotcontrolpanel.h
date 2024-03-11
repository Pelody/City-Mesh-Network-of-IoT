/********************************************************************************
** Form generated from reading UI file 'plotcontrolpanel.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLOTCONTROLPANEL_H
#define UI_PLOTCONTROLPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlotControlPanel
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QTableView *tvChannelInfo;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pbColorSel;
    QLabel *label_2;
    QSpinBox *spLineThickness;
    QSpacerItem *horizontalSpacer;
    QToolButton *tbShowAll;
    QToolButton *tbHideAll;
    QToolButton *tbReset;
    QFrame *line;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QSpinBox *spNumOfSamples;
    QCheckBox *cbIndex;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lXmin;
    QDoubleSpinBox *spXmin;
    QLabel *lXmax;
    QDoubleSpinBox *spXmax;
    QCheckBox *cbAutoScale;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lYmin;
    QDoubleSpinBox *spYmin;
    QLabel *lYmax;
    QDoubleSpinBox *spYmax;
    QLabel *label;
    QComboBox *cbRangePresets;
    QLabel *label_4;
    QSpinBox *spPlotWidth;

    void setupUi(QWidget *PlotControlPanel)
    {
        if (PlotControlPanel->objectName().isEmpty())
            PlotControlPanel->setObjectName(QString::fromUtf8("PlotControlPanel"));
        PlotControlPanel->resize(865, 220);
        horizontalLayout = new QHBoxLayout(PlotControlPanel);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        widget = new QWidget(PlotControlPanel);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        tvChannelInfo = new QTableView(widget);
        tvChannelInfo->setObjectName(QString::fromUtf8("tvChannelInfo"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tvChannelInfo->sizePolicy().hasHeightForWidth());
        tvChannelInfo->setSizePolicy(sizePolicy1);
        tvChannelInfo->setMaximumSize(QSize(30000, 170));
        tvChannelInfo->setSelectionMode(QAbstractItemView::SingleSelection);
        tvChannelInfo->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_2->addWidget(tvChannelInfo);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        pbColorSel = new QPushButton(widget);
        pbColorSel->setObjectName(QString::fromUtf8("pbColorSel"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pbColorSel->sizePolicy().hasHeightForWidth());
        pbColorSel->setSizePolicy(sizePolicy2);
        pbColorSel->setMinimumSize(QSize(20, 20));
        pbColorSel->setMaximumSize(QSize(20, 20));
        pbColorSel->setStyleSheet(QString::fromUtf8("background-color: rgb(70, 141, 255);"));
        pbColorSel->setFlat(false);

        horizontalLayout_2->addWidget(pbColorSel);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        spLineThickness = new QSpinBox(widget);
        spLineThickness->setObjectName(QString::fromUtf8("spLineThickness"));
        spLineThickness->setMinimum(1);

        horizontalLayout_2->addWidget(spLineThickness);

        horizontalSpacer = new QSpacerItem(1, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        tbShowAll = new QToolButton(widget);
        tbShowAll->setObjectName(QString::fromUtf8("tbShowAll"));

        horizontalLayout_2->addWidget(tbShowAll);

        tbHideAll = new QToolButton(widget);
        tbHideAll->setObjectName(QString::fromUtf8("tbHideAll"));

        horizontalLayout_2->addWidget(tbHideAll);

        tbReset = new QToolButton(widget);
        tbReset->setObjectName(QString::fromUtf8("tbReset"));
        tbReset->setPopupMode(QToolButton::MenuButtonPopup);
        tbReset->setArrowType(Qt::NoArrow);

        horizontalLayout_2->addWidget(tbReset);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout->addWidget(widget);

        line = new QFrame(PlotControlPanel);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        label_3 = new QLabel(PlotControlPanel);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);

        spNumOfSamples = new QSpinBox(PlotControlPanel);
        spNumOfSamples->setObjectName(QString::fromUtf8("spNumOfSamples"));
        spNumOfSamples->setMinimumSize(QSize(100, 0));
        spNumOfSamples->setMaximumSize(QSize(100, 16777215));
        spNumOfSamples->setKeyboardTracking(false);
        spNumOfSamples->setMinimum(2);
        spNumOfSamples->setMaximum(10000000);
        spNumOfSamples->setValue(1000);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, spNumOfSamples);

        cbIndex = new QCheckBox(PlotControlPanel);
        cbIndex->setObjectName(QString::fromUtf8("cbIndex"));
        cbIndex->setChecked(true);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, cbIndex);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        lXmin = new QLabel(PlotControlPanel);
        lXmin->setObjectName(QString::fromUtf8("lXmin"));
        lXmin->setEnabled(false);

        horizontalLayout_4->addWidget(lXmin);

        spXmin = new QDoubleSpinBox(PlotControlPanel);
        spXmin->setObjectName(QString::fromUtf8("spXmin"));
        spXmin->setEnabled(false);
        spXmin->setMinimumSize(QSize(75, 0));
        spXmin->setMaximumSize(QSize(75, 16777215));
        spXmin->setValue(0.000000000000000);

        horizontalLayout_4->addWidget(spXmin);

        lXmax = new QLabel(PlotControlPanel);
        lXmax->setObjectName(QString::fromUtf8("lXmax"));
        lXmax->setEnabled(false);

        horizontalLayout_4->addWidget(lXmax);

        spXmax = new QDoubleSpinBox(PlotControlPanel);
        spXmax->setObjectName(QString::fromUtf8("spXmax"));
        spXmax->setEnabled(false);
        spXmax->setMaximumSize(QSize(75, 16777215));
        spXmax->setMaximum(1000.000000000000000);
        spXmax->setValue(1000.000000000000000);

        horizontalLayout_4->addWidget(spXmax);


        formLayout_2->setLayout(2, QFormLayout::FieldRole, horizontalLayout_4);

        cbAutoScale = new QCheckBox(PlotControlPanel);
        cbAutoScale->setObjectName(QString::fromUtf8("cbAutoScale"));
        cbAutoScale->setChecked(true);

        formLayout_2->setWidget(3, QFormLayout::LabelRole, cbAutoScale);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lYmin = new QLabel(PlotControlPanel);
        lYmin->setObjectName(QString::fromUtf8("lYmin"));
        lYmin->setEnabled(false);

        horizontalLayout_3->addWidget(lYmin);

        spYmin = new QDoubleSpinBox(PlotControlPanel);
        spYmin->setObjectName(QString::fromUtf8("spYmin"));
        spYmin->setEnabled(false);
        spYmin->setMinimumSize(QSize(75, 0));
        spYmin->setMaximumSize(QSize(75, 16777215));
        spYmin->setValue(0.000000000000000);

        horizontalLayout_3->addWidget(spYmin);

        lYmax = new QLabel(PlotControlPanel);
        lYmax->setObjectName(QString::fromUtf8("lYmax"));
        lYmax->setEnabled(false);

        horizontalLayout_3->addWidget(lYmax);

        spYmax = new QDoubleSpinBox(PlotControlPanel);
        spYmax->setObjectName(QString::fromUtf8("spYmax"));
        spYmax->setEnabled(false);
        spYmax->setMaximumSize(QSize(75, 16777215));
        spYmax->setMaximum(1000.000000000000000);
        spYmax->setValue(1000.000000000000000);

        horizontalLayout_3->addWidget(spYmax);


        formLayout_2->setLayout(3, QFormLayout::FieldRole, horizontalLayout_3);

        label = new QLabel(PlotControlPanel);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout_2->setWidget(6, QFormLayout::LabelRole, label);

        cbRangePresets = new QComboBox(PlotControlPanel);
        cbRangePresets->setObjectName(QString::fromUtf8("cbRangePresets"));

        formLayout_2->setWidget(6, QFormLayout::FieldRole, cbRangePresets);

        label_4 = new QLabel(PlotControlPanel);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_4);

        spPlotWidth = new QSpinBox(PlotControlPanel);
        spPlotWidth->setObjectName(QString::fromUtf8("spPlotWidth"));
        spPlotWidth->setMinimumSize(QSize(100, 0));
        spPlotWidth->setMaximumSize(QSize(100, 16777215));
        spPlotWidth->setKeyboardTracking(false);
        spPlotWidth->setMinimum(2);
        spPlotWidth->setMaximum(100000);
        spPlotWidth->setValue(1000);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, spPlotWidth);


        horizontalLayout->addLayout(formLayout_2);


        retranslateUi(PlotControlPanel);

        QMetaObject::connectSlotsByName(PlotControlPanel);
    } // setupUi

    void retranslateUi(QWidget *PlotControlPanel)
    {
        PlotControlPanel->setWindowTitle(QCoreApplication::translate("PlotControlPanel", "Form", nullptr));
        pbColorSel->setText(QString());
        label_2->setText(QCoreApplication::translate("PlotControlPanel", "Line Thickness", nullptr));
#if QT_CONFIG(tooltip)
        tbShowAll->setToolTip(QCoreApplication::translate("PlotControlPanel", "Show all channels", nullptr));
#endif // QT_CONFIG(tooltip)
        tbShowAll->setText(QCoreApplication::translate("PlotControlPanel", "Show All", nullptr));
#if QT_CONFIG(tooltip)
        tbHideAll->setToolTip(QCoreApplication::translate("PlotControlPanel", "Hide all channels", nullptr));
#endif // QT_CONFIG(tooltip)
        tbHideAll->setText(QCoreApplication::translate("PlotControlPanel", "Hide All", nullptr));
        tbReset->setText(QCoreApplication::translate("PlotControlPanel", "Reset", nullptr));
#if QT_CONFIG(tooltip)
        label_3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("PlotControlPanel", "Buffer Size:", nullptr));
#if QT_CONFIG(tooltip)
        spNumOfSamples->setToolTip(QCoreApplication::translate("PlotControlPanel", "Length of acquisition as number of samples", nullptr));
#endif // QT_CONFIG(tooltip)
        cbIndex->setText(QCoreApplication::translate("PlotControlPanel", "Index as X AXis", nullptr));
        lXmin->setText(QCoreApplication::translate("PlotControlPanel", "Xmin", nullptr));
#if QT_CONFIG(tooltip)
        spXmin->setToolTip(QCoreApplication::translate("PlotControlPanel", "lower limit of Y axis", nullptr));
#endif // QT_CONFIG(tooltip)
        lXmax->setText(QCoreApplication::translate("PlotControlPanel", "Xmax", nullptr));
#if QT_CONFIG(tooltip)
        spXmax->setToolTip(QCoreApplication::translate("PlotControlPanel", "upper limit of Y axis", nullptr));
#endif // QT_CONFIG(tooltip)
        cbAutoScale->setText(QCoreApplication::translate("PlotControlPanel", "Auto Scale Y Axis", nullptr));
        lYmin->setText(QCoreApplication::translate("PlotControlPanel", "Ymin", nullptr));
#if QT_CONFIG(tooltip)
        spYmin->setToolTip(QCoreApplication::translate("PlotControlPanel", "lower limit of Y axis", nullptr));
#endif // QT_CONFIG(tooltip)
        lYmax->setText(QCoreApplication::translate("PlotControlPanel", "Ymax", nullptr));
#if QT_CONFIG(tooltip)
        spYmax->setToolTip(QCoreApplication::translate("PlotControlPanel", "upper limit of Y axis", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("PlotControlPanel", "Select Range Preset:", nullptr));
#if QT_CONFIG(tooltip)
        label_4->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_4->setText(QCoreApplication::translate("PlotControlPanel", "Plot Width:", nullptr));
#if QT_CONFIG(tooltip)
        spPlotWidth->setToolTip(QCoreApplication::translate("PlotControlPanel", "Width of X axis as maximum number of samples that are shown in plot", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class PlotControlPanel: public Ui_PlotControlPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLOTCONTROLPANEL_H
