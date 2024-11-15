#include "Jeu.h"
#include <iostream>

int main() {
    Jeu jeu;
    int nombreAnimaux;
    std::cout << "Entrez le nombre d'animaux : ";
    std::cin >> nombreAnimaux;
    std::cin.ignore();
    jeu.lancerJeu(nombreAnimaux);
    return 0;
}
