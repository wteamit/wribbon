# MainWindow sample
cmake_minimum_required (VERSION 3.0.0)

project (MainWindow)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

include_directories (${CMAKE_SOURCE_DIR})
file (GLOB MAINWINDOW_SRC "*.cpp")

add_executable(MainWindow ${MAINWINDOW_SRC})
target_link_libraries(MainWindow WRibbon)

