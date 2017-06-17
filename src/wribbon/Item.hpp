#ifndef WRIBBON_ITEM_HPP_
#define WRIBBON_ITEM_HPP_

#include <QWidget>

namespace WRibbon {

class Item : public QWidget {

  Q_OBJECT

public:

  Item(QWidget* parent = nullptr);
  virtual ~Item() = default;
};

} // namespace WRibbon

#endif // !WRIBBON_ITEM_HPP_

///////////////////////////////////////////////////////////////////////////////
// DOCUMENTATION                                                             //
///////////////////////////////////////////////////////////////////////////////

/**
 * @class WRibbon::Item
 *
 * @brief Base class for items that can be added in Group instances.
 *
 * An Item is a control that can be added to a ribbon Group, like a Button, for
 * example. This base class contains all methods needed to a Group in order
 * to include a Item inside it. This way is also possible to create custom
 * controls, if needed, if they inherits this class.
 */