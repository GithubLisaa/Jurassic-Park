#include "Mage.h"
#include <iostream>

Mage::Mage() : Personnage(70, "Mage") {}

void Mage::attaquer(Personnage& autre) {
    autre.recevoirDegats(10);
    std::cout << "Le Mage lance une attaque magique.\n";
}

void Mage::capaciteSpeciale(std::vector<Personnage*>& personnages) {
    std::cout << "Le Mage utilise sa capacite speciale : attaque double !\n";
    int cibleAttaquees = 0;
    for (auto& cible : personnages) {
        if (cible != this && cible->estVivant()) {
            cible->recevoirDegats(10);
            if (++cibleAttaquees == 2) break;  // Limite a deux cibles
        }
    }
}
