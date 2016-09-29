#include "MainWindow.h"

namespace WRibbon {

///////////////////////////////////////////////////////////////////////////////
// PUBLIC SECTION                                                            //
///////////////////////////////////////////////////////////////////////////////

MainWindow::MainWindow() :
  QMainWindow() {
  setWindowFlags(Qt::CustomizeWindowHint);
  m_ribbon = new Ribbon(this);
  setMenuWidget(m_ribbon);
  QWidget* centralWidget = new QWidget(this);
  setCentralWidget(centralWidget);
  centralWidget->setMinimumSize(500, 400);
  centralWidget->setStyleSheet("background-color:black;");
}

Ribbon* MainWindow::getRibbon() const {
  return m_ribbon;
}

} // namespace WRibbon

