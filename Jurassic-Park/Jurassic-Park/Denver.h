#ifndef DENVER_H
#define DENVER_H
#include "Animal.h"
#include "outil.cpp"
#include <iostream>
#include <random>


class denver : public Animal {
public:
	denver() : Animal("1", 1000, 500, 10, 30, 25) {}

	void deplacement() {
		x = x + (gennbint(-vites, vites));
		y = y + (gennbint(-vites, vites));
		y = y + (gennbint(-vites, vites));
	}
};

#endif	
