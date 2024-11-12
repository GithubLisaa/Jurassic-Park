#include "Guerrier.h"

Guerrier::Guerrier() : Personnage(100, "Guerrier") {}

void Guerrier::attaquer(Personnage& autre) {
    if (distanceAvec(autre) <= 1.5) {
        autre.recevoirDegats(10);
        std::cout << "Le Guerrier attaque au corps-a-corps.\n";
    }
    else {
        std::cout << "Le Guerrier est trop loin pour attaquer.\n";
    }
}

void Guerrier::capaciteSpeciale(std::vector<Personnage*>& personnages) {
    std::cout << "Le Guerrier utilise sa capacite speciale : attaque puissante !\n";
    for (auto& cible : personnages) {
        if (cible != this && cible->estVivant() && distanceAvec(*cible) <= 1.5) {
            cible->recevoirDegats(20);
        }
    }
}
