#include "Jeu.h"
#include "Tyrannosaurus.h"
#include "Animal.h"

int main() {
    Jeu jeu;

    Tyrannosaurus* tRex = new Tyrannosaurus("T-Rex");
    Animal* herbivore = new Animal(5, 300, 2, 20, "Herbivore", false);
    Animal* carnivore = new Animal(3, 500, 3, 40, "Carnivore", true);

    jeu.addAnimal(tRex);
    jeu.addAnimal(herbivore);
    jeu.addAnimal(carnivore);

    jeu.runSimulation();

    delete tRex;
    delete herbivore;
    delete carnivore;

    return 0;
}
