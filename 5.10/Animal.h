#pragma once
#include <iostream>
using namespace std;

class Animal {
protected:
    char* name;
    char* mainland;
    bool aliveOrDead;
public:
    Animal() = default;
    Animal(const char* n, const char* m, const bool a);
    virtual void Print() = 0;
    virtual ~Animal();
};