cmake_minimum_required(VERSION 3.15)
project(MyProject)

set(CMAKE_CXX_STANDARD 17)

# Project directories
add_subdirectory("Geng/")
add_subdirectory("Sandbox/")

# Target
add_executable(SandboxApp Sandbox/SandboxApp.cpp)
target_link_libraries(SandboxApp Geng)

