cmake_minimum_required(VERSION 3.15)
project(opencv_helloworld)

set(CMAKE_CXX_STANDARD 11)
include_directories(/usr/local/include/opencv4/)
find_package(OpenCV 4.1.2 REQUIRED)
MESSAGE("OpenCV version : ${OpenCV_VERSION}")
add_subdirectory(lesson2)
add_subdirectory(lesson1)