#ifndef ennemi.h
#define ennemi.h
#include "joueur.h"

typedef struct tracen tracen;
struct tracen {
int xe,ye;
};

// v: vitesse de deplacement de l'ennemi

void resete(tracen*, grile*);
int deplaceren (tracen, direction, grile);
void Move (tracen*, direction, grile*);
void resete(tracen*, grile*);
void resete1(tracen*, grile*);
void resete2(tracen*, grile*);
void resete3(tracen*, grile*);
#endif // ennemi.h
