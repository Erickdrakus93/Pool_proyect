cmake_minimum_required(VERSION 3.15)
project(Pool_proyect)
set(CMAKE_CXX_ STANDARD 20)
add_library(Pool_proyect library.cpp library.h library.cpp Containers Stack.h Stack.cpp
        Pool_layer iterator Pool_Abstract_Layer Moves_containers Functors.cpp Concurent_task
        Proxies Error_Handlers.cpp Implement_Smart_ptrs Debugging
        IOS_examples Templates
        functional_programm MonteCarlo_Simulations
        Neuron_layer)