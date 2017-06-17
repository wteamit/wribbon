#ifndef WRIBBON_BUTTON_H_
#define WRIBBON_BUTTON_H_

#include "WRibbonGlobal.h"
#include <QWidget>

namespace WRibbon {

class WRIBBON_LIB Button : public QWidget {

  Q_OBJECT

public:

  Button(QWidget* parent = nullptr);
  virtual ~Button() = default;

private:

};

} // namespace WRibbon

#endif // !WRIBBON_BUTTON_H_
