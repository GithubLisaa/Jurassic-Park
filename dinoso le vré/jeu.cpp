#include "Jeu.h"
#include "Trex.h"
#include "Velociraptor.h"
#include "Spinosaure.h"
#include "Diplodocus.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

Jeu::~Jeu() {
    for (auto animal : animaux)
        delete animal;
}

void Jeu::init(int nombreAnimaux) {
    srand(time(0));
    for (int i = 0; i < nombreAnimaux; ++i) {
        int classe = rand() % 4;
        switch (classe) {
        case 0: animaux.push_back(new Trex()); break;
        case 1: animaux.push_back(new Velociraptor()); break;
        case 2: animaux.push_back(new Spinosaure()); break;
        case 3: animaux.push_back(new Diplodocus()); break;
        }
    }
}

void Jeu::tourDeJeu() {
    for (auto personnage : animaux) {
        if (!personnage->estVivant()) continue;
        int action = rand() % 3;
        switch (action) {
        case 0: personnage->deplacer(rand() % 3 - 1, rand() % 3 - 1); break;
        case 1:
            for (auto& cible : animaux) {
                if (cible != personnage && cible->estVivant()) {
                    personnage->attaquer(*cible);
                    break;
                }
            }
            break;
        case 2: personnage->capaciteSpeciale(animaux); break;
        }
        if (std::count_if(animaux.begin(), animaux.end(), [](Animal* p) { return p->estVivant(); }) <= 1) {
            break;
        }
    }
}

void Jeu::lancerJeu(int nombreAnimaux) {
    init(nombreAnimaux);
    while (std::count_if(animaux.begin(), animaux.end(), [](Animal* p) { return p->estVivant(); }) > 1) {
        tourDeJeu();
        std::cout << "\nAppuyez sur Entree pour passer au tour suivant...\n";
        std::cin.ignore();
    }
    for (auto p : animaux) {
        if (p->estVivant()) {
            std::cout << "Le jeu est fini\n";
            break;
        }
    }
}
