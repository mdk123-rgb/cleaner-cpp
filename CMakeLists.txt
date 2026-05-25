cmake_minimum_required(VERSION 3.20) # minimalna wersja CMake
project(SystemCleaner) # nazwa projektu

set(CMAKE_CXX_STANDARD 17) # ustawienie standardu C++ na 17
set(CMAKE_CXX_STANDARD_REQUIRED ON) 

add_subdirectory(src/backend) 
add_subdirectory(src/frontend)
