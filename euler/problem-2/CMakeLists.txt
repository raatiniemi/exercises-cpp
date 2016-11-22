cmake_minimum_required(VERSION 3.6)
project(exercises_cpp_euler_problem_2)

set(FIBONACCI_DIR ../../algorithm/fibonacci)

set(SOURCE_FILES main.cpp ${FIBONACCI_DIR}/sequence.h ${FIBONACCI_DIR}/sequence.cpp)
add_executable(${PROJECT_NAME} ${SOURCE_FILES})
