#ifndef WRIBBON_TAB_H_
#define WRIBBON_TAB_H_

#include <QWidget>

namespace WRibbon {

class Tab : public QWidget {

  Q_OBJECT

public:

  Tab(QWidget* parent = nullptr);
  virtual ~Tab() = default;
};

} // namespace WRibbon

#endif // !WRIBBON_TAB_H_
