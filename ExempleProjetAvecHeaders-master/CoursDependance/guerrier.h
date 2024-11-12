#ifndef GUERRIER_H
#define GUERRIER_H

#include "Personnage.h"

class Guerrier : public Personnage {
public:
    Guerrier();
    void attaquer(Personnage& autre) override;
    void capaciteSpeciale(std::vector<Personnage*>& personnages) override;
};

#endif
