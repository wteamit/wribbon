#include "wribbon/MainWindow.h"
#include <QApplication>

int main(int argc, char* argv[]) {
	QApplication app(argc, argv);
	WRibbon::MainWindow mainWindow;
	mainWindow.show();
	return app.exec();
}

