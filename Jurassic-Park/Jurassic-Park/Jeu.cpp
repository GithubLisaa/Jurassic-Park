#include "diplodocus.cpp"
#include <iostream>
#include <vector>

class Jeu
{
private:
	std::vector<Animal*> animaux;
public:
	void lancerlejeu(int nbanimaux) {
		for (int i = 0; i < nbanimaux; i++)
		{
			int type = gennbint(1, 4);
			switch (type)
			{
			case 1:
				animaux.push_back(new Diplodocus());
				break;
			case 2:
				animaux.push_back(new Diplodocus());
				break;
			case 3:
				animaux.push_back(new Diplodocus());
				break;
			case 4:
				animaux.push_back(new Diplodocus());
				break;
			}
		}
	}
};
