#include "wribbon/Private/RibbonUpperPart.hpp"

namespace WRibbon {
namespace Private {

///////////////////////////////////////////////////////////////////////////////
// PUBLIC SECTION                                                            //
///////////////////////////////////////////////////////////////////////////////

RibbonUpperPart::RibbonUpperPart(QWidget* parent) :
  QWidget(parent) {
  createElements();
  createLayout();
  createConnections();
}

///////////////////////////////////////////////////////////////////////////////
// PRIVATE SECTION                                                           //
///////////////////////////////////////////////////////////////////////////////

void RibbonUpperPart::createElements() {
  m_windowButtonGroup = new WindowButtonGroup(this);
  m_title = new Title(this);
  m_layout = new QHBoxLayout(this);
}

void RibbonUpperPart::createLayout() {
  m_layout->setSpacing(0);
  m_layout->setMargin(0);
  m_layout->addWidget(m_title);
  m_layout->addWidget(m_windowButtonGroup);
}

void RibbonUpperPart::createConnections() {
  connect(m_windowButtonGroup, &WindowButtonGroup::closeClicked, this, &RibbonUpperPart::closeClicked);
  connect(m_windowButtonGroup, &WindowButtonGroup::minimizeClicked, this, &RibbonUpperPart::minimizeClicked);
  connect(m_windowButtonGroup, &WindowButtonGroup::maximizeClicked, this, &RibbonUpperPart::maximizeClicked);
}

} // namespace Private
} // namespace WRibbon

