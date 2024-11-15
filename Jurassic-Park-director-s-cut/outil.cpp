#ifndef OUTIL_CPP
#define OUTIL_CPP

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

// Génère un nombre aléatoire entre nb1 et nb2
static int gennbint(int nb1, int nb2) {
    // Assurer que nb1 est le plus petit et nb2 est le plus grand
    if (nb1 > nb2) std::swap(nb1, nb2);
    return static_cast<int>(floor(nb1 + ((rand() / (float)RAND_MAX) * (nb2 - nb1))));
}

#endif // OUTIL_CPP
