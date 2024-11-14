#include <iostream>

static int gennbint(int nb1, int nb2) {
	return floor(nb1 + ((rand() / (float)RAND_MAX) * nb2));
}