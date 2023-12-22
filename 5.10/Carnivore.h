#pragma once
#include <iostream>
using namespace std;

class Carnivore {
protected:
    int power;
public:
    Carnivore(int p) : power(p) {}
};