#include "Animal.h"
#include <cstdlib>

Animal::Animal(int hp, std::string type) : hp(hp), x(rand() % 20), y(rand() % 20), type(type) {}

bool Animal::estVivant() const {
    return hp > 0;
}

double Animal::distanceAvec(const Animal& autre) const {
    return sqrt(pow(x - autre.x, 2) + pow(y - autre.y, 2));
}

void Animal::deplacer(int dx, int dy) {
    x += dx;
    y += dy;
    std::cout << type << " se deplace en (" << x << ", " << y << ").\n";
}

std::string Animal::getType() const {
    return type;
}

void Animal::recevoirDegats(int degats) {
    hp -= degats;
    std::cout << type << " recoit " << degats << " HP restants : " << hp << "\n";
}
