#include "Ribbon.h"
#include "Private/CloseButton.h"
#include "Private/MaximizeButton.h"
#include "Private/MinimizeButton.h"

namespace WRibbon {

///////////////////////////////////////////////////////////////////////////////
// PUBLIC SECTION                                                            //
///////////////////////////////////////////////////////////////////////////////

Ribbon::Ribbon(QWidget* parent) :
  QWidget(parent) {
  createElements();
  createLayout();
}

void Ribbon::addTab(Tab* tab) {

}

void Ribbon::addTab(unsigned int index, Tab* tab) {

}

Tab* Ribbon::createTab() {
  return new Tab(this);
}

Tab* Ribbon::createTabAtIndex(unsigned int index) {
  return new Tab(this);
}

Tab* Ribbon::getTabAtIndex(unsigned int index) {
  return new Tab(this);
}

void Ribbon::removeTabAtIndex(unsigned int index) {

}

///////////////////////////////////////////////////////////////////////////////
// PRIVATE SECTION                                                           //
///////////////////////////////////////////////////////////////////////////////

void Ribbon::createElements() {
  m_tabSplitter = new QVBoxLayout(this);
  m_windowButtonGroup = new QHBoxLayout(this);
}

void Ribbon::createLayout() {

}

} // namespace WRibbon
