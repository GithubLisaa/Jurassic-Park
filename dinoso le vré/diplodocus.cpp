#include "Diplodocus.h"
#include <iostream>

Diplodocus::Diplodocus() : Animal(60, "Diplodocus") {}

void Diplodocus::attaquer(Animal& autre) {
    if (distanceAvec(autre) <= 5.0) {
        autre.recevoirDegats(8);
        std::cout << "Le Diplodocus attaque a distance.\n";
    }
    else {
        std::cout << "Le Diplodocus est trop loin pour attaquer.\n";
    }
}

void Diplodocus::capaciteSpeciale(std::vector<Animal*>& animaux) {
    std::cout << "Le Diplodocus attaque de loin !\n";
    for (auto& cible : animaux) {
        if (cible != this && cible->estVivant() && distanceAvec(*cible) <= 15.0) {
            cible->recevoirDegats(12);
        }
    }
}
