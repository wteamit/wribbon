#ifndef WRIBBON_APPLICATIONBUTTON_HPP_
#define WRIBBON_APPLICATIONBUTTON_HPP_

#include <QPushButton>
#include <QString>

namespace WRibbon {

class ApplicationButton : public QPushButton {

  Q_OBJECT

public:

  ApplicationButton(QWidget* parent = nullptr);
  ApplicationButton(const QString& text, QWidget* parent = nullptr);
  virtual ~ApplicationButton() = default;
  void setText(const QString& text);
  const QString& getText() const;

private:

  QString m_text;
};

} // namespace WRibbon

#endif // !WRIBBON_APPLICATIONBUTTON_HPP_
