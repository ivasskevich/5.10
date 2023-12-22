#pragma once
#include <iostream>
using namespace std;

class EatHerbivore {
public:
    virtual void Eat() = 0;
};

class EatCarnivore {
public:
    virtual void Eat(int weight) {}
};