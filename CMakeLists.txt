cmake_minimum_required(VERSION 3.0.0)
project(crossengine)

set(BUILD_SHARED_LIBS ON)

# GLFW
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

add_subdirectory(deps/glfw)

# message(${CMAKE_LIBRARY_ARCHITECTURE})

add_executable(${CMAKE_PROJECT_NAME} src/main.cpp src/engine/game.cpp src/engine/window.cpp)
target_link_libraries(${CMAKE_PROJECT_NAME} glfw)
target_link_libraries(${CMAKE_PROJECT_NAME} GL)
target_include_directories(${CMAKE_PROJECT_NAME} PUBLIC src/include)
include_directories(src/include)
