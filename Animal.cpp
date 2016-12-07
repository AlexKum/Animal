#include "Animal.h"

Animal::Animal(int Mass, const std::string &Name, const std::string &Class) : Mass(Mass), Name(Name), Class(Class) {
    std::cout << "\nThis is a parameterized constructor" << std::endl;
}
Animal::Animal() {
    std::cout << "\nThis is the normal constructor" << std::endl;
}

int Animal::getMass() const {
    return Mass;
}

void Animal::setMass(int Mass) {
    Animal::Mass = Mass;
}

const std::string &Animal::getName() const {
    return Name;
}

void Animal::setName(const std::string &Name) {
    Animal::Name = Name;
}

const std::string &Animal::getClass() const {
    return Class;
}

void Animal::setClass(const std::string &Class) {
    Animal::Class = Class;
}

std::ostream &operator<<(std::ostream &os, const Animal &animal) {
    os << "Mass: " << animal.Mass << " Name: " << animal.Name << " Class: " << animal.Class;
    return os;
}

Animal::~Animal() {
    std::cout << "\nThis destructor" << std::endl;
}
