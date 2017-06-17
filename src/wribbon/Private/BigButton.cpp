#include "wribbon/Private/BigButton.hpp"

namespace WRibbon {
namespace Private {

///////////////////////////////////////////////////////////////////////////////
// PUBLIC SECTION                                                            //
///////////////////////////////////////////////////////////////////////////////

BigButton::BigButton(QWidget* parent) :
QWidget(parent) {
  createWidgets();
  createLayout();
}

void BigButton::setText(const QString& text) {
  m_label->setText(text);
}

void BigButton::setIcon(const QIcon& icon) {
  m_button->setIcon(icon);
}

///////////////////////////////////////////////////////////////////////////////
// PRIVATE SECTION                                                           //
///////////////////////////////////////////////////////////////////////////////

void BigButton::createWidgets() {
  m_layout = new QVBoxLayout(this);
  m_label = new QLabel(this);
  m_button = new QPushButton(this);
}

void BigButton::createLayout() {
  m_layout->addWidget(m_button);
  m_layout->addWidget(m_label);
}

} // namespace Private
} // namespace WRibbon
