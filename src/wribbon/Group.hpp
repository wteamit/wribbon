#ifndef WRIBBON_GROUP_HPP_
#define WRIBBON_GROUP_HPP_

#include "WRibbon/Global.hpp"
#include "WRibbon/Item.hpp"
#include <QVBoxLayout>
#include <QWidget>
#include <QString>
#include <QLabel>

namespace WRibbon {

namespace Private {
class DynamicLayout;
} // namespace Private

class WRIBBON_LIB Group : public QWidget {

  Q_OBJECT

public:

  Group(QWidget* parent = nullptr);
  Group(const QString& name, QWidget* parent = nullptr);
  virtual ~Group();
  void setName(const QString& name);
  QString getName() const;
  void addItem(Item* item);

private:

  void createWidgets();
  void createLayout();

private:

  Private::DynamicLayout* m_dynamic;
  QVBoxLayout* m_layout;
  QLabel* m_label;
};

} // namespace WRibbon

#endif // !WRIBBON_GROUP_HPP_

///////////////////////////////////////////////////////////////////////////////
// DOCUMENTATION                                                             //
///////////////////////////////////////////////////////////////////////////////

/**
 * @class WRibbon::Group
 *
 * @brief Widget that represent a Tab group.
 *
 * The group is an element that can be inserted into a Tab. The group is a
 * logical grouping of Item elements that belong to the same logic.
 */
