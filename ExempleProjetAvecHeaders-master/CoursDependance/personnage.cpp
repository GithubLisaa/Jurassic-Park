#include "Personnage.h"
#include <cstdlib>

Personnage::Personnage(int hp, std::string type) : hp(hp), x(rand() % 20), y(rand() % 20), type(type) {}

bool Personnage::estVivant() const {
    return hp > 0;
}

double Personnage::distanceAvec(const Personnage& autre) const {
    return sqrt(pow(x - autre.x, 2) + pow(y - autre.y, 2));
}

void Personnage::deplacer(int dx, int dy) {
    x += dx;
    y += dy;
    std::cout << type << " se deplace en (" << x << ", " << y << ").\n";
}

std::string Personnage::getType() const {
    return type;
}

void Personnage::recevoirDegats(int degats) {
    hp -= degats;
    std::cout << type << " recoit " << degats << " points de degats, HP restants : " << hp << "\n";
}
