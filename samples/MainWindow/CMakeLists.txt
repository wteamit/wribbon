# MainWindow sample
cmake_minimum_required (VERSION 3.0.0)

project (MainWindow)

set (CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set (CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set (CMAKE_PREFIX_PATH ${CMAKE_PREFIX_PATH} ${QT_DIR})

find_package (Qt5Widgets REQUIRED)
find_package (Qt5Core REQUIRED)

set (CMAKE_INCLUDE_CURRENT_DIR ON)
set (CMAKE_AUTOMOC ON)

include_directories (${CMAKE_SOURCE_DIR})
include_directories (${Qt5Widgets_INCLUDE_DIRS})
include_directories (${Qt5Core_INCLUDE_DIRS})

file (GLOB MAINWINDOW_SRC "*.cpp")

add_executable(MainWindow ${MAINWINDOW_SRC})
target_link_libraries (MainWindow WRibbon)
target_link_libraries (MainWindow Qt5::Widgets Qt5::Core)

