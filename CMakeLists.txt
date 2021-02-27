cmake_minimum_required(VERSION 3.17)
project(some-test-notes VERSION "0.0.1")

configure_file("version.hpp.in" "${PROJECT_BINARY_DIR}/include/connotes/version.hpp" @ONLY)

add_executable(notes-console main.cpp)
target_include_directories(notes-console PRIVATE ${PROJECT_BINARY_DIR}/include)
target_compile_features(notes-console PRIVATE cxx_std_17)


