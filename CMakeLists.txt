cmake_minimum_required(VERSION 3.9)
project(Lab_Programmazione)

#set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set (CMAKE_PREFIX_PATH "/Users/Pietro/Qt/5.10.0/clang_64/lib/cmake/Qt5Widgets/")

set(CMAKE_AUTOMOC ON)

add_subdirectory(test)

find_package(Qt5Widgets REQUIRED)


set(SOURCE_FILES main.cpp Subject.h Observer.h MainWindow.cpp MainWindow.h ResourcesLoader.cpp ResourcesLoader.h File.cpp File.h ConcreteObserver.h)
#set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "/Users/Pietro/Desktop/Lab_Programmazione/cmake-build-debug")
add_executable(Lab_Programmazione main.cpp)
add_library(core ${SOURCE_FILES})
target_link_libraries(core Qt5::Widgets)
target_link_libraries(${PROJECT_NAME} core)

