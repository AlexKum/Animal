#include <iostream>
#include "Animal.h"

void show(Animal animal) {
    std::cout << "Name:\t" << animal.getName() << std::endl;
    std::cout << "Class:\t" << animal.getClass() << std::endl;
    std::cout << "Mass:\t" << animal.getMass() << std::endl;
}

int main() {

    Animal a(5, "Lion", "Mammalia");
    show(a);

    Animal b(a);
    show(b);

    Animal *k = new Animal();

    k->setName("Wolf");
    k->setClass("Mammalia");
    k->setMass(10);

    show(*k);

    return 0;
}