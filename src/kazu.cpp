#include "kazu.h"

int main(int argc, char **argv) {
	QApplication app(argc, argv);
	QMainWindow mainWindow;
	Ui_kazuWindow kazuWindow;

	kazuWindow.setupUi(&mainWindow);

	mainWindow.show();

	return app.exec();
}
