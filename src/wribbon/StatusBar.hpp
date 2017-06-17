#ifndef WRIBBON_STATUSBAR_HPP_
#define WRIBBON_STATUSBAR_HPP_

#include <QStatusBar>

namespace WRibbon {

class StatusBar : public QStatusBar {

  Q_OBJECT

public:

  StatusBar(QWidget* parent = nullptr);
  virtual ~StatusBar() = default;
};

} // namespace WRibbon

#endif // !WRIBBON_STATUSBAR_HPP_

///////////////////////////////////////////////////////////////////////////////
// DOCUMENTATION                                                             //
///////////////////////////////////////////////////////////////////////////////

/**
 * @class WRibbon::StatusBar
 *
 * @brief Main window status bar.
 *
 * The StatusBar class is the widget representation of a the status bar of the
 * MainWindow of the library. It's almost equal to the normal QStatusBar, but
 * it can be customized graphically by the theme of the Ribbon.
 */
