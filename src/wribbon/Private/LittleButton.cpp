#include "wribbon/Private/LittleButton.hpp"

namespace WRibbon {
namespace Private {

///////////////////////////////////////////////////////////////////////////////
// PUBLIC SECTION                                                            //
///////////////////////////////////////////////////////////////////////////////

LittleButton::LittleButton(QWidget* parent) :
QWidget(parent) {
  createWidgets();
  createLayout();
}

void LittleButton::setText(const QString& text) {
  m_label->setText(text);
}

void LittleButton::setIcon(const QIcon& icon) {
  m_button->setIcon(icon);
}

///////////////////////////////////////////////////////////////////////////////
// PRIVATE SECTION                                                           //
///////////////////////////////////////////////////////////////////////////////

void LittleButton::createWidgets() {
  m_layout = new QHBoxLayout(this);
  m_label = new QLabel(this);
  m_button = new QPushButton(this);
}

void LittleButton::createLayout() {
  m_layout->addWidget(m_button);
  m_layout->addWidget(m_label);
}

} // namespace Private
} // namespace WRibbon
