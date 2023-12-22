#include "Animal.h"

Animal::Animal(const char* n, const char* m, const bool a) {
    name = new char[strlen(n) + 1];
    strcpy_s(name, strlen(n) + 1, n);
    mainland = new char[strlen(m) + 1];
    strcpy_s(mainland, strlen(m) + 1, m);
    aliveOrDead = a;
}

Animal::~Animal() {
    delete[] name;
    delete[] mainland;
}