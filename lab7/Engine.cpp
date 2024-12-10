#include "Engine.hpp"

std::list<Engine*> Engine::engines;

Engine::Engine(const std::string& type) : type(type) {
    engines.push_back(this);
}

void Engine::add() {
    engines.push_back(this);
}

Engine::~Engine() {}

void Engine::print() {
    for (auto* engine : engines) {
        engine->show();
    }
}

