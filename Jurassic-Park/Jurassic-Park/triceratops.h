#ifndef TRICERA_H
#define TRICERA_H
#include "Animal.h"
#include <iostream>
#include <random>


class tricera : public Animal {
public:
	tricera() : Animal("1", 2500, 2000, 25, 2, 1) {}

	void deplacement() {
		x = x + (gennbint(-vites, vites));
		y = y + (gennbint(-vites, vites));
		y = y + (gennbint(-vites, vites));
	}
};

#endif	