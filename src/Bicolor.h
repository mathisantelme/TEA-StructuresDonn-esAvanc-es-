#include <stdio.h>
#include <stdlib.h>

#ifndef BICOLOR_H
#define BICOLOR_H
#endif

typedef struct Noeud {
    void * element;
    struct Noeud * filsG;
    struct Noeud * filsD;
    struct Noeud * parent;
    enum {RED, BLACK} color;
} Noeud;

typedef Noeud * pt_Arbre;
typedef pt_Arbre Bicolor;

Bicolor arbre_create (void * e);
Bicolor arbre_grand_parent (Bicolor arbre);
Bicolor arbre_uncle (Bicolor arbre);
Bicolor arbre_RotG (Bicolor arbre, Noeud * node);
Bicolor arbre_RotD (Bicolor arbre, Noeud * node);   
/* int arbre_hauteur (Bicolor arbre);
int arbre_nb_noeuds (Bicolor arbre);
Bicolor arbre_balance (Bicolor arbre);
Bicolor arbre_add_element (void * e, int color, Bicolor arbre);
Bicolor arbre_suppr (Bicolor arbre, void * e);
void * arbre_suppr_success (Bicolor arbre);
void arbre_free (Bicolor arbre);
void arbre_print (Bicolor arbre, int n); */