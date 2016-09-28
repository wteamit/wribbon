#include "MainWindow.h"

namespace WRibbon {

///////////////////////////////////////////////////////////////////////////////
// PUBLIC SECTION                                                            //
///////////////////////////////////////////////////////////////////////////////

MainWindow::MainWindow() :
  QMainWindow() {
  setWindowFlags(Qt::CustomizeWindowHint); //Set window with no title bar
  setWindowFlags(Qt::FramelessWindowHint); //Set a frameless window
}

void MainWindow::setRibbon(Ribbon* ribbon) {
  setMenuWidget(ribbon);
}

} // namespace WRibbon

