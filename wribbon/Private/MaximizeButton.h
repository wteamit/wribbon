#ifndef WRIBBON_PRIVATE_MAXIMIZEBUTTON_H_
#define WRIBBON_PRIVATE_MAXIMIZEBUTTON_H_

#include <QWidget>
#include <QPushButton>

namespace WRibbon {
namespace Private {

class MaximizeButton : public QPushButton {

	Q_OBJECT

public:

	MaximizeButton(QWidget* parent = nullptr);
	virtual ~MaximizeButton() = default;
};

} // namespace Private
} // namespace WRibbon

#endif // !WRIBBON_PRIVATE_MAXIMIZEBUTTON_H_

