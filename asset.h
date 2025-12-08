//
// Created by clarion on 12/3/25.
//
#pragma once

#include <array>

#ifndef UNTITLED_ASSET_H
#define UNTITLED_ASSET_H


class asset {

private:
    std::array<float, 3> position{};
    std::array<float, 3> velocity{};
    float bearing;
    bool isDestroyed;
public:
    asset() {
        position = { 0, 0, 0 };
        velocity = { 0, 0, 0 };
        bearing = 0;
        isDestroyed = false;
    }

    [[nodiscard]] std::array<float,3> getPos() const {
        return position;
    }

    [[nodiscard]] std::array<float,3> getVel() const {
        return velocity;
    }

    void setPos(std::array<float,3> newPos) {
        position = newPos;
        return void;
    }
    void setVel(std::array<float,3> newVel) {
        velocity = newVel;
        return void;
    }
};


#endif //UNTITLED_ASSET_H
