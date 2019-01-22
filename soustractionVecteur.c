#include <stdio.h>
#include <stdlib.h>
#include "head.h"

/*-------------------------------------------------------------------------
BUT : Soustraire 2 vecteurs ensemble
ENTREES : Coordonnees X et Y des deux vecteurs
SORTIES : Vecteur ayant pour coordonnees la soustraction des deux vecteurs
-------------------------------------------------------------------------*/
extern int soustractionVecteur(tVecteur *Vecteur1, tVecteur *Vecteur2){

        (*Vecteur2).nX = ((*Vecteur2).nX) * -1;
        (*Vecteur2).nY = ((*Vecteur2).nY) * -1;
        (*Vecteur1).nX = ((*Vecteur1).nX + (*Vecteur2).nX);
        (*Vecteur1).nY = ((*Vecteur1).nY + (*Vecteur2).nY);
    return 0;
}
