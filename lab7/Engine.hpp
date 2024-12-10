#pragma once
#include <stdio.h>
#include <list>
#include <string>

class Engine{
protected:
    std::string type;
    static std::list<Engine*> engines;
    
public:
    Engine(const std::string& type);
    virtual ~Engine();
    virtual void show() const = 0;
    void add();
    static void print();
};
