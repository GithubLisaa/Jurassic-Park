#include "Jeu.h"
#include "Animal.h"

int main() {
    Jeu jeu;

    Animal* herbivore = new Animal(5, 300, 2, 20, "Herbivore", false);
    Animal* carnivore = new Animal(3, 500, 3, 40, "Carnivore", true);

    jeu.addAnimal(herbivore);
    jeu.addAnimal(carnivore);

    jeu.runSimulation();

    delete herbivore;
    delete carnivore;

    return 0;
}
