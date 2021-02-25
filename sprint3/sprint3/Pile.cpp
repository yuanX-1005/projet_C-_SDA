#include<fstream>
#include<iostream>
#include<iomanip>
#include <cassert>
#include"Pile.h"

using namespace std;

void initialiserPile(Pile& pile, unsigned int c) {
	pile.capacite = c;
	pile.tab = new Position[c];
	pile.sommet = -1;
}

void detruire(Pile pile) {
	delete[]pile.tab;
	pile.tab = NULL;
}
bool EstPleine(const Pile& pile) {
	return (pile.sommet == (pile.capacite - 1));
}

bool EstVide(const Pile& pile) {
	return (pile.sommet == -1);
}

Position sommet(const Pile& pile) {
	assert(!EstVide(pile));
	return pile.tab[pile.sommet];
}

void empiler(Pile& pile, Position& it) {
	assert(!EstPleine(pile));
	pile.sommet++;
	pile.tab[pile.sommet] = it;
}

void depiler(Pile& pile) {
	assert(!EstVide(pile));
	pile.sommet--;
}