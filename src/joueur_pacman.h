#ifndef joueur.h
#define joueur.h
 #include "grille.h"

typedef enum direction direction;
enum direction { droite ,bas, gauche, haut};
typedef struct trace trace;
struct trace {
int x,y;
int nb_vie, score,pouvoir;
};
void resetp(trace*,grile*,int);
int deplacerp (trace, direction, grile);
void Moove(trace*,direction,grile*);
#endif // joueur.h
