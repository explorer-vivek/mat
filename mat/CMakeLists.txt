cmake_minimum_required(VERSION 3.0)

set (CMAKE_CXX_STANDARD 14)

add_executable(${PROJECT_NAME} src/mat.cpp)

target_link_libraries(${PROJECT_NAME} cgcustommath)

if(WIN32)
add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD 
               COMMAND ${CMAKE_COMMAND} -E copy_if_different
               $<TARGET_FILE:cgcustommath>              
               $<TARGET_FILE_DIR:${PROJECT_NAME}>)
endif()
