#ifndef WRIBBON_BUTTON_HPP_
#define WRIBBON_BUTTON_HPP_

#include "WRibbon/Global.hpp"
#include "WRibbon/Item.hpp"
#include <QStackedLayout>
#include <QString>
#include <QIcon>

namespace WRibbon {

namespace Private {
  class BigButton;
  class LittleButton;
} // namespace Private

class WRIBBON_LIB Button : public Item {

  Q_OBJECT

public:

  Button(QWidget* parent = nullptr);
  virtual ~Button() = default;
  void setText(const QString& text);
  void setIcon(const QIcon& icon);

private:

  void createWidgets();
  void createLayout();

private:

  QStackedLayout* m_layout;
  Private::BigButton* m_bigButton;
  Private::LittleButton* m_littleButton;
};

} // namespace WRibbon

#endif // !WRIBBON_BUTTON_HPP_
