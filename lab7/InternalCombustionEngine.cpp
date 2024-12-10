#include "InternalCombustionEngine.hpp"
#include <iostream>

InternalCombustionEngine::InternalCombustionEngine(int displacement)
    : Engine("ДВС"), displacement(displacement) {}

void InternalCombustionEngine::show() const{
    std::cout << "ДВС, рабочий объем: " << displacement << std::endl;
}

