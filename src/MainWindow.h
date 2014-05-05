#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "ui_mainWindow.h"

class MainWindow : public QMainWindow {

public:
	MainWindow();
	~MainWindow();

private:
	Ui_MainWindow* mainWindow;
};

#endif