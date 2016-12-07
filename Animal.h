#ifndef ANIMAL_ANIMAL_H
#define ANIMAL_ANIMAL_H

#include <iostream>

class Animal {
private:
    int Mass;
    std::string Name;
    std::string Class;

public:
    Animal(int Mass, const std::string &Name, const std::string &Class);
    Animal();

    int getMass() const;
    void setMass(int Mass);

    const std::string &getName() const;
    void setName(const std::string &Name);

    const std::string &getClass() const;
    void setClass(const std::string &Class);

    friend std::ostream &operator<<(std::ostream &os, const Animal &animal);

    virtual ~Animal();

};


#endif //ANIMAL_ANIMAL_H
