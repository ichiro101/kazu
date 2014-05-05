#include "MainWindow.h"

MainWindow::MainWindow() : QMainWindow() {
	this->mainWindow = new Ui_MainWindow();
	mainWindow->setupUi(this);
}

MainWindow::~MainWindow() {
	delete this->mainWindow;
}