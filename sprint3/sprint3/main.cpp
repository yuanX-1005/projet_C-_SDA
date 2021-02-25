#include<fstream>
#include<iostream>
#include<iomanip>
#include <cassert>
#include "LabyrintheMb.h"
#include "IndexPositionMb.h"


using namespace std;


int main() {
	Lab lab;
	lab.tab1.nbC = lab.tab2.nbC = 0;
	lab.tab1.nbL = lab.tab2.nbL = 0;
	Position post;
	Pile pile;

	ifstream fichier;
	fichier.open("inSmall.txt", ifstream::in); //Ouverture d'un fichier en lecture

	if (!fichier) {
		cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << endl;
	}
	else {
		initialisation(lab, fichier);
		initialiserPost(lab, post, pile);
		afficherSP2(lab, post, pile);
		detruireDragon(pile);
		destruction(lab);
		cout << endl;
	}
	return 0;
}