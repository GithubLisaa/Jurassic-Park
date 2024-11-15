#ifndef JEU_H
#define JEU_H

#include <vector>
#include "Animal.h"

class Jeu {
private:
    std::vector<Animal*> animaux;

public:
    ~Jeu();
    void init(int nombreAnimaux);
    void tourDeJeu();
    void lancerJeu(int nombreAnimaux);
};

#endif
