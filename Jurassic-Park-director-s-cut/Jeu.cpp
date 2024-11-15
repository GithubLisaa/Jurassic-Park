#include "Jeu.h"
#include <iostream>

Jeu::Jeu() {}

void Jeu::addAnimal(Animal* animal) {
    m_animals.push_back(animal);
}

void Jeu::showAnimals() {
    std::cout << "\nÉtat des animaux :\n";
    for (auto animal : m_animals) {
        if (animal->getIsDead()) {
            std::cout << animal->getName() << " est mort." << std::endl;
        }
        else {
            std::cout << animal->getName() << " est vivant.\n";
        }
    }
}

void Jeu::simulateTurn() {
    std::cout << "\n--- Début du tour ---\n";

    for (auto animal : m_animals) {
        if (animal->getIsDead()) {
            continue; // Si l'animal est mort, il ne fait rien
        }

        animal->move(); // L'animal se déplace
        animal->eat(); // Il mange si nécessaire

        if (animal->isHungry()) {
            // Recherche de nourriture : les carnivores chassent, les herbivores mangent des plantes
            if (animal->getIsDead()) {
                continue; // Si l'animal est mort après avoir eu faim
            }
        }

        // Comportement de chasse ou de fuite
        for (auto potentialPrey : m_animals) {
            if (animal != potentialPrey && !animal->getIsDead()) {
                if (animal->isHungry()) {
                    animal->hunt(m_animals); // Si c'est un carnivore, il chasse
                }
                else {
                    animal->flee(potentialPrey); // Si l'animal est herbivore, il fuit
                }
            }
        }

        // Logique de reproduction
        for (auto mate : m_animals) {
            if (animal != mate && !animal->getIsDead()) {
                animal->reproduce(mate); // Reproduction simple entre deux animaux
            }
        }
    }

    // Afficher l'état des animaux après ce tour
    showAnimals();
}

void Jeu::runSimulation(int totalTurns) {
    for (int i = 0; i < totalTurns; ++i) {
        std::cout << "\nTour " << i + 1 << " :\n";
        simulateTurn();
    }
}
