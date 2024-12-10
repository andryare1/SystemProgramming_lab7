#pragma once
#include <stdio.h>
#include "Engine.hpp"

class Diesel : Engine {
private:
    int cylinderCount;

public:
    Diesel(int cylinderCount);
    void show() const override;
};

