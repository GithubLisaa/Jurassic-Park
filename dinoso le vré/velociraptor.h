#ifndef VELOCIRAPTOR_H
#define VELOCIRAPTOR_H

#include "Animal.h"

class Velociraptor : public Animal {
public:
    Velociraptor();
    void attaquer(Animal& autre) override;
    void capaciteSpeciale(std::vector<Animal*>& animaux) override;
};

#endif
