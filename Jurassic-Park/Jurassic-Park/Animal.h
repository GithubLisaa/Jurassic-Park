#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

float gennbint(int nb1, int nb2) {
    return floor(nb1 + ((rand() / (float)RAND_MAX) * nb2));
}

class bet {
private:
    std::string nom;
    int grangou;
    int lavi;
    bool lachas;
    int predasyon;

public:
    int x;
    int y;

<<<<<<< Updated upstream
    bet(int hp, int faim, int predation) : grangou(faim), lavi(hp), predasyon(predation), x(gennbint(0, 20)), y(gennbint(0, 20)) {}
=======
    Animal(std::string name, int hp, int faim) : nom(name), grangou(faim), lavi(hp), x(gennbint(0, 20)), y(gennbint(0, 20)) {}
>>>>>>> Stashed changes

    void test() { std::cout << nom << ", faim: " << grangou << ", vie: " << lavi << ", x: " << x << " y: " << y; }
};

#endif