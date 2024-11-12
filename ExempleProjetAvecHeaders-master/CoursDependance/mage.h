#ifndef MAGE_H
#define MAGE_H

#include "Personnage.h"

class Mage : public Personnage {
public:
    Mage();
    void attaquer(Personnage& autre) override;
    void capaciteSpeciale(std::vector<Personnage*>& personnages) override;
};

#endif
