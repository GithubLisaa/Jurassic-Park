#include "Trex.h"

Trex::Trex() : Animal(100, "Trex") {}

void Trex::attaquer(Animal& autre) {
    if (distanceAvec(autre) <= 2) {
        autre.recevoirDegats(15);
        std::cout << "Le Trex attaque au corps-a-corps.\n";
    }
    else {
        std::cout << "Le Trex est trop loin pour attaquer.\n";
    }
}

void Trex::capaciteSpeciale(std::vector<Animal*>& animaux) {
    std::cout << "Le Trex fait une attaque puissante !\n";
    for (auto& cible : animaux) {
        if (cible != this && cible->estVivant() && distanceAvec(*cible) <= 1.5) {
            cible->recevoirDegats(25);
        }
    }
}
