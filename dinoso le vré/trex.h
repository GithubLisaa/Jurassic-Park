#ifndef TREX_H
#define TREX_H

#include "Animal.h"

class Trex : public Animal {
public:
    Trex();
    void attaquer(Animal& autre) override;
    void capaciteSpeciale(std::vector<Animal*>& animaux) override;
};

#endif
