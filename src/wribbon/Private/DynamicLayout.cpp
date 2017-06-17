#include "wribbon/Private/DynamicLayout.hpp"

namespace WRibbon {
namespace Private {

///////////////////////////////////////////////////////////////////////////////
// PUBLIC SECTION                                                            //
///////////////////////////////////////////////////////////////////////////////

DynamicLayout::DynamicLayout(QWidget* parent) :
QLayout(parent) {
  setContentsMargins(0, 0, 0, 0);
}

///////////////////////////////////////////////////////////////////////////////
// OVERRIDE PUBLIC SECTION                                                   //
///////////////////////////////////////////////////////////////////////////////

void DynamicLayout::addItem(QLayoutItem* item) {
  m_items.push_back(item);
}

QSize DynamicLayout::sizeHint() const {
  return QSize();
}

void DynamicLayout::setGeometry(const QRect &r) {

}

QLayoutItem* DynamicLayout::itemAt(int index) const {
  return m_items.at(index);
}

QLayoutItem* DynamicLayout::takeAt(int index) {
  if (index >=0 && index < static_cast<int>(m_items.size())) {
    auto value = m_items.at(index);
    m_items.erase(m_items.begin() + index);
    return value;
  }
  return nullptr;
}

QSize DynamicLayout::minimumSize() const {
  return QSize();
}

int DynamicLayout::count() const {
  return 0;
}

} // namespace Private
} // namespace WRibbon
