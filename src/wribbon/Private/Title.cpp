#include "wribbon/Private/Title.hpp"
#include <QCoreApplication>
#include <QHBoxLayout>

namespace WRibbon {
namespace Private {

///////////////////////////////////////////////////////////////////////////////
// PUBLIC SECTION                                                            //
///////////////////////////////////////////////////////////////////////////////

Title::Title(QWidget* parent) :
  QWidget(parent) {
  m_title = new QLabel(this);
  auto layout = new QHBoxLayout(this);
  layout->addWidget(m_title);
  layout->setAlignment(m_title, Qt::AlignHCenter);
  m_title->setText(QCoreApplication::applicationName());
  setLayout(layout);
}

} // namespace Private
} // namespace WRibbon

