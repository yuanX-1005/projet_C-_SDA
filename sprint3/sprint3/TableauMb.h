#ifndef _TableauMb_
#define _TableauMb_
#include "Item.h"
/** @brief Conteneur d'items alloués en mémoire dynamique
 *  de capacité extensible suivant un pas d'extension
 */
struct Tab2D {
	Item** tab; // adresse du tableau bidimensionnel
				// en mémoire dynamique
	unsigned int nbL;   // nombre de lignes de la matrice
	unsigned int nbC;   // nombre de colonnes de la matrice
};

struct Lab {
	Tab2D tab1;
	Tab2D tab2;
};
void initialiser(Lab& lab);
void detruire(Lab& lab);
#endif