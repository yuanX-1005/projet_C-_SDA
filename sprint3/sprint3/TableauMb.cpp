#include<fstream>
#include<iostream>
#include<iomanip>
#include <cassert>
#include"TableauMb.h"
using namespace std;
void initialiser(Lab& lab) {
	int nbL, nbC;
	nbC = lab.tab1.nbC;
	nbL = lab.tab1.nbL;
	lab.tab1.tab = new Item * [nbL];
	for (int i = 0; i < nbL; ++i) {
		lab.tab1.tab[i] = new Item[nbC];
	}
	lab.tab2.tab = new Item * [nbL];
	for (int i = 0; i < nbL; ++i) {
		lab.tab2.tab[i] = new Item[nbC];
	}
}

void detruire(Lab& lab) {
	for (unsigned int i = 0; i < lab.tab1.nbL; ++i) {
		delete[]lab.tab1.tab[i];
		lab.tab1.tab[i] = NULL;
	}
	delete[]lab.tab1.tab;
	lab.tab1.tab = NULL;
	for (unsigned int i = 0; i < lab.tab1.nbL; ++i) {
		delete[]lab.tab2.tab[i];
		lab.tab2.tab[i] = NULL;
	}
	delete[]lab.tab2.tab;
	lab.tab2.tab = NULL;
}