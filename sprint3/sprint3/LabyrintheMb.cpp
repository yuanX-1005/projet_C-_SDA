#include<fstream>
#include<iostream>
#include<iomanip>
#include"LabyrintheMb.h"
using namespace std;

#define Face 2


void initialisation(Lab& lab, std::ifstream& fichier) {
	int nbL;
	int nbC;
	//Tout est prêt pour la lecture.
	fichier >> lab.tab1.nbC;
	fichier >> lab.tab1.nbL;
	lab.tab2.nbC = lab.tab1.nbC;
	lab.tab2.nbL = lab.tab1.nbL;
	nbL = lab.tab1.nbL;
	nbC = lab.tab1.nbC;
	initialiser(lab);
	for (int j = 0; j < nbL; j++) {
		for (int i = 0; i < nbC; i++) {
			fichier >> lab.tab1.tab[j][i];
		}
	}
	for (int j = 0; j < nbL; j++) {
		for (int i = 0; i < nbC; i++) {
			fichier >> lab.tab2.tab[j][i];
		}
	}
	fichier.close();
}

void afficherSP1(const Lab& lab) {
	cout << lab.tab1.nbC << " " << lab.tab1.nbL << endl;
	for (unsigned int j = 0; j < lab.tab1.nbL; j++) {
		for (unsigned int i = 0; i < lab.tab1.nbC; i++) {
			cout << lab.tab1.tab[j][i];
		}
		cout << endl;
	}
	cout << endl;
	for (unsigned int j = 0; j < lab.tab1.nbL; j++) {
		for (unsigned int i = 0; i < lab.tab1.nbC; i++) {
			cout << lab.tab2.tab[j][i];
		}
		cout << endl;
	}
	cout << endl;
}

void afficherSP2(Lab& lab, Position& p, Pile& pile) {

	while (!EstVide(pile) && (p.z == Face - 1 && lab.tab1.tab[p.x][p.y] != 'P') || (p.z == Face && lab.tab2.tab[p.x][p.y] != 'P')) {
		if (p.z == Face - 1 && lab.tab1.tab[p.x][p.y] != 'P') {
			p = sommet(pile);
			depiler(pile);
		}
		else {
			if (p.z == Face && lab.tab2.tab[p.x][p.y] != 'P') {
				p = sommet(pile);
				depiler(pile);
			}
		}
		if (p.z == Face - 1 && lab.tab1.tab[p.x][p.y] != 'P') {
			MouvementDragon(lab, p, pile);
			lab.tab1.tab[p.x][p.y] = 'V';
			/*afficherSP1(lab);*/
		}
		else {
			if (p.z == Face && lab.tab2.tab[p.x][p.y] != 'P') {
				MouvementDragon(lab, p, pile);
				lab.tab2.tab[p.x][p.y] = 'V';
				/*afficherSP1(lab);*/
			}
		}
	}

	if (p.z == Face - 1 && lab.tab1.tab[p.x][p.y] == 'P') {
		lab.tab1.tab[p.x][p.y] = 'V';
		afficherSP1(lab);
	}
	if (p.z == Face && lab.tab2.tab[p.x][p.y] == 'P') {
		lab.tab2.tab[p.x][p.y] = 'V';
		afficherSP1(lab);
	}
}


void destruction(Lab& lab) {
	void detruire(Lab & lab);
}