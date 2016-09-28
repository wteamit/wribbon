#ifndef WRIBBON_MAINWINDOW_H_
#define WRIBBON_MAINWINDOW_H_

#include "WRibbonGlobal.h"
#include "Ribbon.h"
#include <QMainWindow>

namespace WRibbon {

class WRIBBON_LIB MainWindow : public QMainWindow {

  Q_OBJECT

public:

  MainWindow();
  virtual ~MainWindow() = default;

  Ribbon* getRibbon() const;

private:

  Ribbon* m_ribbon;

};

} // namespace WRibbon

#endif // !WRIBBON_MAINWINDOW_H_

