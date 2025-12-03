//
// Created by clarion on 12/3/25.
//
#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include "asset.h"

#ifndef UNTITLED_SIMULATIONSPACE_H
#define UNTITLED_SIMULATIONSPACE_H

//Simulation Space reads a user-defined list of assets and inbound threats
//If no threats or assets are specified a pre-defined scenario with random threats will
//be demonstrated

class simulationSpace {
public:
    simulationSpace()
    {
    std::cout << "Constructing Simulation Space";
        static std::string assetList = "assets.csv";
        static std::ifstream inAss(assetList);
        if (!inAss.is_open()) {
            std::cerr << "Error: Could not open file " << filename << std::endl;
            exit(EXIT_FAILURE);
        }

        auto count = std::count_if(std::istreambuf_iterator<char>{inAss}, {}, [](char c) { return c == '\n'; });







        };
    };
    }
}


#endif //UNTITLED_SIMULATIONSPACE_H