#ifndef WRIBBON_PRIVATE_WINDOWBUTTONGROUP_HPP_
#define WRIBBON_PRIVATE_WINDOWBUTTONGROUP_HPP_

#include "wribbon/Private/MaximizeButton.hpp"
#include "wribbon/Private/MinimizeButton.hpp"
#include "wribbon/Private/CloseButton.hpp"
#include <QHBoxLayout>
#include <QWidget>

namespace WRibbon {
namespace Private {

class WindowButtonGroup : public QWidget {

  Q_OBJECT

public:

  WindowButtonGroup(QWidget* parent = nullptr);
  virtual ~WindowButtonGroup() = default;

signals:

  void closeClicked();
  void minimizeClicked();
  void maximizeClicked();

private:

  void createElements();
  void createLayout();
  void createConnections();

private:

  QHBoxLayout* m_layout;
  MaximizeButton* m_maximizeButton;
  MinimizeButton* m_minimizeButton;
  CloseButton* m_closeButton;
};

} // namespace Private
} // namespace WRibbon

#endif // !WRIBBON_PRIVATE_WINDOWBUTTONGROUP_HPP_

