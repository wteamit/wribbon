#ifndef WRIBBON_TAB_HPP_
#define WRIBBON_TAB_HPP_

#include "wribbon/Global.hpp"
#include "wribbon/Group.hpp"
#include <QWidget>
#include <QString>
#include <QHBoxLayout>

namespace WRibbon {

class WRIBBON_LIB Tab : public QWidget {

  Q_OBJECT

public:

  Tab(QWidget* parent = nullptr);
  Tab(const QString& name, QWidget* parent = nullptr);
  virtual ~Tab() = default;
  void setName(const QString& name);
  const QString& getName() const;
  size_t addGroup(Group* group);

private:

  QString m_name;
  QHBoxLayout* m_layout;
};

} // namespace WRibbon

#endif // !WRIBBON_TAB_HPP_

///////////////////////////////////////////////////////////////////////////////
// DOCUMENTATION                                                             //
///////////////////////////////////////////////////////////////////////////////

/**
 * @class WRibbon::Tab
 *
 * @brief Ribbon tab widget.
 *
 * This class is a representation of a tab inside the Ribbon. The ribbon can
 * have one or more tabs. Every tab can be considered as a section of the
 * Ribbon, containing Group instances, that contain commands. Even if a Ribbon
 * can contain many tabs, only one a time is visible, occupying the entire
 * bottom part of the Ribbon.
 */
