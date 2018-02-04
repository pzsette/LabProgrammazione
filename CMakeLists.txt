cmake_minimum_required(VERSION 3.9)
project(Lab_Programmazione)

#set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set (CMAKE_PREFIX_PATH "/Users/Pietro/Qt/5.10.0/clang_64/lib/cmake/Qt5Widgets/")

set(CMAKE_AUTOMOC ON)


find_package(Qt5Widgets REQUIRED)
set(SOURCE_FILE main.cpp)

add_executable(Lab_Programmazione main.cpp Subject.h Observer.h MainWindow.cpp MainWindow.h ResourcesLoader.cpp ResourcesLoader.h File.cpp File.h)
add_executable(LabProj main.cpp)
add_library(core ${SOURCE_FILES})
target_link_libraries(core Qt5::Widgets)
target_link_libraries(${PROJECT_NAME} core)