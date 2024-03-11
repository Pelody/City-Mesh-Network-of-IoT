/********************************************************************************
** Form generated from reading UI file 'commandpanel.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMANDPANEL_H
#define UI_COMMANDPANEL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CommandPanel
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *pbNew;

    void setupUi(QWidget *CommandPanel)
    {
        if (CommandPanel->objectName().isEmpty())
            CommandPanel->setObjectName(QString::fromUtf8("CommandPanel"));
        CommandPanel->resize(583, 109);
        CommandPanel->setAutoFillBackground(false);
        verticalLayout = new QVBoxLayout(CommandPanel);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        scrollArea = new QScrollArea(CommandPanel);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::StyledPanel);
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 563, 16));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy);
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        pbNew = new QPushButton(CommandPanel);
        pbNew->setObjectName(QString::fromUtf8("pbNew"));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("list-add")));
        pbNew->setIcon(icon);

        verticalLayout->addWidget(pbNew);


        retranslateUi(CommandPanel);

        QMetaObject::connectSlotsByName(CommandPanel);
    } // setupUi

    void retranslateUi(QWidget *CommandPanel)
    {
        CommandPanel->setWindowTitle(QCoreApplication::translate("CommandPanel", "Form", nullptr));
        pbNew->setText(QCoreApplication::translate("CommandPanel", "New Command", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CommandPanel: public Ui_CommandPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMANDPANEL_H
