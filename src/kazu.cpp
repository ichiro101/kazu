#include "kazu.hpp"
#include <QApplication>
#include <QPushButton>
#include <QtMultimedia>

int main(int argc, char **argv) {
	QApplication app(argc, argv);

	QPushButton button("Hello World!");
	button.show();

	return app.exec();
}
