#ifndef JEU_H
#define JEU_H

#include <vector>
#include "Personnage.h"

class Jeu {
private:
    std::vector<Personnage*> personnages;

public:
    ~Jeu();
    void init(int nombrePersonnages);
    void tourDeJeu();
    void lancerJeu(int nombrePersonnages);
};

#endif
