#pragma once
#include <iostream>
using namespace std;

class Herbivore {
protected:
    int weight;
public:
    Herbivore(const int w) : weight(w) {}
};