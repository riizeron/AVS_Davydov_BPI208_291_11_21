# set minimum cmake version
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# project name and language
project(task1 LANGUAGES CXX)

set(BUILD_DIR "${CMAKE_BINARY_DIR}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${BUILD_DIR}/../bin")

set(BINARY_DIR "${CMAKE_BINARY_DIR}")

# Source files list
set(SOURCE_FILES
    # Headers
    rnd.h
    fraction.h
    complex.h
    polar.h
    number.h
    container.h

    # Sources
    complex.cpp
    fraction.cpp
    polar.cpp
    number.cpp
    container.cpp
    main.cpp
)

add_executable(task01 ${SOURCE_FILES})
