#pragma once
#include "Engine.hpp"

class InternalCombustionEngine : public Engine {
protected:
    int displacement;

public:
    InternalCombustionEngine(int displacement);
    void show() const override;
};

