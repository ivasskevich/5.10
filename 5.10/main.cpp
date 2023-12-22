#include "Animal.h"
#include "Herbivore.h"
#include "Carnivore.h"
#include "Eating.h"
#include "AnimalList.h"

int main() {
    Wildebeest w("Mhorr Gazelle", "Africa", true, 220);
    w.Eat();
    Wolf wolf("Chrysocyon brachyurus", "South America", true, 350);
    w.Print();
    wolf.Print();
    Bison b("Bison Bonasus", "North America", true, 100);
    b.Eat();
    b.Print();
    Lion l("Leo Melanochaita", "Afirca", true, 230);
    l.Print();

    cout << endl << endl;
    if (w.getWeight() < wolf.getPower()) {
        w.isAlive(false);
    }
    wolf.Eat(w.getWeight());

    w.Print();
    wolf.Print();

    if (b.getWeight() < l.getPower()) {
        b.isAlive(false);
    }
    l.Eat(b.getWeight());

    b.Print();
    l.Print();
    cout << endl;
}