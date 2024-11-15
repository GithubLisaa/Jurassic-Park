#include "Velociraptor.h"
#include <iostream>

Velociraptor::Velociraptor() : Animal(70, "Velociraptor") {}

void Velociraptor::attaquer(Animal& autre) {
    autre.recevoirDegats(10);
    std::cout << "Le Velociraptor attaque faiblement.\n";
}

void Velociraptor::capaciteSpeciale(std::vector<Animal*>& animaux) {
    std::cout << "Le Velociraptor attaque 2 cibles différentes !\n";
    int cibleAttaquees = 0;
    for (auto& cible : animaux) {
        if (cible != this && cible->estVivant()) {
            cible->recevoirDegats(10);
            if (++cibleAttaquees == 2) break;
        }
    }
}
