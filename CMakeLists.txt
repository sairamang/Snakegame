cmake_minimum_required(VERSION 3.13)  # CMake version check
project(snakegame)               # Create project "simple_example"
set(CMAKE_CXX_STANDARD 14)            # Enable c++14 standard

# Add main.cpp file of project root directory as source file
set(SOURCE_FILES main.cpp Snake.cpp SupportFunc.cpp)
#Add Header Files
set(HEADER_FILES Snake.hpp SupportFunc.hpp)
# Add executable target with source files listed in SOURCE_FILES variable
add_executable(snakegame ${SOURCE_FILES} ${HEADER_FILES})
#Linking OpenGLLibs
target_link_libraries(snakegame glut GL pthread)