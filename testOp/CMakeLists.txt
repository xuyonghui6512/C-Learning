cmake_minimum_required(VERSION 3.12)
project(testOp)

set(CMAKE_CXX_STANDARD 14)
find_package(OpenCV REQUIRED)
add_executable(testOp main.cpp)
target_link_libraries(testOp ${OpenCV_LIBS})