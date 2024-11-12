#include "Jeu.h"
#include <iostream>

int main() {
    Jeu jeu;
    int nombrePersonnages;
    std::cout << "Entrez le nombre de personnages : ";
    std::cin >> nombrePersonnages;
    std::cin.ignore();
    jeu.lancerJeu(nombrePersonnages);
    return 0;
}
