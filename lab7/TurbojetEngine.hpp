#pragma once
#include <stdio.h>
#include "Engine.hpp"

class TurbojetEngine : public Engine {
private:
    double thrust;

public:
    TurbojetEngine(double thrust);
    void show() const override;
};
