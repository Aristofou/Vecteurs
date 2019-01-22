#include <stdio.h>
#include <stdlib.h>
#include "head.h"


/*------------------------------------------------------------------------------------------------------
BUT : Multiplier 1 vecteur avec un produit scalaire
ENTREES : Coordonnees X et Y du vecteur et le produit scalaire
SORTIES : Vecteur ayant pour coordonnees a multiplication des coordonnees X et Y par le produit scalaire
------------------------------------------------------------------------------------------------------*/
extern int multiplicationVecteurScalaire(tVecteur *Vecteur1, int nScalaire){

    (*Vecteur1).nX = ((*Vecteur1).nX * nScalaire);
    (*Vecteur1).nY = ((*Vecteur1).nY * nScalaire);

}
