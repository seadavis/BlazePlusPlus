cmake_minimum_required(VERSION 2.8)
project( BlazePlusPlus )
find_package(PkgConfig REQUIRED)

pkg_search_module(GLFW REQUIRED glfw3)
include_directories(${GLFW_INCLUDE_DIRS})

set(GLAD_DIR "./lib/glad")
include_directories("${GLAD_DIR}/include/")

set(SOURCES "./src/main.cpp" "${GLAD_DIR}/src/glad.c" "${GLAD_DIR}/include/glad/glad.h")
add_executable( "./bin/BlazePlusPlus" ${SOURCES})
target_link_libraries("./bin/BlazePlusPlus" glfw ${GLFW_LIBRARIES} ${CMAKE_DL_LIBS})