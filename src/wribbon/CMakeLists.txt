# WRibbon library
cmake_minimum_required (VERSION 3.7.0)

project (wribbon)

set (CMAKE_PREFIX_PATH ${CMAKE_PREFIX_PATH} ${QT_DIR})
set (RESOURCES_PATH ${CMAKE_SOURCE_DIR}/resources)

set (CMAKE_AUTOMOC ON)
# set (CMAKE_AUTORCC ON)

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
include_directories (${CMAKE_SOURCE_DIR}/src ${CMAKE_CURRENT_SOURCE_DIR}  ${Boost_INCLUDE_DIRS})

file (GLOB_RECURSE PROJECT_SRC "*.cpp")
# set (PROJECT_SRC "${RESOURCES_PATH}/standard.qrc")

add_library(${PROJECT_NAME} SHARED ${PROJECT_SRC})
target_link_libraries(${PROJECT_NAME} Qt5::Core Qt5::Widgets Qt5::Gui Qt5::Svg)

