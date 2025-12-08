//
// Created by clarion on 12/3/25.
//

#ifndef UNTITLED_AIRBORNE_H
#define UNTITLED_AIRBORNE_H
#include "asset.h"


class airborne: public asset {
    public:
        int flightTime;
        int maxFlightTime;
        float mass;

    airborne(int flightTime, int maxFlightTime, float mass, bool isLaunched);
    {

    }
};


#endif //UNTITLED_AIRBORNE_H