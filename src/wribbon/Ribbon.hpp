#ifndef WRIBBON_RIBBON_HPP_
#define WRIBBON_RIBBON_HPP_

#include "WRibbon/ApplicationButton.hpp"
#include "WRibbon/Tab.hpp"
#include <QWidget>
#include <QTabBar>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QStackedWidget>

namespace WRibbon {

namespace Private {
  class TabBar;
} // namespace Private

class Ribbon : public QWidget {

  Q_OBJECT

public:

  Ribbon(QWidget* parent = nullptr);
  virtual ~Ribbon() = default;
  void setApplicationButtonText(const QString& text);
  void addTab(Tab* tab);
  Tab* addTab(const QString& name);

private:

  void createWidgets();
  void createLayout();

private:

  ApplicationButton* m_applicationButton;
  Private::TabBar* m_tabBar;
  QVBoxLayout* m_verticalLayout;
  QHBoxLayout* m_buttonTabsLayout;
  QStackedWidget* m_stack;
};

} // namespace WRibbon

#endif // !WRIBBON_RIBBON_HPP_

///////////////////////////////////////////////////////////////////////////////
// DOCUMENTATION                                                             //
///////////////////////////////////////////////////////////////////////////////

/**
 * @class WRibbon::Ribbon
 *
 * @brief Ribbon widget.
 *
 * The Ribbon is the main widget of the library. It allows to create a Ribbon in
 * a desktop application. usually in the MainWindow class of this same library.
 *
 * A Ribbon is composed by many Tab widgets, that contain Item widgets and the
 * user can interact with them.
 *
 * The Ribbon has also an ApplicationButton, that, if pressed, show the
 * application main menu.
 */
