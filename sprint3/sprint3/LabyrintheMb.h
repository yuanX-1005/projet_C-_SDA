#ifndef _;_
#define _LabyrintheMb_
//#include "IndexPositionMb.h"
#include "DragonGame.h"

/** @brief Conteneur d'items allou�s en m�moire dynamique
 *  de capacit� extensible suivant un pas d'extension
 */
void initialisation(Lab& lab, std::ifstream& fichier);
void destruction(Lab& lab);
void afficherSP1(const Lab& lab);
void afficherSP2(Lab& lab, Position& p, Pile& pile);
#endif
