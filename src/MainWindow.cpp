#include "MainWindow.h"

MainWindow::MainWindow() : QMainWindow() {
	this->mainWindow = new Ui_MainWindow();
	mainWindow->setupUi(this);
}

MainWindow::~MainWindow() {
	delete this->mainWindow;
}

void MainWindow::on_actionExit_triggered() {
	QApplication::quit();
}

void MainWindow::on_actionOpen_triggered() {
	// TODO: implement this
}

void MainWindow::on_actionManage_Library_triggered() {
	// TODO: implement this
}