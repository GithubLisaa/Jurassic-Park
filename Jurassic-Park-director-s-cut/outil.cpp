#ifndef OUTIL_CPP
#define OUTIL_CPP

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

static int gennbint(int nb1, int nb2) {
	return floor(nb1 + ((rand() / (float)RAND_MAX) * nb2));
}

#endif
