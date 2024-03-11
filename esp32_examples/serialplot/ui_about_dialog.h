/********************************************************************************
** Form generated from reading UI file 'about_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_DIALOG_H
#define UI_ABOUT_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lbAbout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbAboutQt;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QString::fromUtf8("AboutDialog"));
        AboutDialog->resize(519, 334);
        verticalLayout = new QVBoxLayout(AboutDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lbAbout = new QLabel(AboutDialog);
        lbAbout->setObjectName(QString::fromUtf8("lbAbout"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lbAbout->sizePolicy().hasHeightForWidth());
        lbAbout->setSizePolicy(sizePolicy);
        lbAbout->setWordWrap(true);
        lbAbout->setOpenExternalLinks(true);

        verticalLayout->addWidget(lbAbout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbAboutQt = new QPushButton(AboutDialog);
        pbAboutQt->setObjectName(QString::fromUtf8("pbAboutQt"));

        horizontalLayout->addWidget(pbAboutQt);

        buttonBox = new QDialogButtonBox(AboutDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(AboutDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AboutDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AboutDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QCoreApplication::translate("AboutDialog", "About", nullptr));
        lbAbout->setText(QCoreApplication::translate("AboutDialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">SerialPlot</span></p><p align=\"center\">$VERSION_STRING$</p><p align=\"center\">Developed by Hasan Yavuz \303\226zderya</p><p align=\"center\">Using Qt (<a href=\"https://www.qt.io/\"><span style=\" text-decoration: underline; color:#0000ff;\">https://www.qt.io/</span></a>) and Qwt (<a href=\"http://qwt.sf.net\"><span style=\" text-decoration: underline; color:#0000ff;\">http://qwt.sf.net</span></a>)</p><p align=\"center\"><br/></p><p align=\"center\">This software is GPL licensed. You can obtain source code from <a href=\"https://hg.sr.ht/~hyozd/serialplot/\"><span style=\" text-decoration: underline; color:#0000ff;\">https://hg.sr.ht/~hyozd/serialplot/</span></a>.</p><p align=\"center\"><br/></p><p align=\"right\"><span style=\" font-size:8pt;\">RevID: $VERSION_REVISION$<br/></span></p></body></html>", nullptr));
        pbAboutQt->setText(QCoreApplication::translate("AboutDialog", "About Qt", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_DIALOG_H
