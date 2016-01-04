/********************************************************************************
** Form generated from reading UI file 'tictactoe.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TICTACTOE_H
#define UI_TICTACTOE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tictactoeClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QToolButton *toolButton;
    QCheckBox *checkBox;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *tictactoeClass)
    {
        if (tictactoeClass->objectName().isEmpty())
            tictactoeClass->setObjectName(QStringLiteral("tictactoeClass"));
        tictactoeClass->resize(600, 400);
        centralWidget = new QWidget(tictactoeClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 50, 75, 23));
        toolButton = new QToolButton(centralWidget);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(250, 70, 66, 19));
        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(170, 140, 70, 17));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(410, 100, 71, 31));
        tictactoeClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(tictactoeClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        tictactoeClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(tictactoeClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        tictactoeClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(tictactoeClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        tictactoeClass->setStatusBar(statusBar);

        retranslateUi(tictactoeClass);

        QMetaObject::connectSlotsByName(tictactoeClass);
    } // setupUi

    void retranslateUi(QMainWindow *tictactoeClass)
    {
        tictactoeClass->setWindowTitle(QApplication::translate("tictactoeClass", "tictactoe", 0));
        pushButton->setText(QApplication::translate("tictactoeClass", "PushButton", 0));
        toolButton->setText(QApplication::translate("tictactoeClass", "tool button", 0));
        checkBox->setText(QApplication::translate("tictactoeClass", "CheckBox", 0));
        label->setText(QApplication::translate("tictactoeClass", "Nara!", 0));
    } // retranslateUi

};

namespace Ui {
    class tictactoeClass: public Ui_tictactoeClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TICTACTOE_H
