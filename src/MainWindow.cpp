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
	const QFileDialog *fd;
	const QString filename = fd->getOpenFileName();
	
	Player::getInstance().setCurrentlyPlayingFile(filename);

	// play the song
	Player::getInstance().play();
}

void MainWindow::on_actionPlay_triggered() {
	Player::getInstance().play();
}

void MainWindow::on_actionManage_Library_triggered() {
	// TODO: implement this
}