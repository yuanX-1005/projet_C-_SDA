#ifndef _Pile_
#define _Pile_
#include "Position.h"

struct Pile {
	unsigned int capacite;
	Position* tab;
	int sommet;
};

void initialiserPile(Pile& p, unsigned int c);
void detruire(Pile p);
bool EstPleine(const Pile& p);
bool EstVide(const Pile& p);
Position sommet(const Pile& p);
void empiler(Pile& p, Position& it);
void depiler(Pile& p);

#endif