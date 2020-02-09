/********************************************************************************
** Form generated from reading UI file 'ezrivet.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EZRIVET_H
#define UI_EZRIVET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EzRivet
{
public:
    QAction *actionRivet_Help;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuHelp;

    void setupUi(QMainWindow *EzRivet)
    {
        if (EzRivet->objectName().isEmpty())
            EzRivet->setObjectName(QString::fromUtf8("EzRivet"));
        EzRivet->resize(800, 600);
        actionRivet_Help = new QAction(EzRivet);
        actionRivet_Help->setObjectName(QString::fromUtf8("actionRivet_Help"));
        centralwidget = new QWidget(EzRivet);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        EzRivet->setCentralWidget(centralwidget);
        menubar = new QMenuBar(EzRivet);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 30));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        EzRivet->setMenuBar(menubar);

        menubar->addAction(menuHelp->menuAction());
        menuHelp->addAction(actionRivet_Help);

        retranslateUi(EzRivet);

        QMetaObject::connectSlotsByName(EzRivet);
    } // setupUi

    void retranslateUi(QMainWindow *EzRivet)
    {
        EzRivet->setWindowTitle(QApplication::translate("EzRivet", "EzRivet", nullptr));
        actionRivet_Help->setText(QApplication::translate("EzRivet", "Rivet Help", nullptr));
#ifndef QT_NO_SHORTCUT
        actionRivet_Help->setShortcut(QApplication::translate("EzRivet", "Ctrl+H", nullptr));
#endif // QT_NO_SHORTCUT
        menuHelp->setTitle(QApplication::translate("EzRivet", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EzRivet: public Ui_EzRivet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EZRIVET_H
