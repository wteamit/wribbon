# WRibbon library
cmake_minimum_required (VERSION 3.0.0)

project (WRibbon)

set (CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set (CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set (CMAKE_PREFIX_PATH ${CMAKE_PREFIX_PATH} ${QT_DIR})

find_package (Qt5Widgets REQUIRED)
find_package (Qt5Core REQUIRED)
find_package (Qt5Gui REQUIRED)

set (CMAKE_INCLUDE_CURRENT_DIR ON)
set (CMAKE_AUTOMOC ON)

add_definitions(-DWRIBBON_EXPORTS)

include_directories (${CMAKE_SOURCE_DIR})
include_directories (${Qt5Widgets_INCLUDE_DIRS})
include_directories (${Qt5Core_INCLUDE_DIRS})
include_directories (${Qt5Widgets_INCLUDE_DIRS})
include_directories (${Qt5Gui_INCLUDE_DIRS})

file (GLOB WRIBBON_SRC "*.cpp")

add_library(WRibbon SHARED ${WRIBBON_SRC})
target_link_libraries(WRibbon Qt5::Core Qt5::Widgets Qt5::Gui)

