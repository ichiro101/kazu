#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <qfiledialog.h>
#include "ui_mainWindow.h"
#include "Player.h"
#include <cassert>

class MainWindow : public QMainWindow {
	Q_OBJECT

public:
	MainWindow();
	~MainWindow();

private slots:
	void on_actionExit_triggered();
	void on_actionOpen_triggered();
	void on_actionManage_Library_triggered();
	void on_actionPlay_triggered();

private:
	Ui_MainWindow* mainWindow;
};

#endif