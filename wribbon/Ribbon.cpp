#include "Ribbon.h"
#include "Private/RibbonUpperPart.h"
#include <QFile>

namespace WRibbon {

///////////////////////////////////////////////////////////////////////////////
// USING SECTION                                                             //
///////////////////////////////////////////////////////////////////////////////

using Private::RibbonUpperPart;

///////////////////////////////////////////////////////////////////////////////
// PUBLIC SECTION                                                            //
///////////////////////////////////////////////////////////////////////////////

Ribbon::Ribbon(QWidget* parent) :
  QWidget(parent) {
  setStyleSheet(":/qss/ribbon.qss");
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
  QFile file(":/qss/ribbon.qss");
  file.open(QFile::ReadOnly);
  QString styleSheet = QLatin1String(file.readAll());
  setStyleSheet(styleSheet);
  m_upperPart = new RibbonUpperPart(this);
  m_tabSplitter = new QVBoxLayout(this);
}

void Ribbon::createLayout() {
  m_tabSplitter->setSpacing(0);
  m_tabSplitter->setMargin(0);
  m_tabSplitter->addWidget(m_upperPart);
  auto check = new QWidget(this);
  check->setStyleSheet("background-color:green;");
  m_tabSplitter->addWidget(check);
  setLayout(m_tabSplitter);
}

} // namespace WRibbon

