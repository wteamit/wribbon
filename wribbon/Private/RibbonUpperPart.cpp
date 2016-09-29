#include "RibbonUpperPart.h"

namespace WRibbon {
namespace Private {

///////////////////////////////////////////////////////////////////////////////
// PUBLIC SECTION                                                            //
///////////////////////////////////////////////////////////////////////////////

RibbonUpperPart::RibbonUpperPart(QWidget* parent) :
  QWidget(parent) {
  createElements();
  createLayout();
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

} // namespace Private
} // namespace WRibbon

