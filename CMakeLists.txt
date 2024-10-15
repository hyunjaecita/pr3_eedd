cmake_minimum_required(VERSION 3.29)
project(practica_3_0)

set(CMAKE_CXX_STANDARD 20)

add_executable(practica_3_0 main.cpp
        Coche.cpp
        Coche.h
        ListaDEnlazada.h
        ReanelCar.cpp
        ReanelCar.h
        Usuario.cpp
        Usuario.h
        VDinamico.h)
