#ifndef JEU_H
#define JEU_H

#include <iostream>
#include <vector>

std::vector<int> vekt�;
int tablo_gwos� = 0;

void montre_tab_la() {
	for (int y = 0; y < tablo_gwos�; y++)
	{
		for (int x = 0; x < tablo_gwos�; x++) {
			for (size_t i = 0; i < vekt�.size(); i++)
			{
				if (vekt�[i] == y, x)
				{
					std::cout << "D";
				}
			}
		}
	}
}

#endif