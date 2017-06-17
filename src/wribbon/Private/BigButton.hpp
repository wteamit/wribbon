#ifndef WRIBBON_PRIVATE_BIGBUTTON_HPP_
#define WRIBBON_PRIVATE_BIGBUTTON_HPP_

#include <QWidget>
#include <QString>
#include <QIcon>
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>

namespace WRibbon {
namespace Private {

class BigButton : public QWidget {

  Q_OBJECT

public:

  BigButton(QWidget* parent = nullptr);
  virtual ~BigButton() = default;
  void setText(const QString& text);
  void setIcon(const QIcon& icon);

private:

  void createWidgets();
  void createLayout();

private:

  QVBoxLayout* m_layout;
  QLabel* m_label;
  QPushButton* m_button;
};

} // namespace Private
} // namespace WRibbon

#endif // !WRIBBON_PRIVATE_BIGBUTTON_HPP_
