cmake_minimum_required(VERSION 3.9)
project(GLFW_Window)

set(CMAKE_CXX_STANDARD 14)

set(OpenGL_GL_PREFERENCE GLVND)
add_executable(GLFW_Window src/main.cpp)

set(SRC_DIR "${CMAKE_CURRENT_SOURCE_DIR}/source")
set(SOURCES "${SRC_DIR}/main.cpp")

set(LIB_DIR "${CMAKE_CURRENT_SOURCE_DIR}/libraries")

#GLAD configu
set(GLAD_DIR "${LIB_DIR}/glad")
add_library("glad" "${GLAD_DIR}/src/glad.c")
target_include_directories("glad" PRIVATE "${GLAD_DIR}/include")
target_include_directories(${PROJECT_NAME} PRIVATE "${GLAD_DIR}/include")
target_link_libraries(${PROJECT_NAME} "glad" "${CMAKE_DL_LIBS}")

find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)
include_directories( ${OPENGL_INCLUDE_DIRS}  ${GLUT_INCLUDE_DIRS} )

target_link_libraries(GLFW_Window ${OPENGL_LIBRARIES} ${GLUT_LIBRARY} glfw)
