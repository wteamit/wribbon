# MainWindow sample
cmake_minimum_required (VERSION 3.7.0)

project (MainWindow)

find_package (Qt5Widgets REQUIRED)
find_package (Qt5Core REQUIRED)

set (CMAKE_INCLUDE_CURRENT_DIR ON)
set (CMAKE_AUTOMOC ON)

include_directories (${CMAKE_SOURCE_DIR}/src)
include_directories (${Qt5Widgets_INCLUDE_DIRS})
include_directories (${Qt5Core_INCLUDE_DIRS})

file (GLOB PROJECT_SRC "*.cpp")

add_executable(${PROJECT_NAME} ${PROJECT_SRC})
target_link_libraries (MainWindow wribbon)
target_link_libraries (MainWindow Qt5::Widgets Qt5::Core)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD COMMAND ${CMAKE_COMMAND} -E copy_if_different $<TARGET_FILE:Qt5::Widgets> $<TARGET_FILE_DIR:${PROJECT_NAME}>)
add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD COMMAND ${CMAKE_COMMAND} -E copy_if_different $<TARGET_FILE:Qt5::Gui> $<TARGET_FILE_DIR:${PROJECT_NAME}>)
add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD COMMAND ${CMAKE_COMMAND} -E copy_if_different $<TARGET_FILE:Qt5::Core> $<TARGET_FILE_DIR:${PROJECT_NAME}>)

