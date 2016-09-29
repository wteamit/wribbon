#ifndef WRIBBON_PRIVATE_WINDOWBUTTONGROUP_H_
#define WRIBBON_PRIVATE_WINDOWBUTTONGROUP_H_

#include "Private/MaximizeButton.h"
#include "Private/MinimizeButton.h"
#include "Private/CloseButton.h"
#include <QHBoxLayout>
#include <QWidget>

namespace WRibbon {
namespace Private {

class WindowButtonGroup : public QWidget {

  Q_OBJECT

public:

  WindowButtonGroup(QWidget* parent = nullptr);
  virtual ~WindowButtonGroup() = default;

private:

	void createElements();
	void createLayout();

private:

	QHBoxLayout* m_layout;
  MaximizeButton* m_maximizeButton;
  MinimizeButton* m_minimizeButton;
  CloseButton* m_closeButton;
};

} // namespace Private
} // namespace WRibbon

#endif // !WRIBBON_PRIVATE_WINDOWBUTTONGROUP_H_

