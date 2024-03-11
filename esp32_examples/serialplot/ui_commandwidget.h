/********************************************************************************
** Form generated from reading UI file 'commandwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMANDWIDGET_H
#define UI_COMMANDWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "commandedit.h"
#include "sneakylineedit.h"

QT_BEGIN_NAMESPACE

class Ui_CommandWidget
{
public:
    QHBoxLayout *horizontalLayout_2;
    QToolButton *pbDelete;
    SneakyLineEdit *leName;
    CommandEdit *leCommand;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbASCII;
    QPushButton *pbHEX;
    QPushButton *pbSend;

    void setupUi(QWidget *CommandWidget)
    {
        if (CommandWidget->objectName().isEmpty())
            CommandWidget->setObjectName(QString::fromUtf8("CommandWidget"));
        CommandWidget->resize(433, 34);
        horizontalLayout_2 = new QHBoxLayout(CommandWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pbDelete = new QToolButton(CommandWidget);
        pbDelete->setObjectName(QString::fromUtf8("pbDelete"));
        pbDelete->setMinimumSize(QSize(30, 0));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("list-remove");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        pbDelete->setIcon(icon);
        pbDelete->setAutoRaise(true);

        horizontalLayout_2->addWidget(pbDelete);

        leName = new SneakyLineEdit(CommandWidget);
        leName->setObjectName(QString::fromUtf8("leName"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(leName->sizePolicy().hasHeightForWidth());
        leName->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(leName);

        leCommand = new CommandEdit(CommandWidget);
        leCommand->setObjectName(QString::fromUtf8("leCommand"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(leCommand->sizePolicy().hasHeightForWidth());
        leCommand->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QString::fromUtf8("Monospace"));
        leCommand->setFont(font);
        leCommand->setClearButtonEnabled(true);

        horizontalLayout_2->addWidget(leCommand);

        frame = new QFrame(CommandWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy2);
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, -1, 0);
        pbASCII = new QPushButton(frame);
        pbASCII->setObjectName(QString::fromUtf8("pbASCII"));
        QSizePolicy sizePolicy3(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pbASCII->sizePolicy().hasHeightForWidth());
        pbASCII->setSizePolicy(sizePolicy3);
        pbASCII->setMinimumSize(QSize(40, 0));
        pbASCII->setCheckable(true);
        pbASCII->setChecked(true);
        pbASCII->setAutoExclusive(true);

        horizontalLayout->addWidget(pbASCII);

        pbHEX = new QPushButton(frame);
        pbHEX->setObjectName(QString::fromUtf8("pbHEX"));
        sizePolicy3.setHeightForWidth(pbHEX->sizePolicy().hasHeightForWidth());
        pbHEX->setSizePolicy(sizePolicy3);
        pbHEX->setMinimumSize(QSize(40, 0));
        pbHEX->setCheckable(true);
        pbHEX->setAutoExclusive(true);

        horizontalLayout->addWidget(pbHEX);


        horizontalLayout_2->addWidget(frame);

        pbSend = new QPushButton(CommandWidget);
        pbSend->setObjectName(QString::fromUtf8("pbSend"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(pbSend->sizePolicy().hasHeightForWidth());
        pbSend->setSizePolicy(sizePolicy4);

        horizontalLayout_2->addWidget(pbSend);


        retranslateUi(CommandWidget);

        QMetaObject::connectSlotsByName(CommandWidget);
    } // setupUi

    void retranslateUi(QWidget *CommandWidget)
    {
        CommandWidget->setWindowTitle(QCoreApplication::translate("CommandWidget", "Form", nullptr));
        pbDelete->setText(QString());
#if QT_CONFIG(tooltip)
        leCommand->setToolTip(QCoreApplication::translate("CommandWidget", "<html><head/><body><p>Enter your command here.</p><p>In ASCII mode you can use backslash '\\' to send some special characters. These are:<br/><span style=\" font-weight:600;\">\\n</span> : Line Feed (new line)<br/><span style=\" font-weight:600;\">\\r</span> : Carriage Return<br/><span style=\" font-weight:600;\">\\t</span> : Tab<br/><span style=\" font-weight:600;\">\\\\</span> : Backslash</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pbASCII->setText(QCoreApplication::translate("CommandWidget", "ASCII", nullptr));
        pbHEX->setText(QCoreApplication::translate("CommandWidget", "HEX", nullptr));
        pbSend->setText(QCoreApplication::translate("CommandWidget", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CommandWidget: public Ui_CommandWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMANDWIDGET_H
