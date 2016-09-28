#include "Ribbon.h"

namespace WRibbon {

///////////////////////////////////////////////////////////////////////////////
// PUBLIC SECTION                                                            //
///////////////////////////////////////////////////////////////////////////////

Ribbon::Ribbon(QWidget* parent) :
  QWidget(parent) {

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

} // namespace WRibbon
