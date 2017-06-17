#include "wribbon/Button.hpp"
#include "wribbon/Private/BigButton.hpp"
#include "wribbon/Private/LittleButton.hpp"

namespace WRibbon {

///////////////////////////////////////////////////////////////////////////////
// USING SECTION                                                             //
///////////////////////////////////////////////////////////////////////////////

using Private::BigButton;
using Private::LittleButton;

///////////////////////////////////////////////////////////////////////////////
// PUBLIC SECTION                                                            //
///////////////////////////////////////////////////////////////////////////////

Button::Button(QWidget* parent) :
Item(parent) {
  createWidgets();
  createLayout();
}

void Button::setText(const QString& text) {
  m_bigButton->setText(text);
  m_littleButton->setText(text);
}

void Button::setIcon(const QIcon& icon) {

}

///////////////////////////////////////////////////////////////////////////////
// PRIVATE SECTION                                                           //
///////////////////////////////////////////////////////////////////////////////

void Button::createWidgets() {
  m_bigButton = new BigButton(this);
  m_littleButton = new LittleButton(this);
  m_layout = new QStackedLayout(this);
}

void Button::createLayout() {
  m_layout->addWidget(m_bigButton);
  m_layout->addWidget(m_littleButton);
}

} // namespace WRibbon
