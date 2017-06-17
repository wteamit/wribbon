#include "wribbon/MainWindow.hpp"
#include <QApplication>

int main(int argc, char* argv[]) {
	QApplication app(argc, argv);
	WRibbon::MainWindow mainWindow;
	mainWindow.show();
	return app.exec();
}

