#include "Private/CloseButton.h"
#include <QCoreApplication>
#include <QSvgWidget>
#include <QHBoxLayout>

namespace WRibbon {
namespace Private {

///////////////////////////////////////////////////////////////////////////////
// PUBLIC SECTION                                                            //
///////////////////////////////////////////////////////////////////////////////

CloseButton::CloseButton(QWidget* parent) :
  QPushButton(parent) {
  setFlat(true);
  setAutoFillBackground(true);
  setSizePolicy(QSizePolicy());
  connect(this, &CloseButton::clicked, [=](){QCoreApplication::quit();});
}

} // namespace Private
} // namespace WRibbon

