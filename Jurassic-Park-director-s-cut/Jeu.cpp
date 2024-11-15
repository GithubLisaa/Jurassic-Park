#include "Jeu.h"
#include <iostream>

Jeu::Jeu() {}

void Jeu::addAnimal(Animal* animal) {
    m_animals.push_back(animal);
}

void Jeu::showAnimals() {
    std::cout << "\nEtat des animaux :\n";
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
    std::cout << "\n--- Debut du tour ---\n";

    for (auto animal : m_animals) {
        if (animal->getIsDead()) {
            continue;
        }

        animal->move();
        animal->eat();

        if (animal->isHungry()) {
            if (animal->getIsDead()) {
                continue;
            }
        }

        for (auto potentialPrey : m_animals) {
            if (animal != potentialPrey && !animal->getIsDead()) {
                if (animal->isHungry()) {
                    animal->hunt(m_animals);
                }
                else {
                    animal->flee(potentialPrey);
                }
            }
        }

        for (auto mate : m_animals) {
            if (animal != mate && !animal->getIsDead()) {
                animal->reproduce(mate);
            }
        }
    }

    showAnimals();
}

void Jeu::runSimulation() {
    int turnCount = 1;

    while (true) {
        bool hasLivingAnimal = false;
        for (auto animal : m_animals) {
            if (!animal->getIsDead()) {
                hasLivingAnimal = true;
                break;
            }
        }

        if (!hasLivingAnimal) {
            std::cout << "\nTous les animaux sont morts. Fin de la simulation." << std::endl;
            break;
        }

        std::cout << "\nTour " << turnCount++ << " :\n";
        simulateTurn();
    }
}
