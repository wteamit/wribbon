#include "wribbon/Tab.hpp"

namespace WRibbon {

///////////////////////////////////////////////////////////////////////////////
// PUBLIC SECTION                                                            //
///////////////////////////////////////////////////////////////////////////////

/**
 * Constructor.
 *
 * @param[in] parent The Ribbon that owns the tab. Usually it's a Ribbon.
 */
Tab::Tab(QWidget* parent) :
QWidget(parent) {

}

/**
 * Constructor.
 *
 * @param[in] name   Name of the tab.
 * @param[in] parent The Ribbon that owns the tab. Usually it's a Ribbon.
 */
Tab::Tab(const QString& name, QWidget* parent) :
QWidget(parent),
m_name(name) {

}

/**
 * Set the tab name.
 *
 * @param[in] name Name.
 */
void Tab::setName(const QString& name) {
  m_name = name;
}

/**
 * Retrieve the name of the tab.
 *
 * @return Name.
 */
const QString& Tab::getName() const {
  return m_name;
}

/**
 * Add a group to the tab. The group is appended to existing ones and it will be
 * shown to the right of that ones.
 *
 * @param[in] group Group that must be added.
 *
 * @return Index of the group inside the tab.
 */
size_t Tab::addGroup(Group* group) {
  return 0;
}

} // namespace WRibbon
