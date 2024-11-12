#include <iostream>

class Personnage {
private:

    string regime;
    int faim;
    int hp;
    bool estChasse;
    bool chasse;
public:
    dyno(string regime, int hp, int faim :regime(regime), faim(faim), hp(hp) {}

    void baissefaim() {
        while (0 < faim) {
            faim = faim - 5;
        }
    }
};


int main()
{
    bool sim = true;
    while (sim = true) {
        std::cout "wip";


    }

}