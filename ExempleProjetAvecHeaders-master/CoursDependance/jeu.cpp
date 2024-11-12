#include "Jeu.h"
#include "Guerrier.h"
#include "Mage.h"
#include "Guerisseur.h"
#include "Archer.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

Jeu::~Jeu() {
    for (auto personnage : personnages)
        delete personnage;
}

void Jeu::init(int nombrePersonnages) {
    srand(time(0));
    for (int i = 0; i < nombrePersonnages; ++i) {
        int classe = rand() % 4;
        switch (classe) {
        case 0: personnages.push_back(new Guerrier()); break;
        case 1: personnages.push_back(new Mage()); break;
        case 2: personnages.push_back(new Guerisseur()); break;
        case 3: personnages.push_back(new Archer()); break;
        }
    }
}

void Jeu::tourDeJeu() {
    for (auto personnage : personnages) {
        if (!personnage->estVivant()) continue;
        int action = rand() % 3;
        switch (action) {
        case 0: personnage->deplacer(rand() % 3 - 1, rand() % 3 - 1); break;
        case 1:
            for (auto& cible : personnages) {
                if (cible != personnage && cible->estVivant()) {
                    personnage->attaquer(*cible);
                    break;
                }
            }
            break;
        case 2: personnage->capaciteSpeciale(personnages); break;
        }
        if (std::count_if(personnages.begin(), personnages.end(), [](Personnage* p) { return p->estVivant(); }) <= 1) {
            break;
        }
    }
}

void Jeu::lancerJeu(int nombrePersonnages) {
    init(nombrePersonnages);
    while (std::count_if(personnages.begin(), personnages.end(), [](Personnage* p) { return p->estVivant(); }) > 1) {
        tourDeJeu();
        std::cout << "\nAppuyez sur Entree pour passer au tour suivant...\n";
        std::cin.ignore();
    }
    for (auto p : personnages) {
        if (p->estVivant()) {
            std::cout << p->getType() << " a gagne la bataille royale!\n";
            break;
        }
    }
}
