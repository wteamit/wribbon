#ifndef WRIBBON_PRIVATE_MINIMIZEBUTTON_H_
#define WRIBBON_PRIVATE_MINIMIZEBUTTON_H_

#include <QWidget>
#include <QPushButton>

namespace WRibbon {
namespace Private {

class MinimizeButton : public QPushButton {

	Q_OBJECT

public:

	MinimizeButton(QWidget* parent = nullptr);
	virtual ~MinimizeButton() = default;
};

} // namespace Private
} // namespace WRibbon

#endif // !WRIBBON_PRIVATE_MINIMIZEBUTTON_H_

