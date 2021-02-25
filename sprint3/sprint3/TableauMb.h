#ifndef _TableauMb_
#define _TableauMb_
#include "Item.h"
/** @brief Conteneur d'items allou�s en m�moire dynamique
 *  de capacit� extensible suivant un pas d'extension
 */
struct Tab2D {
	Item** tab; // adresse du tableau bidimensionnel
				// en m�moire dynamique
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