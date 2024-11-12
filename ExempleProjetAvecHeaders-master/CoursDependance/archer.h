#ifndef ARCHER_H
#define ARCHER_H

#include "Personnage.h"

class Archer : public Personnage {
public:
    Archer();
    void attaquer(Personnage& autre) override;
    void capaciteSpeciale(std::vector<Personnage*>& personnages) override;
};

#endif
