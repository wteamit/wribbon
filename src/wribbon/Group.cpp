#include "WRibbon/Group.hpp"
#include "WRibbon/Private/DynamicLayout.hpp"

namespace WRibbon {

///////////////////////////////////////////////////////////////////////////////
// USING SECTION                                                             //
///////////////////////////////////////////////////////////////////////////////

using Private::DynamicLayout;

///////////////////////////////////////////////////////////////////////////////
// PUBLIC SECTION                                                            //
///////////////////////////////////////////////////////////////////////////////

/**
 * Constructor.
 *
 * @param[in] parent The widget that owns the Group.
 */
Group::Group(QWidget* parent) :
QWidget(parent) {
  createWidgets();
  createLayout();
}

/**
 * Constructor.
 *
 * @param[in] name   Name of the Group.
 * @param[in] parent The widget that owns the Group.
 */
Group::Group(const QString& name, QWidget* parent) :
QWidget(parent) {
  createWidgets();
  createLayout();
  setName(name);
}

Group::~Group() {
  delete m_dynamic;
}

/**
 * Set the group name.
 *
 * @param[in] name Name.
 */
void Group::setName(const QString& name) {
  m_label->setText(name);
}

/**
 * Retrieve the group name.
 *
 * @return Name.
 */
QString Group::getName() const {
  return m_label->text();
}

/**
 * Add a Item to the group.
 *
 * @param[in] item Item that it's added.
 */
void Group::addItem(Item* item) {
  m_dynamic->addWidget(item);
}

///////////////////////////////////////////////////////////////////////////////
// PRIVATE SECTION                                                           //
///////////////////////////////////////////////////////////////////////////////

/**
 * Create widget elements.
 */
void Group::createWidgets() {
  m_layout = new QVBoxLayout(this);
  m_dynamic = new DynamicLayout();
  m_label = new QLabel(this);
}

/**
 * Create the widget layout.
 */
void Group::createLayout() {
  m_layout->addLayout(m_dynamic);
  m_layout->addWidget(m_label);
}

} // namespace WRibbon
