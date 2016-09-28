#ifndef WRIBBON_RIBBON_H_
#define WRIBBON_RIBBON_H_

#include "Tab.h"
#include <QWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>

namespace WRibbon {
namespace Private {

} // namespace Private
} // namespace WRibbon

namespace WRibbon {

class Ribbon : public QWidget {

Q_OBJECT

public:

  Ribbon(QWidget* parent = nullptr);
  virtual ~Ribbon() = default;
  void addTab(Tab* tab);
  void addTab(unsigned int index, Tab* tab);
  Tab* createTab();
  Tab* createTabAtIndex(unsigned int index);
  Tab* getTabAtIndex(unsigned int index);
  void removeTabAtIndex(unsigned int index);

private:

  void createElements();
  void createLayout();

  QVBoxLayout* m_tabSplitter;
  QHBoxLayout* m_windowButtonGroup;
};

} // namespace WRibbon

#endif // !WRIBBON_RIBBON_H_
