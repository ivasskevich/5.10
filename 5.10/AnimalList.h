#pragma once
#include <iostream>
using namespace std;

class Bison : public Animal, public Herbivore, public EatHerbivore {
public:
    Bison(const char* n, const char* m, bool a, int w) : Animal(n, m, a), Herbivore(w) {}
    virtual void Print() {
        cout << "Name: " << name << "\t\tContinent: " << mainland << "\t\tAlive: " << aliveOrDead << "\tWeight: " << weight << endl;
    }
    virtual void Eat() {
        weight += 50;
    }
    int getWeight() {
        return weight;
    }
    void isAlive(bool a) {
        aliveOrDead = a;
    }
};

class Wildebeest : public Animal, public Herbivore, public EatHerbivore {
public:
    Wildebeest(const char* n, const char* m, bool a, int w) : Animal(n, m, a), Herbivore(w) {}
    virtual void Print() {
        cout << "Name: " << name << "\t\tContinent: " << mainland << "\t\tAlive: " << aliveOrDead << "\tWeight: " << weight << endl;
    }
    virtual void Eat() {
        weight += 50;
    }
    int getWeight() {
        return weight;
    }
    void isAlive(bool a) {
        aliveOrDead = a;
    }
};

class Lion : public Animal, public Carnivore, public EatCarnivore {
public:
    Lion(const char* n, const char* m, bool a, int p) : Animal(n, m, a), Carnivore(p) {}
    virtual void Print() {
        cout << "Name: " << name << "\t\tContinent: " << mainland << "\t\tAlive: " << aliveOrDead << "\tPower: " << power << endl;
    }
    virtual void Eat(int weight) {
        if (weight < power) {
            power += 100;
        }
        else {
            power -= 100;
        }
    }
    int getPower() {
        return power;
    }
};

class Wolf : public Animal, public Carnivore, public EatCarnivore {
public:
    Wolf(const char* n, const char* m, bool a, int p) : Animal(n, m, a), Carnivore(p) {}
    virtual void Print() {
        cout << "Name: " << name << "\t\tContinent: " << mainland << "\t\tAlive: " << aliveOrDead << "\tPower: " << power << endl;
    }
    virtual void Eat(int weight) {
        if (weight < power) {
            power += 100;
        }
        else {
            power -= 100;
        }
    }
    int getPower() {
        return power;
    }
};