#ifndef WRIBBON_QUICKACCESSTOOLBAR_HPP_
#define WRIBBON_QUICKACCESSTOOLBAR_HPP_

#include <QWidget>

namespace WRibbon {

class QuickAccessToolbar : public QWidget {

  Q_OBJECT

public:

  QuickAccessToolbar(QWidget* parent = nullptr);
  virtual ~QuickAccessToolbar() = default;
};

} // namespace WRibbon

#endif // !WRIBBON_QUICKACCESSTOOLBAR_HPP_

///////////////////////////////////////////////////////////////////////////////
// DOCUMENTATION                                                             //
///////////////////////////////////////////////////////////////////////////////

/**
 * @class WRibbon::QuickAccessToolbar
 *
 * @brief Toolbar with command shortcuts.
 *
 * This class represents in the Ribbon a little bar, in which some command can
 * be added/removed from tabs. This way is possible to access to them without
 * navigate into tabs. It should be shown in the upper part of the Ribbon.
 */
