#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED

//Declaration du type structure tVecteur pour pouvoir manipuler les coordonnees des vecteurs
typedef struct tVecteur{

        int nX;
        int nY;

}tVecteur;

//Prototypage

extern int additionVecteur(tVecteur *Vecteur1, tVecteur Vecteur2);
extern int soustractionVecteur(tVecteur *Vecteur1, tVecteur *Vecteur2);
extern int multiplicationVecteurScalaire(tVecteur *Vecteur1, int nScalaire);



#endif // HEAD_H_INCLUDED
