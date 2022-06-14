cmake_minimum_required(VERSION 3.0.0)
project(crossengine)

# GLFW
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

add_subdirectory(deps/glfw)

# message(${CMAKE_LIBRARY_ARCHITECTURE})

add_executable(${CMAKE_PROJECT_NAME} src/main.cpp)
target_link_libraries(${CMAKE_PROJECT_NAME} glfw)
target_include_directories(${CMAKE_PROJECT_NAME} PUBLIC src/include)
include_directories(src/include)