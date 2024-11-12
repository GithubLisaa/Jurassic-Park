#include "Guerisseur.h"
#include <iostream>

Guerisseur::Guerisseur() : Personnage(80, "Guerisseur") {}

void Guerisseur::attaquer(Personnage& autre) {
    if (distanceAvec(autre) <= 1.5) {
        autre.recevoirDegats(5);
        std::cout << "Le Guerisseur attaque faiblement.\n";
    }
    else {
        std::cout << "Le Guerisseur est trop loin pour attaquer.\n";
    }
}

void Guerisseur::capaciteSpeciale(std::vector<Personnage*>&) {
    std::cout << "Le Guerisseur utilise sa capacite speciale : se soigne !\n";
    hp += 15;
    if (hp > 80) hp = 80;  // Limite des points de vie du Guerisseur
    std::cout << "HP du Guerisseur apres soin : " << hp << "\n";
}
