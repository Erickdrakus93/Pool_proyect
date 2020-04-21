cmake_minimum_required(VERSION 3.15)
project(Pool_proyect)
set(CMAKE_CXX_ STANDARD 20)
add_library(Pool_proyect library.cpp library.h library.cpp Containers Stack.h Stack.cpp
        Pool_layer iterator Pool_Abstract_Layer Moves_containers Functors.cpp Concurent_task)