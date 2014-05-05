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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionOpen;
    QAction *actionManage_Library;
    QAction *actionAbout;
    QAction *actionSearch_Library;
    QAction *actionSearch_Current_Playlist;
    QAction *actionBrowse_Library;
    QAction *actionPlay;
    QAction *actionPause;
    QAction *actionStop;
    QAction *actionPrev;
    QAction *actionNext;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QProgressBar *progressBar;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *playButton;
    QPushButton *pauseButton;
    QPushButton *stopButton;
    QPushButton *prevButton;
    QPushButton *nextButton;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QSlider *volumeControl;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QTableView *tableView;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QMenu *menuLibrary;
    QMenu *menuPlay;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(851, 596);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionManage_Library = new QAction(MainWindow);
        actionManage_Library->setObjectName(QStringLiteral("actionManage_Library"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionSearch_Library = new QAction(MainWindow);
        actionSearch_Library->setObjectName(QStringLiteral("actionSearch_Library"));
        actionSearch_Current_Playlist = new QAction(MainWindow);
        actionSearch_Current_Playlist->setObjectName(QStringLiteral("actionSearch_Current_Playlist"));
        actionBrowse_Library = new QAction(MainWindow);
        actionBrowse_Library->setObjectName(QStringLiteral("actionBrowse_Library"));
        actionPlay = new QAction(MainWindow);
        actionPlay->setObjectName(QStringLiteral("actionPlay"));
        actionPause = new QAction(MainWindow);
        actionPause->setObjectName(QStringLiteral("actionPause"));
        actionStop = new QAction(MainWindow);
        actionStop->setObjectName(QStringLiteral("actionStop"));
        actionPrev = new QAction(MainWindow);
        actionPrev->setObjectName(QStringLiteral("actionPrev"));
        actionNext = new QAction(MainWindow);
        actionNext->setObjectName(QStringLiteral("actionNext"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);
        progressBar->setTextVisible(false);

        horizontalLayout_2->addWidget(progressBar);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        playButton = new QPushButton(centralwidget);
        playButton->setObjectName(QStringLiteral("playButton"));

        horizontalLayout->addWidget(playButton);

        pauseButton = new QPushButton(centralwidget);
        pauseButton->setObjectName(QStringLiteral("pauseButton"));

        horizontalLayout->addWidget(pauseButton);

        stopButton = new QPushButton(centralwidget);
        stopButton->setObjectName(QStringLiteral("stopButton"));

        horizontalLayout->addWidget(stopButton);

        prevButton = new QPushButton(centralwidget);
        prevButton->setObjectName(QStringLiteral("prevButton"));

        horizontalLayout->addWidget(prevButton);

        nextButton = new QPushButton(centralwidget);
        nextButton->setObjectName(QStringLiteral("nextButton"));

        horizontalLayout->addWidget(nextButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        volumeControl = new QSlider(centralwidget);
        volumeControl->setObjectName(QStringLiteral("volumeControl"));
        volumeControl->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(volumeControl);


        verticalLayout->addLayout(horizontalLayout);

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

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 851, 24));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuLibrary = new QMenu(menubar);
        menuLibrary->setObjectName(QStringLiteral("menuLibrary"));
        menuPlay = new QMenu(menubar);
        menuPlay->setObjectName(QStringLiteral("menuPlay"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuPlay->menuAction());
        menubar->addAction(menuLibrary->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuHelp->addAction(actionAbout);
        menuLibrary->addAction(actionBrowse_Library);
        menuLibrary->addAction(actionSearch_Library);
        menuLibrary->addAction(actionSearch_Current_Playlist);
        menuLibrary->addSeparator();
        menuLibrary->addAction(actionManage_Library);
        menuPlay->addAction(actionPlay);
        menuPlay->addAction(actionPause);
        menuPlay->addAction(actionStop);
        menuPlay->addSeparator();
        menuPlay->addAction(actionPrev);
        menuPlay->addAction(actionNext);

        retranslateUi(MainWindow);
        QObject::connect(playButton, SIGNAL(clicked()), actionPlay, SLOT(trigger()));
        QObject::connect(pauseButton, SIGNAL(clicked()), actionPause, SLOT(trigger()));
        QObject::connect(prevButton, SIGNAL(clicked()), actionPrev, SLOT(trigger()));
        QObject::connect(nextButton, SIGNAL(clicked()), actionNext, SLOT(trigger()));
        QObject::connect(stopButton, SIGNAL(clicked()), actionStop, SLOT(trigger()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "kazu", 0));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0));
        actionExit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", 0));
        actionManage_Library->setText(QApplication::translate("MainWindow", "Manage Library Sources", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0));
        actionSearch_Library->setText(QApplication::translate("MainWindow", "Search Library", 0));
        actionSearch_Current_Playlist->setText(QApplication::translate("MainWindow", "Search Current Playlist", 0));
        actionBrowse_Library->setText(QApplication::translate("MainWindow", "Browse Library", 0));
        actionPlay->setText(QApplication::translate("MainWindow", "Play", 0));
        actionPause->setText(QApplication::translate("MainWindow", "Pause", 0));
        actionStop->setText(QApplication::translate("MainWindow", "Stop", 0));
        actionPrev->setText(QApplication::translate("MainWindow", "Prev", 0));
        actionNext->setText(QApplication::translate("MainWindow", "Next", 0));
        label->setText(QApplication::translate("MainWindow", "--:--", 0));
        progressBar->setFormat(QString());
        label_2->setText(QApplication::translate("MainWindow", "--:--", 0));
        playButton->setText(QApplication::translate("MainWindow", "Play", 0));
        pauseButton->setText(QApplication::translate("MainWindow", "Pause", 0));
        stopButton->setText(QApplication::translate("MainWindow", "Stop", 0));
        prevButton->setText(QApplication::translate("MainWindow", "Prev", 0));
        nextButton->setText(QApplication::translate("MainWindow", "Next", 0));
        label_3->setText(QApplication::translate("MainWindow", "Volume", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Playlist", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
        menuLibrary->setTitle(QApplication::translate("MainWindow", "Library", 0));
        menuPlay->setTitle(QApplication::translate("MainWindow", "Play", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
