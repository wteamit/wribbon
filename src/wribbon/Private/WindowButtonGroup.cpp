#include "wribbon/Private/WindowButtonGroup.hpp"

namespace WRibbon {
namespace Private {

///////////////////////////////////////////////////////////////////////////////
// PUBLIC SECTION                                                            //
///////////////////////////////////////////////////////////////////////////////

WindowButtonGroup::WindowButtonGroup(QWidget* parent) :
  QWidget(parent) {
  createElements();
  createLayout();
  createConnections();
}

///////////////////////////////////////////////////////////////////////////////
// PRIVATE SECTION                                                           //
///////////////////////////////////////////////////////////////////////////////

void WindowButtonGroup::createElements() {
  setSizePolicy(QSizePolicy());
  m_maximizeButton = new MaximizeButton(this);
  m_minimizeButton = new MinimizeButton(this);
  m_closeButton = new CloseButton(this);
  m_layout = new QHBoxLayout(this);
}

void WindowButtonGroup::createLayout() {
  m_layout->setSpacing(0);
  m_layout->setMargin(0);
  m_layout->addWidget(m_minimizeButton);
  m_layout->addWidget(m_maximizeButton);
  m_layout->addWidget(m_closeButton);
  setLayout(m_layout);
}

void WindowButtonGroup::createConnections() {
  connect(m_closeButton, &CloseButton::clicked, this, &WindowButtonGroup::closeClicked);
  connect(m_minimizeButton, &MinimizeButton::clicked, this, &WindowButtonGroup::minimizeClicked);
  connect(m_maximizeButton, &MaximizeButton::clicked, this, &WindowButtonGroup::maximizeClicked);
}

} // namespace Private
} // namespace WRibbon

