#include <stdio.h>
#include <stdlib.h>
#include "head.h"

int main()
{
    tVecteur Vecteur1;
    tVecteur Vecteur2;
    int nScalaire, nChoix;
    printf("Veuillez rentrer le coordonne X du premier vecteur\n");
    scanf("%d", &Vecteur1.nX);
    printf("Veuillez rentrer le coordonne Y du premier vecteur\n");
    scanf("%d", &Vecteur1.nY);
    printf("Si vous voulez faire une addition de deux vecteurs, tapez 1, une soustraction, tapez 2, pour une multiplication grâce à un produit scalaire, tapez 3\n");
    scanf("%", &nChoix); //Choix permettant de choisir l'operation voulue
    if (nChoix=1){
        printf("Veuillez rentrer le coordonne X du second vecteur\n");
        scanf("%d", &Vecteur2.nX);
        printf("Veuillez rentrer le coordonne Y du second vecteur\n");
        scanf("%d", &Vecteur2.nY);
        additionVecteur(&Vecteur1, Vecteur2);
        printf("L'addition des deux vecteurs donne un nouveau vecteur ayant les coordonnes X : %d et Y : %d\n", Vecteur1.nX, Vecteur1.nY);ù
    }
    else if (nChoix=2){
        printf("Veuillez rentrer le coordonne X du second vecteur\n");
        scanf("%d", &Vecteur2.nX);
        printf("Veuillez rentrer le coordonne Y du second vecteur\n");
        scanf("%d", &Vecteur2.nY);
        soustractionVecteur(&Vecteur1, &Vecteur2);
        printf("La soustraction des deux vecteurs donne un nouveau vecteur ayant les coordonnes X : %d et Y : %d\n", Vecteur1.nX, Vecteur1.nY);
    }
    else{
        printf("Rentrez un nombre pour multiplier le vecteur par un scalaire\n");
        scanf("%d", &nScalaire);
        multiplicationVecteurScalaire(&Vecteur1, nScalaire);
        printf("La multiplication de votre vecteur par votre scalaire vaut pour X : %d et pour Y : %d", Vecteur1.nX, Vecteur1.nY);
    }

    return 0;
}
