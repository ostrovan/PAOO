#versiune CMake
cmake_minimum_required(VERSION 3.0)

#Project name
project(tema1)

#seteaza standard C++
set(CMAKE_CXX_STANDARD 17)

#inc fișierele header
include_directories(inc)

#def executabil
add_executable(Executable src/main.cpp src/Animale.cpp)
