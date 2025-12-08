cmake_minimum_required(VERSION 4.0)
project(untitled)

set(CMAKE_CXX_STANDARD 23)

add_executable(untitled main.cpp
        asset.cpp
        asset.h
        simulationSpace.cpp
        simulationSpace.h
        physics.cpp
        physics.h
        environment.cpp
        environment.h
        behavior.cpp
        behavior.h
        airborne.cpp
        airborne.h
        missile.cpp
        missile.h
        drone.cpp
        drone.h
)
