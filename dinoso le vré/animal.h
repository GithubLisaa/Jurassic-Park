#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <vector>
#include <cmath>
#include <iostream>

class Animal {
protected:
    int hp;
    int x, y;
    std::string type;

public:
    Animal(int hp, std::string type);
    virtual ~Animal() = default;

    virtual void attaquer(Animal& autre) = 0;
    virtual void capaciteSpeciale(std::vector<Animal*>& animaux) = 0;

    bool estVivant() const;
    double distanceAvec(const Animal& autre) const;
    void deplacer(int dx, int dy);
    std::string getType() const;
    void recevoirDegats(int degats);
};

#endif


