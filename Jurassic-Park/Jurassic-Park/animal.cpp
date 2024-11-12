#include "classe_herbivore_carnivore_base"
#include <iostream>

class Personnage {
private:

    string regime;
    int faim;
    int hp;
    bool estChasse;
    bool chasse;
public:
    Personnage(string regime, int hp, int faim :regime(regime), faim(faim), hp(hp) {}

    void baissefaim() {
        while (0 < faim) {
            faim = faim - 5;
        }
    }

    void escape()
    {
        while (estChasse)
        {

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