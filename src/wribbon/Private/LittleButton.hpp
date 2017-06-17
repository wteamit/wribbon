#ifndef WRIBBON_PRIVATE_LITTLEBUTTON_HPP_
#define WRIBBON_PRIVATE_LITTLEBUTTON_HPP_

#include <QWidget>
#include <QString>
#include <QIcon>
#include <QPushButton>
#include <QLabel>
#include <QHBoxLayout>

namespace WRibbon {
namespace Private {

class LittleButton : public QWidget {

  Q_OBJECT

public:

  LittleButton(QWidget* parent = nullptr);
  virtual ~LittleButton() = default;
  void setText(const QString& text);
  void setIcon(const QIcon& icon);

private:

  void createWidgets();
  void createLayout();

private:

  QHBoxLayout* m_layout;
  QLabel* m_label;
  QPushButton* m_button;
};

} // namespace Private
} // namespace WRibbon

#endif // !WRIBBON_PRIVATE_LITTLEBUTTON_HPP_
