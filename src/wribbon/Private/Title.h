#ifndef WRIBBON_PRIVATE_TITLE_H_
#define WRIBBON_PRIVATE_TITLE_H_

#include <QWidget>
#include <QLabel>

namespace WRibbon {
namespace Private {

class Title : public QWidget {

  Q_OBJECT

public:

  Title(QWidget* parent = nullptr);
  virtual ~Title() = default;

private:

  QLabel* m_title;
};

} // namespace Private
} // namespace WRibbon

#endif // !WRIBBON_PRIVATE_TITLE_H_

