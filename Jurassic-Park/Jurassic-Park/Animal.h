#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

float gennbint(int nb1, int nb2) {
    return floor(nb1 + ((rand() / (float)RAND_MAX) * nb2));
}

class bet {
private:

    int grangou;
    int lavi;
    bool lachas;
    int predasyon;

public:
    int x;
    int y;

    bet(int hp, int faim, int predation) : grangou(faim), lavi(hp), predasyon(predation), x(gennbint(0, 20)), y(gennbint(0, 20)) {}

    void test() { std::cout << grangou << ", " << lavi; }
};

#endif