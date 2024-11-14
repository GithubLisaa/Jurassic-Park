#ifndef TREX_H
#define TREX_H
#include "Animal.h"
#include "Denver.h"
#include <iostream>
#include <random>


class trex : public Animal {
public:
	trex() : Animal("1", 2500, 1500, 50, 5, 3) {}

	void deplacement() {
		x = x + (gennbint(-vites, vites));
		y = y + (gennbint(-vites, vites));
		y = y + (gennbint(-vites, vites));
	}
};

void reproduction(Animal* autre) {
	if (auto trex = dynamic_cast<trex*>(autre)) {
		int nesans = (gennbint(0, 100));
		if (nesans <= 49) {
			std::cout << "echec de la naissance";
		}
		else if (nesans == 50) {
			denver(): Animal(" ", 1000, 500, 10, 30, 25) {}
			std::cout << "un bebe special est ne"
		}
		else if(nesans >= 51) {
			trex(): Animal(" ", 2500, 1500, 50, 5, 3) {}
			std::cout << "un bebe est ne"
		}
	}
}













#endif
