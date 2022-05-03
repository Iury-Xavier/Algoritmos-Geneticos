cmake_minimum_required(VERSION 3.17)
project(AG)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(AG
        populacao.cpp
        populacao.h
        individuo.cpp
        individuo.h
        main.cpp)
