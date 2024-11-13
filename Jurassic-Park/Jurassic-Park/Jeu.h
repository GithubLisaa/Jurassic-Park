#ifndef JEU_H
#define JEU_H

#include <iostream>
#include <vector>

std::vector<int> vektè;
int tablo_gwosè = 0;

void montre_tab_la() {
	for (int y = 0; y < tablo_gwosè; y++)
	{
		for (int x = 0; x < tablo_gwosè; x++) {
			for (size_t i = 0; i < vektè.size(); i++)
			{
				if (vektè[i] == y, x)
				{
					std::cout << "D";
				}
			}
		}
	}
}

#endif