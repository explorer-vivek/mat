cmake_minimum_required(VERSION 3.0)

project(cgcustommath)

include_directories(include)

add_compile_definitions(CGCUSTOMMATH_DLL_EXPORTS)

add_library(${PROJECT_NAME} SHARED src/cgcustommath.cpp include/cgcustommath.hpp)

target_include_directories(${PROJECT_NAME} PUBLIC include)

find_package(Eigen3 CONFIG REQUIRED)
target_link_libraries(${PROJECT_NAME} PUBLIC Eigen3::Eigen )
