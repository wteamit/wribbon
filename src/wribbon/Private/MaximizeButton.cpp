#include "Private/MaximizeButton.h"

namespace WRibbon {
namespace Private {

///////////////////////////////////////////////////////////////////////////////
// PUBLIC SECTION                                                            //
///////////////////////////////////////////////////////////////////////////////

MaximizeButton::MaximizeButton(QWidget* parent) :
  QPushButton(parent) {
    setFlat(true);
    setAutoFillBackground(true);
    setSizePolicy(QSizePolicy());
}

} // namespace Private
} // namespace WRibbon

