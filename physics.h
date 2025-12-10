//
// Created by clarion on 12/3/25.
//
#pragma once


#ifndef UNTITLED_PHYSICS_H
#define UNTITLED_PHYSICS_H
#include <utility>
#include <array>


class physics {

public:
    int simulationTime = 0; //in terms of time steps (by default 1 second)
    int timeStep = 1; //1 second


    std::pair<std::array<float, 3>,std::array<float, 3>> euler(int mass, int step, std::array<float,3> initPos, std::array<float,3> initVel, std::array<float, 3> force) {

        std::array<float,3> finalPos{0,0,0};
        std::array<float,3> finalVel{0,0,0};

        for (int i = 0; i < 3; i++) {
            finalVel[i] = initVel[i] + force[i]/mass * step;
            finalPos[i] = initPos[i] + initVel[i] * step;
        }

        auto result = std::make_pair(finalPos,finalVel);

        return result;
    }
    //IF NECESSARY, adaptive time stepping will be implemented.

};


#endif //UNTITLED_PHYSICS_H