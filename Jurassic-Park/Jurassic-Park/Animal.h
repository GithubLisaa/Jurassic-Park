#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

float gennbint(int nb1, int nb2) {
    return floor(nb1 + ((rand() / (float)RAND_MAX) * nb2));
}

class Animal {
protected:
    std::string nom;
    int grangou;
    int lavi;
    int atak;
    int vites;
    int zon_deteksyon;
    bool lachas;
    bool isdead;

public:
    int x;
    int y;

    Animal(std::string name, int degats, int hp, int speed, int zonededetection, int faim) : nom(name), grangou(faim), lavi(hp), atak(degats), vites(speed),zon_deteksyon(zonededetection), isdead(false), x(gennbint(0, 20)), y(gennbint(0, 20)) {}

    void Affichage() { std::cout << nom << ", vie: " << lavi << ", degats: " << atak << ", vitesse: " << vites << ", faim: " << grangou << ", x: " << x << " y: " << y; }

    void Degats(int dammagesdeal) {
        lavi -= dammagesdeal;
        if (lavi < 1)
        {
            isdead = true;
        }
    }

    void Chasse(Animal& cible) {
        if (!isdead)
        {
            if ((abs(x) + abs(y)) - (abs(cible.x) + abs(cible.y)) <= zon_deteksyon)
            {
                cible.lachas = true;
                if (cible.x == x && cible.y == y) {
                    cible.Degats(atak);
                }
                else
                {
                    if (cible.x < x)
                    {
                        x--;
                    }
                    else if (cible.x > x)
                    {
                        x++;
                    }
                    if (cible.y < y)
                    {
                        y--;
                    }
                    else if (cible.y > y)
                    {
                        y++;
                    }
                }
            }
            else
            {
                cible.lachas = false;
            }
        }
    }
};

#endif