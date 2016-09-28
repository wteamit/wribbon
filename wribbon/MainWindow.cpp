#include "MainWindow.h"

namespace WRibbon {

///////////////////////////////////////////////////////////////////////////////
// PUBLIC SECTION                                                            //
///////////////////////////////////////////////////////////////////////////////

MainWindow::MainWindow() :
  QMainWindow() {
  setWindowFlags(Qt::CustomizeWindowHint);
  setWindowFlags(Qt::FramelessWindowHint);
  m_ribbon = new Ribbon(this);
  setMenuWidget(m_ribbon);
}

Ribbon* MainWindow::getRibbon() const {
  return m_ribbon;
}

} // namespace WRibbon

