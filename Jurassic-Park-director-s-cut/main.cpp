#include "Jeu.h"
#include "Tyrannosaurus.h"
#include "Animal.h"

int main() {
    Jeu jeu;

    // Ajouter des animaux au jeu
    Tyrannosaurus* tRex = new Tyrannosaurus("T-Rex");
    Animal* herbivore = new Animal(5, 300, 2, 20, "Herbivore", false); // Herbivore
    Animal* carnivore = new Animal(3, 500, 3, 40, "Carnivore", true); // Carnivore

    jeu.addAnimal(tRex);
    jeu.addAnimal(herbivore);
    jeu.addAnimal(carnivore);

    // Lancer la simulation pendant 10 tours
    jeu.runSimulation(10);

    // Libérer la mémoire
    delete tRex;
    delete herbivore;
    delete carnivore;

    return 0;
}
