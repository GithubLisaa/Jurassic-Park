#ifndef HERBIVORE_H
#define HERBIVORE_H

#include "Animal.h"

class Herbivore : public Animal {
public:
    Herbivore(const std::string& name);
    void eatPlants();
};

#endif
