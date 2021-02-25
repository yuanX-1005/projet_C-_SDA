#include<fstream>
#include<iostream>
#include<iomanip>
#include <cassert>
#include "IndexPositionMb.h"
//#include "Pile.h"

using namespace std;
#define Face 2

void initialiserPost(Lab& lab, Position& p, Pile& pile){
	initialiserPile(pile, lab.tab1.nbC * lab.tab1.nbL * Face);
	for (unsigned int i = 0; i < lab.tab1.nbL; i++) {
		for (unsigned int j = 0; j < lab.tab1.nbC; j++) {
			if (lab.tab1.tab[i][j] == 'D') {
				p.x = i;
				p.y = j;
				p.z = Face - 1;
			}
			if (lab.tab2.tab[i][j] == 'D') {
				p.x = i;
				p.y = j;
				p.z = Face;
			}
		}
	}
	empiler(pile, p);
}
