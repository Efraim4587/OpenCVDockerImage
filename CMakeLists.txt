cmake_minimum_required(VERSION 3.0)

project(bwconvert)

find_package(OpenCV REQUIRED)

add_executable(bw bw.cpp)

target_link_libraries(bw ${OpenCV_LIBS})