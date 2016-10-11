cmake_minimum_required(VERSION 3.6)
project(exercises_cpp_algorithm_fibonacci)
set(PROJECT_NAME_TEST ${PROJECT_NAME}_test)

set(SOURCE_FILES sequence.cpp sequence.h)
add_executable(${PROJECT_NAME} main.cpp ${SOURCE_FILES})

set(SOURCE_FILES_TEST sequence_test.cpp)
add_executable(${PROJECT_NAME_TEST} ${SOURCE_FILES} ${SOURCE_FILES_TEST})
target_link_libraries(${PROJECT_NAME_TEST} gtest gtest_main)
