#ifndef VELOCIRAPTOR_H
#define VELOCIRAPTOR_H

#include "Animal.h"
#include <vector>

class Velociraptore : public Animal {
public:
	Velociraptore();
	void attaquer(Animal& autre);
	void estNourri(std::vector<Animal*>& animaux);
};

Velociraptore::Velociraptore() : Animal("Velociraptore", 20, 80, 10, 1, 100) {}

void Velociraptore::attaquer(Animal& autre) {
}

void Velociraptore::estNourri(std::vector<Animal*>&) {
	std::cout << "Le velociraptore est nourri\n";
	lavi += 15;
	if (lavi > 80) lavi = 80;
}

#endif // !DIPLODOCUS_H