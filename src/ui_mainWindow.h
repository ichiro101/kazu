/********************************************************************************
** Form generated from reading UI file 'mainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_kazuWindow
{
public:
    QAction *actionExit;
    QAction *actionOpen;
    QAction *actionManage_Library;
    QAction *actionSong_Lists;
    QAction *actionAbout;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QTableView *tableView;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QMenu *menuLibrary;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *kazuWindow)
    {
        if (kazuWindow->objectName().isEmpty())
            kazuWindow->setObjectName(QStringLiteral("kazuWindow"));
        kazuWindow->resize(779, 612);
        actionExit = new QAction(kazuWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionOpen = new QAction(kazuWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionManage_Library = new QAction(kazuWindow);
        actionManage_Library->setObjectName(QStringLiteral("actionManage_Library"));
        actionSong_Lists = new QAction(kazuWindow);
        actionSong_Lists->setObjectName(QStringLiteral("actionSong_Lists"));
        actionAbout = new QAction(kazuWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralwidget = new QWidget(kazuWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        tableView = new QTableView(tab);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout_2->addWidget(tableView);

        tabWidget->addTab(tab, QString());

        verticalLayout->addWidget(tabWidget);

        kazuWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(kazuWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 779, 24));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuLibrary = new QMenu(menubar);
        menuLibrary->setObjectName(QStringLiteral("menuLibrary"));
        kazuWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(kazuWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        kazuWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuLibrary->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuHelp->addAction(actionAbout);
        menuLibrary->addAction(actionSong_Lists);
        menuLibrary->addAction(actionManage_Library);

        retranslateUi(kazuWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(kazuWindow);
    } // setupUi

    void retranslateUi(QMainWindow *kazuWindow)
    {
        kazuWindow->setWindowTitle(QApplication::translate("kazuWindow", "kazu", 0));
        actionExit->setText(QApplication::translate("kazuWindow", "Exit", 0));
        actionOpen->setText(QApplication::translate("kazuWindow", "Open", 0));
        actionManage_Library->setText(QApplication::translate("kazuWindow", "Manage Library", 0));
        actionSong_Lists->setText(QApplication::translate("kazuWindow", "Song Lists", 0));
        actionAbout->setText(QApplication::translate("kazuWindow", "About", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("kazuWindow", "Playlist", 0));
        menuFile->setTitle(QApplication::translate("kazuWindow", "File", 0));
        menuHelp->setTitle(QApplication::translate("kazuWindow", "Help", 0));
        menuLibrary->setTitle(QApplication::translate("kazuWindow", "Library", 0));
    } // retranslateUi

};

namespace Ui {
    class kazuWindow: public Ui_kazuWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
