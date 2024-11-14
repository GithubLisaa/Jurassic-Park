#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

float gennbint(int nb1, int nb2) {
    return floor(nb1 + ((rand() / (float)RAND_MAX) * nb2));
}

class Animal {
private:
    std::string nom;
    int grangou;
    int lavi;
    bool lachas;

public:
    int x;
    int y;

    Animal(std::string name, int hp, int faim) : nom(name), grangou(faim), lavi(hp), x(gennbint(0, 20)), y(gennbint(0, 20)) {}

    void Affichage() { std::cout << nom << ", faim: " << grangou << ", vie: " << lavi << ", x: " << x << " y: " << y; }
};

#endif