#ifndef _DragonGame_
#define _DragonGame_
//#include "Pile.h"
//#include "TableauMb.h"
//#include "IndexPositionMb.h"
//#include "LabyrintheMb.h"

#include "TableauMb.h"
#include "Pile.h"

/** @brief Conteneur d'items allou�s en m�moire dynamique
 *  de capacit� extensible suivant un pas d'extension
 */
void MouvementDragon(Lab& lab, Position& p, Pile& pile);
void detruireDragon(Pile pile);
#endif