#ifndef TREX_H
#define TREX_H
#include "Animal.h"
#include <iostream>
#include <random>


class trex : public Animal {
public:
	trex() : Animal("1", 2500, 15000, 500, 5, 3) {}

	void deplacement() {
		x = x + (gennbint(-vites, vites));
		y = y + (gennbint(-vites, vites));
		y = y + (gennbint(-vites, vites));
	}
};














#endif
