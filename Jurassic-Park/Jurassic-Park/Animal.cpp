#include <iostream>
#include "outil.cpp"

class Animal {
protected:
    int grangou;
    int lavi;
    int atak;
    int vites;
    int zon_deteksyon;
    bool lachas;
    bool li_manje;
public:
    int x;
    int y;
    bool isdead;

    Animal(int degats, int hp, int speed, int zonededetection, int faim) : grangou(faim), lavi(hp), atak(degats), vites(speed),zon_deteksyon(zonededetection), x(gennbint(0, 1000)), y(gennbint(0, 1000)) {}

    void Affichage() { std::cout << "vie: " << lavi << ", degats: " << atak << ", vitesse: " << vites << ", faim: " << grangou << ", x: " << x << " y: " << y << "\n"; }

    void Degats(int dammagesdeal) {
        lavi -= dammagesdeal;
        if (lavi < 1)
        {
            isdead = true;
        }
    }

    void deplacement() {
        x = x + (gennbint(-vites, vites));
        y = y + (gennbint(-vites, vites));
    }
    void manger(int nuritur) {
        li_manje = true;
        grangou++;
        nuritur--;
    }

    void Chasse(Animal& cible) {
        if (!isdead)
        {
            if ((abs(x) + abs(y)) - (abs(cible.x) + abs(cible.y)) <= zon_deteksyon)
            {
                if ((abs(x) + abs(y)) - (abs(cible.x) + abs(cible.y)) <= cible.zon_deteksyon)
                {
                    cible.lachas = true;
                }
                if (cible.x == x && cible.y == y)
                {
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
