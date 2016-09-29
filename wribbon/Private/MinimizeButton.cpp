#include "Private/MinimizeButton.h"

namespace WRibbon {
namespace Private {

///////////////////////////////////////////////////////////////////////////////
// PUBLIC SECTION                                                            //
///////////////////////////////////////////////////////////////////////////////

MinimizeButton::MinimizeButton(QWidget* parent) :
  QPushButton(parent) {
  setFlat(true);
  setAutoFillBackground(true);
  setSizePolicy(QSizePolicy());
}

} // namespace Private
} // namespace WRibbon

