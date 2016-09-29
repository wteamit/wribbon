#ifndef WRIBBON_PRIVATE_RIBBONUPPERPART_H_
#define WRIBBON_PRIVATE_RIBBONUPPERPART_H_

#include "Private/WindowButtonGroup.h"
#include "Private/Title.h"
#include <QHBoxLayout>
#include <QWidget>

namespace WRibbon {
namespace Private {

class RibbonUpperPart : public QWidget {

	Q_OBJECT

public:

	RibbonUpperPart(QWidget* parent = nullptr);
	virtual ~RibbonUpperPart() = default;

private:

	void createElements();
	void createLayout();

private:

	WindowButtonGroup* m_windowButtonGroup;
	Title* m_title;
	QHBoxLayout* m_layout;
};

} // namespace Private
} // namespace WRibbon

#endif // !WRIBBON_PRIVATE_RIBBONUPPERPART_H_

