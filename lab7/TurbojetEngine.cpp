#include "TurbojetEngine.hpp"
#include <iostream>

TurbojetEngine::TurbojetEngine(double thrust)
    : Engine("Турбореактивный двигатель"), thrust(thrust) {}

void TurbojetEngine::show() const {
    std::cout << "Турбореактивный двигатель, тяга: " << thrust << " м/с" << std::endl;
}
