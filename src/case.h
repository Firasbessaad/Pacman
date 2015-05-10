#ifndef case.h
#define case.h

typedef struct mur mur; // c'est le map
struct mur {
 // un char qui sera afficher lors de l'affichage de la grille
int color; //
} ;
typedef struct pastille pastille;
struct pastille {
float d;
int colorp;
}
;
typedef struct spestule spestule; // la super-pestule
struct spestule {
int y;
int colorsp;
};

typedef struct cas cas ;
 struct cas {
     char mime;//
    void * occupant ;//pointeur generique
  } ;
  /*   ***************Les methodes***************** */
void vider(cas );
char afficher (cas);
cas* insert_data(char ,void* );
#endif // case.h
