#include "WRibbon/MainWindow.hpp"

namespace WRibbon {

///////////////////////////////////////////////////////////////////////////////
// PUBLIC SECTION                                                            //
///////////////////////////////////////////////////////////////////////////////

/**
 * Constructor.
 *
 * @param[in] parent The widget that owns the main window.
 */
MainWindow::MainWindow(QWidget* parent) :
QMainWindow(parent),
m_ribbon(new Ribbon(this)),
m_statusBar(new StatusBar(this)) {
  setMenuWidget(m_ribbon);
  setStatusBar(m_statusBar);
}

/**
 * Set the theme of the main application. The theme can be defined in a
 * preconfigured way.
 *
 * @param[in] theme Theme that must be applied.
 */
void MainWindow::setTheme(Theme theme) {

}

/**
 * Set the text for the ApplicationButton of the Ribbon.
 *
 * @param[in] text Text.
 */
void MainWindow::setApplicationButtonText(const QString& text) {
  m_ribbon->setApplicationButtonText(text);
}

/**
 * Add a Tab to the Ribbon. An empty Tab is created, and the defined name is set
 * to it. then the Tab pointer is returned so the user can interact with it.
 *
 * @param[in] name Name of the Tab.
 *
 * @return Tab pointer.
 */
Tab* MainWindow::addTab(const QString& name) {
  return m_ribbon->addTab(name);
}

/**
 * Add a Tab to the Ribbon. The Tab must be a pointer to an already existing Tab,
 * that should have the Ribbon as parent.
 *
 * @param[in] tab Tab that must be added.
 */
void MainWindow::addTab(Tab* tab) {
  m_ribbon->addTab(tab);
}

} // namespace WRibbon
