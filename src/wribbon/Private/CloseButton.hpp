#ifndef WRIBBON_PRIVATE_CLOSEBUTTON_H_
#define WRIBBON_PRIVATE_CLOSEBUTTON_H_

#include <QWidget>
#include <QPushButton>

namespace WRibbon {
namespace Private {

class CloseButton : public QPushButton {

	Q_OBJECT

public:

	CloseButton(QWidget* parent = nullptr);
	virtual ~CloseButton() = default;
};

} // namespace Private
} // namespace WRibbon

#endif // !WRIBBON_PRIVATE_CLOSEBUTTON_H_

