#include <stdio.h>
#include <stdlib.h>
#include "head.h"

/*--------------------------------------------------------------------
BUT : Additionner 2 vecteurs ensemble
ENTREES : Coordonnees X et Y des deux vecteurs
SORTIES : Vecteur ayant pour coordonnees l'addition des deux vecteurs
--------------------------------------------------------------------*/
extern int additionVecteur(tVecteur *Vecteur1, tVecteur Vecteur2){

        (*Vecteur1).nX = ((*Vecteur1).nX + Vecteur2.nX);
        (*Vecteur1).nY = ((*Vecteur1).nY + Vecteur2.nY);

    return 0;
}
