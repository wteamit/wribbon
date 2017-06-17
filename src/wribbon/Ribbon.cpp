#include "WRibbon/Ribbon.hpp"
#include "WRibbon/Private/TabBar.hpp"

namespace WRibbon {

///////////////////////////////////////////////////////////////////////////////
// USING SECTION                                                             //
///////////////////////////////////////////////////////////////////////////////

using Private::TabBar;

///////////////////////////////////////////////////////////////////////////////
// CONSTANTS SECTION                                                         //
///////////////////////////////////////////////////////////////////////////////

const int RibbonHeight{ 100 };

///////////////////////////////////////////////////////////////////////////////
// PUBLIC SECTION                                                            //
///////////////////////////////////////////////////////////////////////////////

/**
 * Constructor.
 *
 * @param[in] parent The widget that owns the Ribbon.
 */
Ribbon::Ribbon(QWidget* parent) :
QWidget(parent) {
  createWidgets();
  createLayout();

  // TODO Remove after test
  QPalette pal = palette();
  pal.setColor(QPalette::Background, Qt::yellow);
  setAutoFillBackground(true);
  setPalette(pal);
}

/**
 * Set the text that must be shown in the ApplicationButton of the Ribbon.
 *
 * @param[in] text Text.
 */
void Ribbon::setApplicationButtonText(const QString& text) {
  m_applicationButton->setText(text);
}

/**
 * Add a Tab to the Ribbon. The Tab must be a pointer to an already existing Tab,
 * that should have this Ribbon as parent.
 *
 * @param[in] tab Tab that must be added.
 */
void Ribbon::addTab(Tab* tab) {
  m_tabBar->addTab(tab->getName());
  m_stack->addWidget(tab);
}

/**
 * Add a Tab to the Ribbon. An empty Tab is created, and the defined name is set
 * to it. then the Tab pointer is returned so the user can interact with it.
 *
 * @param[in] name Name of the Tab.
 *
 * @return Tab pointer.
 */
Tab* Ribbon::addTab(const QString& name) {
  Tab* newTab = new Tab(name, this);
  m_stack->addWidget(newTab);
  m_tabBar->addTab(name);
  return newTab;
}

///////////////////////////////////////////////////////////////////////////////
// PRIVATE SECTION                                                           //
///////////////////////////////////////////////////////////////////////////////

/**
 * Create widgets needed for the Ribbon.
 */
void Ribbon::createWidgets() {
  m_tabBar = new TabBar(this);
  m_applicationButton = new ApplicationButton(this);
  m_verticalLayout = new QVBoxLayout(this);
  m_buttonTabsLayout = new QHBoxLayout();
  m_stack = new QStackedWidget(this);
}

/**
 * Set the layout for the Ribbon.
 */
void Ribbon::createLayout() {
  m_buttonTabsLayout->addWidget(m_applicationButton);
  m_buttonTabsLayout->addWidget(m_tabBar);
  m_verticalLayout->addLayout(m_buttonTabsLayout);
  m_verticalLayout->addWidget(m_stack);
  m_verticalLayout->setSpacing(0);
  m_verticalLayout->setMargin(0);
  m_buttonTabsLayout->setSpacing(0);
  m_buttonTabsLayout->setMargin(0);
  setFixedHeight(RibbonHeight);
}

} // namespace WRibbon
