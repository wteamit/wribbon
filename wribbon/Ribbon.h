#ifndef WRIBBON_RIBBON_H_
#define WRIBBON_RIBBON_H_

#include <QWidget>

namespace WRibbon {

class Ribbon : public QWidget {

Q_OBJECT

public:

  Ribbon(QWidget* parent = nullptr);
  virtual ~Ribbon() = default;

private:


};

} // namespace WRibbon

#endif // !WRIBBON_RIBBON_H_
