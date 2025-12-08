//
// Created by clarion on 12/3/25.
//
#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include "asset.h"
#include <unordered_map>
#include <vector>

#ifndef UNTITLED_SIMULATIONSPACE_H
#define UNTITLED_SIMULATIONSPACE_H

//Simulation Space reads a user-defined list of assets and inbound threats
//If no threats or assets are specified a pre-defined scenario with random threats will
//be demonstrated

class simulationSpace {
public:
    simulationSpace()
    {
    int DEFAULTKILLTIME = 1000; //When to end the simulation if airborne threats remain
    int userKillTime = 0; //If 0 this the default is used, otherwise use DEFAULTKILLTIME

    std::cout << "Constructing Simulation Space \n";

        static std::string assetList = "../data/assets.csv";
        static std::ifstream inAss(assetList);

        static std::string threatList = "../data/assets.csv";
        static std::ifstream inThr(assetList);

        //Load Data Files; assets.csv, and threats.csv they must be in ../data/ and be formatted as in README.txt
        std::cout << "Loading Assets \n";
        if (!inAss.is_open()) {
            std::cerr << "Error: Could not open " << assetList << std::endl;
            exit(EXIT_FAILURE);
        }
        std::cout << "Successfully Loaded Assets \n";

        std::cout << "Loading Threats \n";
        if (!inThr.is_open()) {
            std::cerr << "Error: Could not open " << threatList << std::endl;
            exit(EXIT_FAILURE);
        }
        std::cout << "Successfully Loaded Threats \n";

        auto lineCount = std::count_if(std::istreambuf_iterator<char>{inAss}, {}, [](char c) { return c == '\n'; });

        std::vector<float> processAssets(int count, std::ifstream assets);
        std::vector<float> processThreats(int count, std::ifstream threats);

        assetData = processAssets(lineCount, inAss.);



        };
    };


#endif //UNTITLED_SIMULATIONSPACE_H