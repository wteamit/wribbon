#include "wribbon/ApplicationButton.hpp"

namespace WRibbon {

///////////////////////////////////////////////////////////////////////////////
// PUBLIC SECTION                                                            //
///////////////////////////////////////////////////////////////////////////////

ApplicationButton::ApplicationButton(QWidget* parent) :
QPushButton(parent) {
  // TODO Remove after test
  QPalette pal = palette();
  pal.setColor(QPalette::Background, Qt::red);
  setAutoFillBackground(true);
  setPalette(pal);
  setFixedWidth(100);
}

ApplicationButton::ApplicationButton(const QString& text, QWidget* parent) :
QPushButton(text, parent),
m_text(text) {
  // TODO Remove after test
  QPalette pal = palette();
  pal.setColor(QPalette::Background, Qt::red);
  setAutoFillBackground(true);
  setPalette(pal);
  setFixedWidth(100);
}

void ApplicationButton::setText(const QString& text) {
  QPushButton::setText(text);
  m_text = text;
}

const QString& ApplicationButton::getText() const {
  return m_text;
}

} // namespace WRibbon
