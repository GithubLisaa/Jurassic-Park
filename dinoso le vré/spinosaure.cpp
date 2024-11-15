#include "Spinosaure.h"
#include <iostream>

Spinosaure::Spinosaure() : Animal(80, "Spinosaure") {}

void Spinosaure::attaquer(Animal& autre) {
    if (distanceAvec(autre) <= 1.5) {
        autre.recevoirDegats(5);
        std::cout << "Le Spinosaure attaque faiblement.\n";
    }
    else {
        std::cout << "Le Spinosaure est trop loin pour attaquer.\n";
    }
}

void Spinosaure::capaciteSpeciale(std::vector<Animal*>&) {
    std::cout << "Le Spinosaure trouve de la nourriture et se soigne !\n";
    hp += 15;
    if (hp > 80) hp = 80;
    std::cout << "Vie du Spinosaure après : " << hp << "\n";
}
