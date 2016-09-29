# WRibbon library
cmake_minimum_required (VERSION 3.0.0)

project (WRibbon)

set (CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set (CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set (CMAKE_PREFIX_PATH ${CMAKE_PREFIX_PATH} ${QT_DIR})
set (RESOURCES_PATH ${CMAKE_SOURCE_DIR}/resources)

set (CMAKE_AUTOMOC ON)
set (CMAKE_AUTORCC ON)

find_package (Qt5Widgets REQUIRED)
find_package (Qt5Core REQUIRED)
find_package (Qt5Gui REQUIRED)
find_package (Qt5Svg REQUIRED)

set (CMAKE_INCLUDE_CURRENT_DIR ON)

add_definitions(-DWRIBBON_EXPORTS)

include_directories (${CMAKE_SOURCE_DIR})
include_directories (${Qt5Widgets_INCLUDE_DIRS})
include_directories (${Qt5Core_INCLUDE_DIRS})
include_directories (${Qt5Widgets_INCLUDE_DIRS})
include_directories (${Qt5Svg_INCLUDE_DIRS})
include_directories (${Qt5Gui_INCLUDE_DIRS})

file (GLOB_RECURSE WRIBBON_SRC "*.cpp")
set (WRIBBON_QRC "${RESOURCES_PATH}/standard.qrc")

message (STATUS "QRC files are: ${WRIBBON_QRC}")

add_library(WRibbon SHARED ${WRIBBON_SRC} ${WRIBBON_QRC})
target_link_libraries(WRibbon Qt5::Core Qt5::Widgets Qt5::Gui Qt5::Svg)

