#include <iostream>
#include "Diesel.hpp"
#include "InternalCombustionEngine.hpp"
#include "TurbojetEngine.hpp"

int main() {
    Diesel diesel(6);
    TurbojetEngine turbojet(150.0);
    InternalCombustionEngine ice(500);
    ice.add();
    std::cout << "Список двигателей:" << std::endl;
    Engine::print();
    
    return 0;
}
