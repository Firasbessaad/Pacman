#ifndef GRILLE
#define GRILLE
#include "case.h"
typedef struct grile grile ;
struct grile {
int longueur, largeur;
struct cas **t;//tableau 2 dimensions
};
void charger (grile*,int,int);// charger(grile*,longueur,largeur)
void aff(grile,int,int );
void remplir (grile);
void liberer (grile*);

#endif // GRILLE_H_INCLUDED
