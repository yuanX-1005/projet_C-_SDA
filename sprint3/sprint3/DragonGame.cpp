#include<fstream>
#include<iostream>
#include<iomanip>
#include"DragonGame.h"
using namespace std;
#define nbCase 8
#define Face 2

void MouvementDragon(Lab& lab, Position& p, Pile& pile) {
	Position Cases[nbCase];
	unsigned int k = 0;

	if (k == 0) {
		if (p.z == Face - 1) {
			if (p.x == 0 && p.y == 0) {
				if (lab.tab2.tab[lab.tab1.nbL - 1][lab.tab1.nbC - 1] == '+' ||
					lab.tab2.tab[lab.tab1.nbL - 1][lab.tab1.nbC - 1] == 'P') {
					Cases[k].x = lab.tab1.nbL - 1;
					Cases[k].y = lab.tab1.nbC - 1;
					Cases[k].z = Face;
					//empiler(pile, Cases[k]);
					k++;
				}
				if (lab.tab2.tab[lab.tab1.nbL - 2][lab.tab1.nbC - 1] == '+'
					|| lab.tab2.tab[lab.tab1.nbL - 2][lab.tab1.nbC - 1] == 'P') {
					Cases[k].x = lab.tab1.nbL - 2;
					Cases[k].y = lab.tab1.nbC - 1;
					Cases[k].z = Face;
					//empiler(pile, Cases[k]);
					k++;
				}
				if (lab.tab1.tab[p.x + 1][p.y] == '+'
					|| lab.tab1.tab[p.x + 1][p.y] == 'P') {
					Cases[k].x = p.x + 1;
					Cases[k].y = p.y;
					Cases[k].z = p.z;
					//empiler(pile, p);
					k++;
				}
				if (lab.tab1.tab[p.x + 1][p.y + 1] == '+'
					|| lab.tab1.tab[p.x + 1][p.y + 1] == 'P') {
					Cases[k].x = p.x + 1;
					Cases[k].y = p.y + 1;
					Cases[k].z = p.z;
					//empiler(pile, p);
					k++;
				}
				if (lab.tab1.tab[p.x][p.y + 1] == '+' ||
					lab.tab1.tab[p.x][p.y + 1] == 'P') {
					Cases[k].x = p.x;
					Cases[k].y = p.y + 1;
					Cases[k].z = p.z;
					//empiler(pile, p);
					k++;
				}
			}
			if (p.x == 0 && p.y == lab.tab1.nbC - 1) {
				if (lab.tab1.tab[p.x][p.y - 1] == '+' ||
					lab.tab1.tab[p.x][p.y - 1] == 'P') {
					Cases[k].x = p.x;
					Cases[k].y = p.y - 1;
					Cases[k].z = p.z;
					/*empiler(pile, Cases[k]);*/
					k++;
				}
				if (lab.tab1.tab[p.x + 1][p.y - 1] == '+' ||
					lab.tab1.tab[p.x + 1][p.y - 1] == 'P') {
					Cases[k].x = p.x + 1;
					Cases[k].y = p.y - 1;
					Cases[k].z = p.z;
					/*empiler(pile, Cases[k]);*/
					k++;
				}
				if (lab.tab1.tab[p.x + 1][p.y] == '+' ||
					lab.tab1.tab[p.x + 1][p.y] == 'P') {
					Cases[k].x = p.x + 1;
					Cases[k].y = p.y;
					Cases[k].z = p.z;
					//empiler(pile, p);
					k++;
				}
				if (lab.tab2.tab[lab.tab1.nbL - 2][0] == '+' ||
					lab.tab2.tab[lab.tab1.nbL - 2][0] == 'P') {
					Cases[k].x = lab.tab1.nbL - 2;
					Cases[k].y = 0;
					Cases[k].z = Face;
					//empiler(pile, Cases[k]);
					k++;
				}
				if (lab.tab2.tab[lab.tab1.nbL - 1][0] == '+' ||
					lab.tab2.tab[lab.tab1.nbL - 1][0] == 'P') {
					Cases[k].x = lab.tab1.nbL - 1;
					Cases[k].y = 0;
					Cases[k].z = Face;
					//empiler(pile, Cases[k]);
					k++;
				}
			}
			if (p.x == lab.tab1.nbL - 1 && p.y == 0) {
				if (lab.tab2.tab[0][lab.tab1.nbC - 1] == '+' ||
					lab.tab2.tab[0][lab.tab1.nbC - 1] == 'P') {
					Cases[k].x = 0;
					Cases[k].y = lab.tab1.nbC - 1;
					Cases[k].z = Face;
					//empiler(pile, Cases[k]);
					k++;
				}if (lab.tab1.tab[p.x][p.y + 1] == '+' ||
					lab.tab1.tab[p.x][p.y + 1] == 'P') {
					Cases[k].x = p.x;
					Cases[k].y = p.y + 1;
					Cases[k].z = p.z;
					//empiler(pile, p);
					k++;
				}
				if (lab.tab1.tab[p.x - 1][p.y + 1] == '+' ||
					lab.tab1.tab[p.x - 1][p.y + 1] == 'P') {
					Cases[k].x = p.x - 1;
					Cases[k].y = p.y + 1;
					Cases[k].z = p.z;
					//empiler(pile, p);
					k++;
				}
				if (lab.tab1.tab[p.x - 1][p.y] == '+' ||
					lab.tab1.tab[p.x - 1][p.y] == 'P') {
					Cases[k].x = p.x - 1;
					Cases[k].y = p.y;
					Cases[k].z = p.z;
					//empiler(pile, p);
					k++;
				}
				if (lab.tab2.tab[1][lab.tab1.nbC - 1] == '+' ||
					lab.tab2.tab[1][lab.tab1.nbC - 1] == 'P') {
					Cases[k].x = 1;
					Cases[k].y = lab.tab1.nbC - 1;
					Cases[k].z = Face;
					//empiler(pile, Cases[k]);
					k++;
				}
			}
			if (p.x == lab.tab1.nbL - 1 && p.y == lab.tab1.nbC - 1) {
				if (lab.tab1.tab[p.x][p.y - 1] == '+' ||
					lab.tab1.tab[p.x][p.y - 1] == 'P') {
					Cases[k].x = p.x;
					Cases[k].y = p.y - 1;
					Cases[k].z = p.z;
					/*empiler(pile, Cases[k]);*/
					k++;
				}
				if (lab.tab2.tab[0][0] == '+' ||
					lab.tab2.tab[0][0] == 'P') {
					Cases[k].x = 0;
					Cases[k].y = 0;
					Cases[k].z = Face;
					//empiler(pile, Cases[k]);
					k++;
				}
				if (lab.tab2.tab[1][0] == '+' ||
					lab.tab2.tab[1][0] == 'P') {
					Cases[k].x = 1;
					Cases[k].y = 0;
					Cases[k].z = Face;
					//empiler(pile, Cases[k]);
					k++;
				}
				if (lab.tab1.tab[p.x - 1][p.y] == '+' ||
					lab.tab1.tab[p.x - 1][p.y] == 'P') {
					Cases[k].x = p.x - 1;
					Cases[k].y = p.y;
					Cases[k].z = p.z;
					//empiler(pile, p);
					k++;
				}
				if (lab.tab1.tab[p.x - 1][p.y - 1] == '+' ||
					lab.tab1.tab[p.x - 1][p.y - 1] == 'P') {
					Cases[k].x = p.x + 1;
					Cases[k].y = p.y - 1;
					Cases[k].z = p.z;
					//empiler(pile, p);
					k++;
				}
			}
		}
		if (p.z == Face) {
			if (p.x == 0 && p.y == 0) {
				if (lab.tab1.tab[lab.tab1.nbL - 1][lab.tab1.nbC - 1] == '+' ||
					lab.tab1.tab[lab.tab1.nbL - 1][lab.tab1.nbC - 1] == 'P') {
					Cases[k].x = lab.tab1.nbL - 1;
					Cases[k].y = lab.tab1.nbC - 1;
					Cases[k].z = Face - 1;
					//empiler(pile, Cases[k]);
					k++;
				}
				if (lab.tab1.tab[lab.tab1.nbL - 2][lab.tab1.nbC - 1] == '+' ||
					lab.tab1.tab[lab.tab1.nbL - 2][lab.tab1.nbC - 1] == 'P') {
					Cases[k].x = lab.tab1.nbL - 2;
					Cases[k].y = lab.tab1.nbC - 1;
					Cases[k].z = Face - 1;
					//empiler(pile, Cases[k]);
					k++;
				}
				if (lab.tab2.tab[p.x + 1][p.y] == '+' ||
					lab.tab2.tab[p.x + 1][p.y] == 'P') {
					Cases[k].x = p.x + 1;
					Cases[k].y = p.y;
					Cases[k].z = p.z;
					//empiler(pile, p);
					k++;
				}
				if (lab.tab2.tab[p.x + 1][p.y + 1] == '+' ||
					lab.tab2.tab[p.x + 1][p.y + 1] == 'P') {
					Cases[k].x = p.x + 1;
					Cases[k].y = p.y + 1;
					Cases[k].z = p.z;
					//empiler(pile, p);
					k++;
				}
				if (lab.tab2.tab[p.x][p.y + 1] == '+' ||
					lab.tab2.tab[p.x][p.y + 1] == 'P') {
					Cases[k].x = p.x;
					Cases[k].y = p.y + 1;
					Cases[k].z = p.z;
					//empiler(pile, p);
					k++;
				}
			}
			if (p.x == 0 && p.y == lab.tab1.nbC - 1) {
				if (lab.tab2.tab[p.x][p.y - 1] == '+' ||
					lab.tab2.tab[p.x][p.y - 1] == 'P') {
					Cases[k].x = p.x;
					Cases[k].y = p.y - 1;
					Cases[k].z = p.z;
					/*empiler(pile, Cases[k]);*/
					k++;
				}
				if (lab.tab2.tab[p.x + 1][p.y - 1] == '+' ||
					lab.tab2.tab[p.x + 1][p.y - 1] == 'P') {
					Cases[k].x = p.x + 1;
					Cases[k].y = p.y - 1;
					Cases[k].z = p.z;
					/*empiler(pile, Cases[k]);*/
					k++;
				}
				if (lab.tab2.tab[p.x + 1][p.y] == '+' ||
					lab.tab2.tab[p.x + 1][p.y] == 'P') {
					Cases[k].x = p.x + 1;
					Cases[k].y = p.y;
					Cases[k].z = p.z;
					//empiler(pile, p);
					k++;
				}
				if (lab.tab1.tab[lab.tab1.nbL - 2][0] == '+' ||
					lab.tab1.tab[lab.tab1.nbL - 2][0] == 'P') {
					Cases[k].x = lab.tab1.nbL - 2;
					Cases[k].y = 0;
					Cases[k].z = Face - 1;
					//empiler(pile, Cases[k]);
					k++;
				}
				if (lab.tab1.tab[lab.tab1.nbL - 1][0] == '+' ||
					lab.tab1.tab[lab.tab1.nbL - 1][0] == 'P') {
					Cases[k].x = lab.tab1.nbL - 1;
					Cases[k].y = 0;
					Cases[k].z = Face - 1;
					//empiler(pile, Cases[k]);
					k++;
				}
			}
			if (p.x == lab.tab1.nbL - 1 && p.y == 0) {
				if (lab.tab1.tab[0][lab.tab1.nbC - 1] == '+' ||
					lab.tab1.tab[0][lab.tab1.nbC - 1] == 'P') {
					Cases[k].x = 0;
					Cases[k].y = lab.tab1.nbC - 1;
					Cases[k].z = Face - 1;
					//empiler(pile, Cases[k]);
					k++;
				}if (lab.tab2.tab[p.x][p.y + 1] == '+' ||
					lab.tab2.tab[p.x][p.y + 1] == 'P') {
					Cases[k].x = p.x;
					Cases[k].y = p.y + 1;
					Cases[k].z = p.z;
					//empiler(pile, p);
					k++;
				}
				if (lab.tab2.tab[p.x - 1][p.y + 1] == '+' ||
					lab.tab2.tab[p.x - 1][p.y + 1] == 'P') {
					Cases[k].x = p.x - 1;
					Cases[k].y = p.y + 1;
					Cases[k].z = p.z;
					//empiler(pile, p);
					k++;
				}
				if (lab.tab2.tab[p.x - 1][p.y] == '+' ||
					lab.tab2.tab[p.x - 1][p.y] == 'P') {
					Cases[k].x = p.x - 1;
					Cases[k].y = p.y;
					Cases[k].z = p.z;
					//empiler(pile, p);
					k++;
				}
				if (lab.tab1.tab[1][lab.tab1.nbC - 1] == '+' ||
					lab.tab1.tab[1][lab.tab1.nbC - 1] == 'P') {
					Cases[k].x = 1;
					Cases[k].y = lab.tab1.nbC - 1;
					Cases[k].z = Face - 1;
					/*	empiler(pile, Cases[k]);*/
					k++;
				}
			}
			if (p.x == lab.tab1.nbL - 1 && p.y == lab.tab1.nbC - 1) {
				if (lab.tab2.tab[p.x][p.y - 1] == '+' ||
					lab.tab2.tab[p.x][p.y - 1] == 'P') {
					Cases[k].x = p.x;
					Cases[k].y = p.y - 1;
					Cases[k].z = p.z;
					/*empiler(pile, Cases[k]);*/
					k++;
				}
				if (lab.tab1.tab[0][0] == '+' ||
					lab.tab1.tab[0][0] == 'P') {
					Cases[k].x = 0;
					Cases[k].y = 0;
					Cases[k].z = Face - 1;
					//empiler(pile, Cases[k]);
					k++;
				}
				if (lab.tab1.tab[1][0] == '+' ||
					lab.tab1.tab[1][0] == 'P') {
					Cases[k].x = 1;
					Cases[k].y = 0;
					Cases[k].z = Face - 1;
					//empiler(pile, Cases[k]);
					k++;
				}
				if (lab.tab2.tab[p.x - 1][p.y] == '+' ||
					lab.tab2.tab[p.x - 1][p.y] == 'P') {
					Cases[k].x = p.x - 1;
					Cases[k].y = p.y;
					Cases[k].z = p.z;
					//empiler(pile, p);
					k++;
				}
				if (lab.tab2.tab[p.x - 1][p.y - 1] == '+' ||
					lab.tab2.tab[p.x - 1][p.y - 1] == 'P') {
					Cases[k].x = p.x + 1;
					Cases[k].y = p.y - 1;
					Cases[k].z = p.z;
					//empiler(pile, p);
					k++;
				}
			}
		}
	}
	if (k == 0) {
		if (p.z == Face - 1) {
			if (p.x == 0) {
				if (lab.tab1.tab[p.x + 1][p.y - 1] == '+' ||
					lab.tab1.tab[p.x + 1][p.y - 1] == 'P') {
					Cases[k].x = p.x + 1;
					Cases[k].y = p.y - 1;
					Cases[k].z = p.z;
					//empiler(pile, p);
					k++;
				}
				if (lab.tab1.tab[p.x + 1][p.y] == '+' ||
					lab.tab1.tab[p.x + 1][p.y] == 'P') {
					Cases[k].x = p.x + 1;
					Cases[k].y = p.y;
					Cases[k].z = p.z;
					//empiler(pile, p);
					k++;
				}
				if (lab.tab1.tab[p.x + 1][p.y + 1] == '+' ||
					lab.tab1.tab[p.x + 1][p.y + 1] == 'P') {
					Cases[k].x = p.x + 1;
					Cases[k].y = p.y + 1;
					Cases[k].z = p.z;
					//empiler(pile, p);
					k++;
				}
			}
			if (p.x == lab.tab1.nbL - 1) {
				if (lab.tab1.tab[p.x - 1][p.y + 1] == '+' ||
					lab.tab1.tab[p.x - 1][p.y + 1] == 'P') {
					Cases[k].x = p.x - 1;
					Cases[k].y = p.y + 1;
					Cases[k].z = p.z;
					//empiler(pile, p);
					k++;
				}
				if (lab.tab1.tab[p.x - 1][p.y] == '+' ||
					lab.tab1.tab[p.x - 1][p.y] == 'P') {
					Cases[k].x = p.x - 1;
					Cases[k].y = p.y;
					Cases[k].z = p.z;
					//empiler(pile, p);
					k++;
				}
				if (lab.tab1.tab[p.x - 1][p.y - 1] == '+' ||
					lab.tab1.tab[p.x - 1][p.y - 1] == 'P') {
					Cases[k].x = p.x - 1;
					Cases[k].y = p.y - 1;
					Cases[k].z = p.z;
					//empiler(pile, p);
					k++;
				}
			}
		}
		if (p.z == Face) {
			if (p.x == 0) {
				if (lab.tab2.tab[p.x + 1][p.y - 1] == '+' ||
					lab.tab2.tab[p.x + 1][p.y - 1] == 'P') {
					Cases[k].x = p.x + 1;
					Cases[k].y = p.y - 1;
					Cases[k].z = p.z;
					//empiler(pile, p);
					k++;
				}
				if (lab.tab2.tab[p.x + 1][p.y] == '+' ||
					lab.tab2.tab[p.x + 1][p.y] == 'P') {
					Cases[k].x = p.x + 1;
					Cases[k].y = p.y;
					Cases[k].z = p.z;
					//empiler(pile, p);
					k++;
				}
				if (lab.tab2.tab[p.x + 1][p.y + 1] == '+' ||
					lab.tab2.tab[p.x + 1][p.y + 1] == 'P') {
					Cases[k].x = p.x + 1;
					Cases[k].y = p.y + 1;
					Cases[k].z = p.z;
					//empiler(pile, p);
					k++;
				}
			}
			if (p.x == lab.tab1.nbL - 1) {
				if (lab.tab2.tab[p.x - 1][p.y + 1] == '+' ||
					lab.tab2.tab[p.x - 1][p.y + 1] == 'P') {
					Cases[k].x = p.x - 1;
					Cases[k].y = p.y + 1;
					Cases[k].z = p.z;
					//empiler(pile, p);
					k++;
				}
				if (lab.tab2.tab[p.x - 1][p.y] == '+' ||
					lab.tab2.tab[p.x - 1][p.y] == 'P') {
					Cases[k].x = p.x - 1;
					Cases[k].y = p.y;
					Cases[k].z = p.z;
					//empiler(pile, p);
					k++;
				}
				if (lab.tab2.tab[p.x - 1][p.y - 1] == '+' ||
					lab.tab2.tab[p.x - 1][p.y - 1] == 'P') {
					Cases[k].x = p.x - 1;
					Cases[k].y = p.y - 1;
					Cases[k].z = p.z;
					//empiler(pile, p);
					k++;
				}
			}
		}
	}
	if (k == 0) {
		if (p.z == Face - 1) {
			if (p.y == 0) {
				for (unsigned int i = 1; i < lab.tab1.nbL - 1; i++) {
					if (p.x == i) {
						if (lab.tab2.tab[lab.tab1.nbL - 1 - i][lab.tab1.nbC - 1] == '+' ||
							lab.tab2.tab[lab.tab1.nbL - 1 - i][lab.tab1.nbC - 1] == 'P') {
							Cases[k].x = lab.tab1.nbL - 1 - i;
							Cases[k].y = lab.tab1.nbC - 1;
							Cases[k].z = Face;
							/*empiler(pile, Cases[k]);*/
							k++;
						}
						if (lab.tab2.tab[lab.tab1.nbL - 2 - i][lab.tab1.nbC - 1] == '+' ||
							lab.tab2.tab[lab.tab1.nbL - 2 - i][lab.tab1.nbC - 1] == 'P') {
							Cases[k].x = lab.tab1.nbL - 2 - i;
							Cases[k].y = lab.tab1.nbC - 1;
							Cases[k].z = Face;
							/*empiler(pile, p);*/
							k++;
						}
						if (lab.tab1.tab[p.x + 1][p.y] == '+' ||
							lab.tab1.tab[p.x + 1][p.y] == 'P') {
							Cases[k].x = p.x + 1;
							Cases[k].y = p.y;
							Cases[k].z = p.z;
							//empiler(pile, p);
							k++;
						}
						if (lab.tab1.tab[p.x + 1][p.y + 1] == '+' ||
							lab.tab1.tab[p.x + 1][p.y + 1] == 'P') {
							Cases[k].x = p.x + 1;
							Cases[k].y = p.y + 1;
							Cases[k].z = p.z;
							//empiler(pile, p);
							k++;
						}
						if (lab.tab1.tab[p.x][p.y + 1] == '+' ||
							lab.tab1.tab[p.x][p.y + 1] == 'P') {
							Cases[k].x = p.x;
							Cases[k].y = p.y + 1;
							Cases[k].z = p.z;
							//empiler(pile, p);
							k++;
						}
						if (lab.tab1.tab[p.x - 1][p.y + 1] == '+' ||
							lab.tab1.tab[p.x - 1][p.y + 1] == 'P') {
							Cases[k].x = p.x - 1;
							Cases[k].y = p.y + 1;
							Cases[k].z = p.z;
							//empiler(pile, p);
							k++;
						}
						if (lab.tab1.tab[p.x - 1][p.y] == '+' ||
							lab.tab1.tab[p.x - 1][p.y] == 'P') {
							Cases[k].x = p.x - 1;
							Cases[k].y = p.y;
							Cases[k].z = p.z;
							//empiler(pile, p);
							k++;
						}
						if (lab.tab2.tab[lab.tab1.nbL - i][lab.tab1.nbC - 1] == '+' ||
							lab.tab2.tab[lab.tab1.nbL - i][lab.tab1.nbC - 1] == 'P') {
							Cases[k].x = lab.tab1.nbL - i;
							Cases[k].y = lab.tab1.nbC - 1;
							Cases[k].z = Face;
							//empiler(pile, p);
							k++;
						}
					}
				}
			}

			if (p.y == lab.tab1.nbC - 1) {
				for (unsigned int i = 1; i < lab.tab1.nbL - 1; i++) {
					if (p.x == i) {
						if (lab.tab1.tab[p.x][p.y - 1] == '+' ||
							lab.tab1.tab[p.x][p.y - 1] == 'P') {
							Cases[k].x = p.x;
							Cases[k].y = p.y - 1;
							Cases[k].z = p.z;
							//empiler(pile, p);
							k++;
						}
						if (lab.tab1.tab[p.x + 1][p.y - 1] == '+' ||
							lab.tab1.tab[p.x + 1][p.y - 1] == 'P') {
							Cases[k].x = p.x + 1;
							Cases[k].y = p.y - 1;
							Cases[k].z = p.z;
							//empiler(pile, p);
							k++;
						}
						if (lab.tab1.tab[p.x + 1][p.y] == '+' ||
							lab.tab1.tab[p.x + 1][p.y] == 'P') {
							Cases[k].x = p.x + 1;
							Cases[k].y = p.y;
							Cases[k].z = p.z;
							//empiler(pile, p);
							k++;
						}
						if (lab.tab2.tab[lab.tab1.nbL - 2 - i][0] == '+' ||
							lab.tab2.tab[lab.tab1.nbL - 2 - i][0] == 'P') {
							Cases[k].x = lab.tab1.nbL - 2 - i;
							Cases[k].y = 0;
							Cases[k].z = Face;
							/*empiler(pile, p);*/
							k++;
						}
						if (lab.tab2.tab[lab.tab1.nbL - 1 - i][0] == '+' ||
							lab.tab2.tab[lab.tab1.nbL - 1 - i][0] == 'P') {
							Cases[k].x = lab.tab1.nbL - 1 - i;
							Cases[k].y = 0;
							Cases[k].z = Face;
							//empiler(pile, Cases[k]);
							k++;
						}
						if (lab.tab2.tab[lab.tab1.nbL - i][0] == '+' ||
							lab.tab2.tab[lab.tab1.nbL - i][0] == 'P') {
							Cases[k].x = lab.tab1.nbL - i;
							Cases[k].y = 0;
							Cases[k].z = Face;
							//empiler(pile, p);
							k++;
						}
						if (lab.tab1.tab[p.x - 1][p.y] == '+' ||
							lab.tab1.tab[p.x - 1][p.y] == 'P') {
							Cases[k].x = p.x - 1;
							Cases[k].y = p.y;
							Cases[k].z = p.z;
							//empiler(pile, p);
							k++;
						}
						if (lab.tab1.tab[p.x - 1][p.y - 1] == '+' ||
							lab.tab1.tab[p.x - 1][p.y - 1] == 'P') {
							Cases[k].x = p.x - 1;
							Cases[k].y = p.y - 1;
							Cases[k].z = p.z;
							//empiler(pile, p);
							k++;
						}
					}
				}

			}
		}
		if (p.z == Face) {
			if (p.y == 0) {
				for (unsigned int i = 1; i < lab.tab1.nbL - 1; i++) {
					if (p.x == i) {
						if (lab.tab1.tab[lab.tab1.nbL - 1 - i][lab.tab1.nbC - 1] == '+' ||
							lab.tab1.tab[lab.tab1.nbL - 1 - i][lab.tab1.nbC - 1] == 'P') {
							Cases[k].x = lab.tab1.nbL - 1 - i;
							Cases[k].y = lab.tab1.nbC - 1;
							Cases[k].z = Face - 1;
							/*empiler(pile, Cases[k]);*/
							k++;
						}
						if (lab.tab1.tab[lab.tab1.nbL - 2 - i][lab.tab1.nbC - 1] == '+' ||
							lab.tab1.tab[lab.tab1.nbL - 2 - i][lab.tab1.nbC - 1] == 'P') {
							Cases[k].x = lab.tab1.nbL - 2 - i;
							Cases[k].y = lab.tab1.nbC - 1;
							Cases[k].z = Face - 1;
							/*empiler(pile, p);*/
							k++;
						}
						if (lab.tab2.tab[p.x + 1][p.y] == '+' ||
							lab.tab2.tab[p.x + 1][p.y] == 'P') {
							Cases[k].x = p.x + 1;
							Cases[k].y = p.y;
							Cases[k].z = p.z;
							//empiler(pile, p);
							k++;
						}
						if (lab.tab2.tab[p.x + 1][p.y + 1] == '+' ||
							lab.tab2.tab[p.x + 1][p.y + 1] == 'P') {
							Cases[k].x = p.x + 1;
							Cases[k].y = p.y + 1;
							Cases[k].z = p.z;
							//empiler(pile, p);
							k++;
						}
						if (lab.tab2.tab[p.x][p.y + 1] == '+' ||
							lab.tab2.tab[p.x][p.y + 1] == 'P') {
							Cases[k].x = p.x;
							Cases[k].y = p.y + 1;
							Cases[k].z = p.z;
							//empiler(pile, p);
							k++;
						}
						if (lab.tab2.tab[p.x - 1][p.y + 1] == '+' ||
							lab.tab2.tab[p.x - 1][p.y + 1] == 'P') {
							Cases[k].x = p.x - 1;
							Cases[k].y = p.y + 1;
							Cases[k].z = p.z;
							//empiler(pile, p);
							k++;
						}
						if (lab.tab2.tab[p.x - 1][p.y] == '+' ||
							lab.tab2.tab[p.x - 1][p.y] == 'P') {
							Cases[k].x = p.x - 1;
							Cases[k].y = p.y;
							Cases[k].z = p.z;
							//empiler(pile, p);
							k++;
						}
						if (lab.tab1.tab[lab.tab1.nbL - i][lab.tab1.nbC - 1] == '+' ||
							lab.tab1.tab[lab.tab1.nbL - i][lab.tab1.nbC - 1] == 'P') {
							Cases[k].x = lab.tab1.nbL - i;
							Cases[k].y = lab.tab1.nbC - 1;
							Cases[k].z = Face - 1;
							//empiler(pile, p);
							k++;
						}
					}
				}
			}
			if (p.y == lab.tab1.nbC - 1) {
				for (unsigned int i = 1; i < lab.tab1.nbL - 1; i++) {
					if (p.x == i) {
						if (lab.tab2.tab[p.x][p.y - 1] == '+' ||
							lab.tab2.tab[p.x][p.y - 1] == 'P') {
							Cases[k].x = p.x;
							Cases[k].y = p.y - 1;
							Cases[k].z = p.z;
							//empiler(pile, p);
							k++;
						}
						if (lab.tab2.tab[p.x + 1][p.y - 1] == '+' ||
							lab.tab2.tab[p.x + 1][p.y - 1] == 'P') {
							Cases[k].x = p.x + 1;
							Cases[k].y = p.y - 1;
							Cases[k].z = p.z;
							//empiler(pile, p);
							k++;
						}
						if (lab.tab2.tab[p.x + 1][p.y] == '+' ||
							lab.tab2.tab[p.x + 1][p.y] == 'P') {
							Cases[k].x = p.x + 1;
							Cases[k].y = p.y;
							Cases[k].z = p.z;
							//empiler(pile, p);
							k++;
						}
						if (lab.tab1.tab[lab.tab1.nbL - 2 - i][0] == '+' ||
							lab.tab1.tab[lab.tab1.nbL - 2 - i][0] == 'P') {
							Cases[k].x = lab.tab1.nbL - 2 - i;
							Cases[k].y = 0;
							Cases[k].z = Face - 1;
							/*empiler(pile, p);*/
							k++;
						}
						if (lab.tab1.tab[lab.tab1.nbL - 1 - i][0] == '+' ||
							lab.tab1.tab[lab.tab1.nbL - 1 - i][0] == 'P') {
							Cases[k].x = lab.tab1.nbL - 1 - i;
							Cases[k].y = 0;
							Cases[k].z = Face - 1;
							//empiler(pile, Cases[k]);
							k++;
						}
						if (lab.tab1.tab[lab.tab1.nbL - i][0] == '+' ||
							lab.tab1.tab[lab.tab1.nbL - i][0] == 'P') {
							Cases[k].x = lab.tab1.nbL - i;
							Cases[k].y = 0;
							Cases[k].z = Face - 1;
							//empiler(pile, p);
							k++;
						}
						if (lab.tab2.tab[p.x - 1][p.y] == '+' ||
							lab.tab2.tab[p.x - 1][p.y] == 'P') {
							Cases[k].x = p.x - 1;
							Cases[k].y = p.y;
							Cases[k].z = p.z;
							//empiler(pile, p);
							k++;
						}
						if (lab.tab2.tab[p.x - 1][p.y - 1] == '+' ||
							lab.tab2.tab[p.x - 1][p.y - 1] == 'P') {
							Cases[k].x = p.x - 1;
							Cases[k].y = p.y - 1;
							Cases[k].z = p.z;
							//empiler(pile, p);
							k++;
						}
					}
				}
			}
		}
	}
	if (k == 0) {
		if (p.z == Face - 1) {
			if (lab.tab1.tab[p.x][p.y - 1] == '+' ||
				lab.tab1.tab[p.x][p.y - 1] == 'P') {
				Cases[k].x = p.x;
				Cases[k].y = p.y - 1;
				Cases[k].z = p.z;
				/*empiler(pile, Cases[k]);*/
				k++;
			}
			if (lab.tab1.tab[p.x + 1][p.y - 1] == '+' ||
				lab.tab1.tab[p.x + 1][p.y - 1] == 'P') {
				Cases[k].x = p.x + 1;
				Cases[k].y = p.y - 1;
				Cases[k].z = p.z;
				/*empiler(pile, Cases[k]);*/
				k++;
			}
			if (lab.tab1.tab[p.x + 1][p.y] == '+' ||
				lab.tab1.tab[p.x + 1][p.y] == 'P') {
				Cases[k].x = p.x + 1;
				Cases[k].y = p.y;
				Cases[k].z = p.z;
				//empiler(pile, p);
				k++;
			}
			if (lab.tab1.tab[p.x + 1][p.y + 1] == '+' ||
				lab.tab1.tab[p.x + 1][p.y + 1] == 'P') {
				Cases[k].x = p.x + 1;
				Cases[k].y = p.y + 1;
				Cases[k].z = p.z;
				//empiler(pile, p);
				k++;
			}
			if (lab.tab1.tab[p.x][p.y + 1] == '+' ||
				lab.tab1.tab[p.x][p.y + 1] == 'P') {
				Cases[k].x = p.x;
				Cases[k].y = p.y + 1;
				Cases[k].z = p.z;
				//empiler(pile, p);
				k++;
			}
			if (lab.tab1.tab[p.x - 1][p.y + 1] == '+' ||
				lab.tab1.tab[p.x - 1][p.y + 1] == 'P') {
				Cases[k].x = p.x - 1;
				Cases[k].y = p.y + 1;
				Cases[k].z = p.z;
				//empiler(pile, p);
				k++;
			}
			if (lab.tab1.tab[p.x - 1][p.y] == '+' ||
				lab.tab1.tab[p.x - 1][p.y] == 'P') {
				Cases[k].x = p.x - 1;
				Cases[k].y = p.y;
				Cases[k].z = p.z;
				//empiler(pile, p);
				k++;
			}
			if (lab.tab1.tab[p.x - 1][p.y - 1] == '+' ||
				lab.tab1.tab[p.x - 1][p.y - 1] == 'P') {
				Cases[k].x = p.x - 1;
				Cases[k].y = p.y - 1;
				Cases[k].z = p.z;
				//empiler(pile, p);
				k++;
			}
		}
		if (p.z == Face) {
			if (lab.tab2.tab[p.x][p.y - 1] == '+' ||
				lab.tab2.tab[p.x][p.y - 1] == 'P') {
				Cases[k].x = p.x;
				Cases[k].y = p.y - 1;
				Cases[k].z = p.z;
				/*empiler(pile, Cases[k]);*/
				k++;
			}
			if (lab.tab2.tab[p.x + 1][p.y - 1] == '+' ||
				lab.tab2.tab[p.x + 1][p.y - 1] == 'P') {
				Cases[k].x = p.x + 1;
				Cases[k].y = p.y - 1;
				Cases[k].z = p.z;
				/*empiler(pile, Cases[k]);*/
				k++;
			}
			if (lab.tab2.tab[p.x + 1][p.y] == '+' ||
				lab.tab2.tab[p.x + 1][p.y] == 'P') {
				Cases[k].x = p.x + 1;
				Cases[k].y = p.y;
				Cases[k].z = p.z;
				//empiler(pile, p);
				k++;
			}
			if (lab.tab2.tab[p.x + 1][p.y + 1] == '+' ||
				lab.tab2.tab[p.x + 1][p.y + 1] == 'P') {
				Cases[k].x = p.x + 1;
				Cases[k].y = p.y + 1;
				Cases[k].z = p.z;
				//empiler(pile, p);
				k++;
			}
			if (lab.tab2.tab[p.x][p.y + 1] == '+' ||
				lab.tab2.tab[p.x][p.y + 1] == 'P') {
				Cases[k].x = p.x;
				Cases[k].y = p.y + 1;
				Cases[k].z = p.z;
				//empiler(pile, p);
				k++;
			}
			if (lab.tab2.tab[p.x - 1][p.y + 1] == '+' ||
				lab.tab2.tab[p.x - 1][p.y + 1] == 'P') {
				Cases[k].x = p.x - 1;
				Cases[k].y = p.y + 1;
				Cases[k].z = p.z;
				//empiler(pile, p);
				k++;
			}
			if (lab.tab2.tab[p.x - 1][p.y] == '+' ||
				lab.tab2.tab[p.x - 1][p.y] == 'P') {
				Cases[k].x = p.x - 1;
				Cases[k].y = p.y;
				Cases[k].z = p.z;
				//empiler(pile, p);
				k++;
			}
			if (lab.tab2.tab[p.x - 1][p.y - 1] == '+' ||
				lab.tab2.tab[p.x - 1][p.y - 1] == 'P') {
				Cases[k].x = p.x - 1;
				Cases[k].y = p.y - 1;
				Cases[k].z = p.z;
				//empiler(pile, p);
				k++;
			}
		}
	}

	for (unsigned int i = 0; i < k; i++) {
		empiler(pile, Cases[i]);
	}
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

void detruireDragon(Pile pile) {
	detruire(pile);

}