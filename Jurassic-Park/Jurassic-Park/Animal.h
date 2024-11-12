#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

float gennbint(int nb1, int nb2) {
    return floor(nb1 + ((rand() / (float)RAND_MAX) * nb2));
}

class Animal {
private:
    int x;
    int y;

    int grangou;
    int lavi;
    bool lachas;

public:
    Animal(int hp, int faim) : grangou(faim), lavi(hp), x(gennbint(0, 20)), y(gennbint(0, 20)) {}

    void test() {std::cout"test";}
};

#endif