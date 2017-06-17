#include "MainWindow.h"
#include <QCoreApplication>
#include <QDesktopWidget>
#include <QApplication>

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
  createConnections();
}

Ribbon* MainWindow::getRibbon() const {
  return m_ribbon;
}

///////////////////////////////////////////////////////////////////////////////
// PUBLIC SLOTS SECTION                                                      //
///////////////////////////////////////////////////////////////////////////////

void MainWindow::maximize() {
  auto maxGeometry = QApplication::desktop()->availableGeometry();
  setGeometry(maxGeometry.x(), maxGeometry.y(), maxGeometry.width(), maxGeometry.height());
}

void MainWindow::minimize() {
  setWindowState(Qt::WindowMinimized);
}

void MainWindow::quit() {
  QCoreApplication::quit();
}

///////////////////////////////////////////////////////////////////////////////
// PRIVATE SECTION                                                           //
///////////////////////////////////////////////////////////////////////////////

void MainWindow::createConnections() {
  connect(m_ribbon, &Ribbon::closeClicked, this, &MainWindow::quit);
  connect(m_ribbon, &Ribbon::minimizeClicked, this, &MainWindow::minimize);
  connect(m_ribbon, &Ribbon::maximizeClicked, this, &MainWindow::maximize);
}

} // namespace WRibbon

