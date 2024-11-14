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

Diplodocus::Diplodocus() : Animal("Diplodocus", 20, 100, 80, 40) {}

void Diplodocus::attaquer(Animal& autre) {
}

void Diplodocus::estNourri(std::vector<Animal*>&) {
	std::cout << "Le diplodocus est nourri\n";
	hp += 15;
	if (hp > 80) hp = 80;
}

#endif // !DIPLODOCUS_H
