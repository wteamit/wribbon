#ifndef WRIBBON_MAINWINDOW_HPP_
#define WRIBBON_MAINWINDOW_HPP_

#include "wribbon/Global.hpp"
#include "wribbon/Ribbon.hpp"
#include "wribbon/StatusBar.hpp"
#include "wribbon/Theme.hpp"
#include <QMainWindow>

namespace WRibbon {

class WRIBBON_LIB MainWindow : public QMainWindow {

  Q_OBJECT

public:

  MainWindow(QWidget* parent = nullptr);
  virtual ~MainWindow() = default;
  void setTheme(Theme theme);
  void setApplicationButtonText(const QString& text);
  Tab* addTab(const QString& name);
  void addTab(Tab* tab);

private:

  Ribbon* m_ribbon;
  StatusBar* m_statusBar;
};

} // namespace WRibbon

#endif // !WRIBBON_MAINWINDOW_HPP_

///////////////////////////////////////////////////////////////////////////////
// DOCUMENTATION                                                             //
///////////////////////////////////////////////////////////////////////////////

/**
 * @class WRibbon::MainWindow
 *
 * @brief A main window that contains Ribbon and all its components.
 *
 * The MainWindow class allows to create a main window for the application. It can
 * be used as a normal QMainWindow (in fact it inherits QMainWindow), but it has
 * all the library stuff already present and configured for showing a main window
 * with Ribbon, StatusBar and so on.
 */
