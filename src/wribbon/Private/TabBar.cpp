#include "wribbon/Private/TabBar.hpp"

namespace WRibbon {
namespace Private {

///////////////////////////////////////////////////////////////////////////////
// PUBLIC SECTION                                                            //
///////////////////////////////////////////////////////////////////////////////

TabBar::TabBar(QWidget* parent) :
QWidget(parent) {
  createWidgets();
  createLayout();
}

void TabBar::addTab(const QString& tabName) {
  m_bar->addTab(tabName);
}

///////////////////////////////////////////////////////////////////////////////
// PRIVATE SECTION                                                           //
///////////////////////////////////////////////////////////////////////////////

void TabBar::createWidgets() {
  m_bar = new QTabBar(this);
  m_layout = new QHBoxLayout(this);
}

void TabBar::createLayout() {
  m_layout->setMargin(0);
  m_layout->setSpacing(0);
  m_layout->addWidget(m_bar);
  m_bar->setExpanding(false);
}

} // namespace Private
} // namespace WRibbon
