#ifndef GUERISSEUR_H
#define GUERISSEUR_H

#include "Personnage.h"

class Guerisseur : public Personnage {
public:
    Guerisseur();
    void attaquer(Personnage& autre) override;
    void capaciteSpeciale(std::vector<Personnage*>& personnages) override;
};

#endif
