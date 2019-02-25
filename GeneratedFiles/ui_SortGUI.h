/********************************************************************************
** Form generated from reading UI file 'SortGUI.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SORTGUI_H
#define UI_SORTGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SortGUIClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QWidget *widget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *win1;
    QLabel *label;
    QVBoxLayout *verticalLayout_2;
    QLabel *win2;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *win3;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *win4;
    QLabel *label_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SortGUIClass)
    {
        if (SortGUIClass->objectName().isEmpty())
            SortGUIClass->setObjectName(QStringLiteral("SortGUIClass"));
        SortGUIClass->resize(721, 683);
        centralWidget = new QWidget(SortGUIClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(320, 590, 75, 23));
        pushButton->setMinimumSize(QSize(75, 23));
        pushButton->setMaximumSize(QSize(75, 23));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(50, 22, 622, 548));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        win1 = new QLabel(widget);
        win1->setObjectName(QStringLiteral("win1"));
        win1->setMinimumSize(QSize(305, 250));
        win1->setMaximumSize(QSize(305, 250));

        verticalLayout->addWidget(win1);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        win2 = new QLabel(widget);
        win2->setObjectName(QStringLiteral("win2"));
        win2->setMinimumSize(QSize(305, 250));
        win2->setMaximumSize(QSize(305, 250));

        verticalLayout_2->addWidget(win2);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        win3 = new QLabel(widget);
        win3->setObjectName(QStringLiteral("win3"));
        win3->setMinimumSize(QSize(305, 250));
        win3->setMaximumSize(QSize(305, 250));

        verticalLayout_3->addWidget(win3);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_3->addWidget(label_3);


        gridLayout->addLayout(verticalLayout_3, 1, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        win4 = new QLabel(widget);
        win4->setObjectName(QStringLiteral("win4"));
        win4->setMinimumSize(QSize(305, 250));
        win4->setMaximumSize(QSize(305, 250));

        verticalLayout_4->addWidget(win4);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_4->addWidget(label_4);


        gridLayout->addLayout(verticalLayout_4, 1, 1, 1, 1);

        SortGUIClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SortGUIClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 721, 23));
        SortGUIClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SortGUIClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        SortGUIClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(SortGUIClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        SortGUIClass->setStatusBar(statusBar);

        retranslateUi(SortGUIClass);
        QObject::connect(pushButton, SIGNAL(clicked()), SortGUIClass, SLOT(slotSortPushButon()));

        QMetaObject::connectSlotsByName(SortGUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *SortGUIClass)
    {
        SortGUIClass->setWindowTitle(QApplication::translate("SortGUIClass", "SortGUI", 0));
        pushButton->setText(QApplication::translate("SortGUIClass", "\345\274\200\345\247\213\346\216\222\345\272\217", 0));
        win1->setText(QString());
        label->setText(QApplication::translate("SortGUIClass", "BubbleSort \345\206\222\346\263\241\346\216\222\345\272\217", 0));
        win2->setText(QString());
        label_2->setText(QApplication::translate("SortGUIClass", "SelectionSort \351\200\211\346\213\251\346\216\222\345\272\217", 0));
        win3->setText(QString());
        label_3->setText(QApplication::translate("SortGUIClass", "ShellSort \345\270\214\345\260\224\346\216\222\345\272\217", 0));
        win4->setText(QString());
        label_4->setText(QApplication::translate("SortGUIClass", "InsertSort \346\217\222\345\205\245\346\216\222\345\272\217", 0));
    } // retranslateUi

};

namespace Ui {
    class SortGUIClass: public Ui_SortGUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SORTGUI_H
