#ifndef WRIBBON_PRIVATE_DYNAMICLAYOUT_HPP_
#define WRIBBON_PRIVATE_DYNAMICLAYOUT_HPP_

#include "WRibbon/Item.hpp"
#include <QLayout>
#include <vector>

namespace WRibbon {
namespace Private {

class DynamicLayout : public QLayout {

  Q_OBJECT

public:

  DynamicLayout(QWidget* parent = nullptr);
  virtual ~DynamicLayout() = default;

public:

  virtual void addItem(QLayoutItem* item) override;
  virtual QSize sizeHint() const override;
  virtual void setGeometry(const QRect &r) override;
  virtual QLayoutItem* itemAt(int index) const override;
  virtual QLayoutItem* takeAt(int index) override;
  virtual QSize minimumSize() const override;
  virtual int count() const override;

private:

  std::vector<QLayoutItem*> m_items;
};

} // namespace Private
} // namespace WRibbon

#endif // !WRIBBON_PRIVATE_DYNAMICLAYOUT_HPP_

  ///////////////////////////////////////////////////////////////////////////////
  // DOCUMENTATION                                                             //
  ///////////////////////////////////////////////////////////////////////////////

/**
 * @class WRibbon::Private::DynamicLayout
 *
 * @brief Dynamic widget layout used for inserting Item elements into a Group.
 *
 * This class is responsible of arranging Item elements inside a Group. The
 * layout takes into account the width of the parent and try to rearrange its
 * elements in order to fit them in the available space. In particular it's
 * fitted to work with elements of Item type. These ones can be resized in
 * many sizes, like big or little, and so its shape can change in order to fit
 * the type of element if possible.
 */
