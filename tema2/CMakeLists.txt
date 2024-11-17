cmake_minimum_required(VERSION 3.10)
project(tema2)

set(CMAKE_CXX_STANDARD 11)

# Surse
set(SOURCES src/main.cpp src/Food.h src/Fruit.h src/Vegetable.h)

# Creăm executabilul
add_executable(FoodExecutable src/main.cpp)



