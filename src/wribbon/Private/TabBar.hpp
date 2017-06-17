#ifndef WRIBBON_PRIVATE_TABBAR_HPP_
#define WRIBBON_PRIVATE_TABBAR_HPP_

#include <QWidget>
#include <QTabBar>
#include <QHBoxLayout>
#include <QString>

namespace WRibbon {
namespace Private {

class TabBar : public QWidget {

  Q_OBJECT

public:

  TabBar(QWidget* parent = nullptr);
  virtual ~TabBar() = default;
  void addTab(const QString& tabName);

private:

  void createWidgets();
  void createLayout();

private:

  QTabBar* m_bar;
  QHBoxLayout* m_layout;
};

} // namespace Private
} // namespace WRibbon

#endif // !WRIBBON_PRIVATE_TABBAR_HPP_
