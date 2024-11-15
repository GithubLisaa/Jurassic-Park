#include "Herbivore.h"
#include <iostream>

Herbivore::Herbivore(const std::string& name)
    : Animal(0, 0, 0, 0, name, false) {}

void Herbivore::eatPlants() {
    std::cout << getName() << " is eating plants." << std::endl;
}
