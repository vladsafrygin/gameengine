cmake_minimum_required(VERSION 3.15)
project(Geng)

set(GENG_FILES Engine/Core/Application.cpp
               Engine/Core/Log.cpp
               Platform/WindowsWindow.cpp
               Geng.h
               )

add_library(Geng SHARED ${GENG_FILES})

target_compile_definitions(Geng PRIVATE GG_DEBUG)

add_subdirectory("vendor/spdlog")
add_subdirectory("vendor/GLFW")

target_include_directories(Geng PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")
target_include_directories(Geng PRIVATE
                          "vendor/spdlog/include"
                          "vendor/GLFW/include"
                          )

find_package(OpenGL REQUIRED)
target_link_libraries(Geng ${OPENGL_LIBRARIES})

target_link_libraries(Geng spdlog_header_only glfw)

