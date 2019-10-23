cmake_minimum_required(VERSION 3.15)
project(opencv_helloworld)

set(CMAKE_CXX_STANDARD 11)
include_directories(/usr/local/include/opencv4/)
find_package(OpenCV 4.1.2 REQUIRED)
MESSAGE("OpenCV version : ${OpenCV_VERSION}")
add_executable(opencv_helloworld main.cpp)
target_link_libraries(opencv_helloworld ${OpenCV_LIBS})