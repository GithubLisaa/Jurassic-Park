#ifndef JEU_H
#define JEU_H

#include "Animal.h"
#include <vector>

class Jeu {
public:
    Jeu();
    void addAnimal(Animal* animal);
    void showAnimals();
    void simulateTurn();
    void runSimulation();

private:
    std::vector<Animal*> m_animals;
};

#endif
