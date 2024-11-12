#include "Archer.h"
#include <iostream>

Archer::Archer() : Personnage(60, "Archer") {}

void Archer::attaquer(Personnage& autre) {
    if (distanceAvec(autre) <= 5.0) {
        autre.recevoirDegats(8);
        std::cout << "L'Archer attaque a distance.\n";
    }
    else {
        std::cout << "L'Archer est trop loin pour attaquer.\n";
    }
}

void Archer::capaciteSpeciale(std::vector<Personnage*>& personnages) {
    std::cout << "L'Archer utilise sa capacite speciale : tir a longue portee !\n";
    for (auto& cible : personnages) {
        if (cible != this && cible->estVivant() && distanceAvec(*cible) <= 8.0) {
            cible->recevoirDegats(12);
        }
    }
}
