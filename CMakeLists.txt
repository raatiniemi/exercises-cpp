cmake_minimum_required(VERSION 3.6)
project(exercises_cpp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

add_subdirectory(lib/googletest)
add_subdirectory(algorithm/fibonacci)
add_subdirectory(euler/problem-1)
