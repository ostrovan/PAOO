cmake_minimum_required(VERSION 3.10)
project(tema4)

set(CMAKE_CXX_STANDARD 14)

# Surse
set(SOURCES src/car.cpp)

# Creăm executabilul
add_executable(CarExecutable src/car.cpp)


