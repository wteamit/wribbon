#ifndef WRIBBON_CONTEXTUALTABSET_HPP_
#define WRIBBON_CONTEXTUALTABSET_HPP_

#include <QWidget>

namespace WRibbon {

class ContextualTabSet : public QWidget {

  Q_OBJECT

public:

  ContextualTabSet(QWidget* parent = nullptr);
  virtual ~ContextualTabSet() = default;
};

} // namespace WRibbon

#endif // !WRIBBON_CONTEXTUALTABSET_HPP_

///////////////////////////////////////////////////////////////////////////////
// DOCUMENTATION                                                             //
///////////////////////////////////////////////////////////////////////////////

/**
 * @class WRibbon::ContextualTabSet
 *
 * @brief Widget containing contextual tabs.
 *
 * Inside a ribbon there are tabs that are always present. Sometime is necessary
 * to show tabs that contain commands useful only in particular situations. For
 * example, when I click on a image, I want to show a tab with commands related
 * to it, like resizing and so on. These commands are useless in other context,
 * so in order to maintain the list of tabs ordered and not too much populated,
 * it's better to hide these tabs when not used.
 *
 * These tabs are ContextualTab element, that can be shown only in particular
 * cases. More tab can appear, and these tabs are a part of a ContextualTabSet.
 */
