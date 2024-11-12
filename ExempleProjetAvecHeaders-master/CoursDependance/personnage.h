#ifndef PERSONNAGE_H
#define PERSONNAGE_H

#include <string>
#include <vector>
#include <cmath>
#include <iostream>

class Personnage {
protected:
    int hp;
    int x, y;
    std::string type;

public:
    Personnage(int hp, std::string type);
    virtual ~Personnage() = default;

    virtual void attaquer(Personnage& autre) = 0;
    virtual void capaciteSpeciale(std::vector<Personnage*>& personnages) = 0;

    bool estVivant() const;
    double distanceAvec(const Personnage& autre) const;
    void deplacer(int dx, int dy);
    std::string getType() const;
    void recevoirDegats(int degats);
};

#endif
