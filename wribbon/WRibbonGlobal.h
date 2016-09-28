#ifndef WRIBBON_GLOBAL_H_
#define WRIBBON_GLOBAL_H_

#include <QtCore/QtGlobal>

#ifdef WRIBBON_EXPORTS
# define WRIBBON_LIB Q_DECL_EXPORT
#else
# define WRIBBON_LIB Q_DECL_IMPORT
#endif

#endif // !WRIBBON_GLOBAL_H_

