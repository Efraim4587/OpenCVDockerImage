cmake_minimum_required(VERSION 3.0)

project(process_image) 

find_package(OpenCV REQUIRED)

add_executable(process_image process_image.cpp)

target_link_libraries(process_image ${OpenCV_LIBS})