#include "Diesel.hpp"
#include <iostream>

Diesel::Diesel(int cylinderCount)
    : Engine("Дизель"), cylinderCount(cylinderCount) {}

void Diesel::show() const {
    std::cout << "Дизель, кол-во цилиндров: " << cylinderCount << std::endl;
}
