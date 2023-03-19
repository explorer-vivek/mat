cmake_minimum_required(VERSION 3.0)

set (CMAKE_CXX_STANDARD 14)

add_executable(${PROJECT_NAME} src/mat.cpp)

target_link_libraries(${PROJECT_NAME} cgcustommath)
