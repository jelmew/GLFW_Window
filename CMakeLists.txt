cmake_minimum_required(VERSION 3.9)
project(GLFW_Window)

set(CMAKE_CXX_STANDARD 14)

add_executable(GLFW_Window main.cpp)


find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)
include_directories( ${OPENGL_INCLUDE_DIRS}  ${GLUT_INCLUDE_DIRS} )

target_link_libraries(GLFW_Window ${OPENGL_LIBRARIES} ${GLUT_LIBRARY} glfw)