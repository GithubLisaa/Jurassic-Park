#ifndef DIPLODOCUS_H
#define DIPLODOCUS_H

#include "Animal.h"

class Diplodocus : public Animal {
public:
    Diplodocus();
    void attaquer(Animal& autre) override;
    void capaciteSpeciale(std::vector<Animal*>& animaux) override;
};

#endif
