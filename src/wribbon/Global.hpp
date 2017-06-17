#ifndef WRIBBON_GLOBAL_HPP_
#define WRIBBON_GLOBAL_HPP_

#ifdef _MSC_VER
# ifdef WRIBBON_EXPORTS
#  define WRIBBON_LIB __declspec(dllexport)
# else
#  define WRIBBON_LIB __declspec(dllimport)
# endif
#elif __GNUC__
# ifdef WRIBBON_EXPORTS
#  define WRIBBON_LIB __attribute__((visibility("default")))
# else
#  define WRIBBON_LIB
# endif
#else
# define WRIBBON_LIB
# pragma warning Unknown dynamic link import/export semantics.
#endif

#endif // !WRIBBON_GLOBAL_HPP_
