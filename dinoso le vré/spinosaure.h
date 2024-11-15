#ifndef SPINOSAURE_H
#define SPINOSAURE_H

#include "Animal.h"

class Spinosaure : public Animal {
public:
    Spinosaure();
    void attaquer(Animal& autre) override;
    void capaciteSpeciale(std::vector<Animal*>& animaux) override;
};

#endif
