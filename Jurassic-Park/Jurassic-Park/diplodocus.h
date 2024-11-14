#ifndef DIPLODOCUS_H
#define DIPLODOCUS_H

#include "Animal.h"
#include <vector>

class Diplodocus : public Animal {
public:
	Diplodocus();
	void attaquer(Animal& autre);
	void estNourri(std::vector<Animal*>& animaux);
};

Diplodocus::Diplodocus() : Animal("Diplodocus", 20, 80, 3, 1, 100) {}

void Diplodocus::attaquer(Animal& autre) {
}

void Diplodocus::estNourri(std::vector<Animal*>&) {
	std::cout << "Le diplodocus est nourri\n";
	lavi += 15;
	if (lavi > 80) lavi = 80;
}

#endif // !DIPLODOCUS_H
