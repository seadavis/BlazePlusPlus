cmake_minimum_required(VERSION 2.8)
project( BlazePlusPlus )
list(APPEND CMAKE_PREFIX_PATH "/home/sdavis/CopiedRepos/mediapipe/bazel-bin/mediapipe/lib")
find_library(MY_LIB test_lib)
find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS} )
set(MY_LIB_HEADERS "/home/sdavis/CopiedRepos/mediapipe/mediapipe/lib/")
include_directories(${MY_LIB_HEADERS})

add_executable( "./bin/BlazePlusPlus" "./src/main.cpp" )

target_link_libraries( "./bin/BlazePlusPlus" ${OpenCV_LIBS} ${MY_LIB} )
