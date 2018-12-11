#include <stdio.h>
#include <stdlib.h>

#include "Bicolor.h"

Bicolor arbre_create (void * e) {
    Bicolor arbre = (Bicolor) malloc(sizeof(Noeud));
    
    if (arbre) {
        arbre->element = e;
        arbre->filsG = NULL;
        arbre->filsD = NULL;
        arbre->parent = NULL;
    } else {
        return NULL;
    }
}

Bicolor arbre_grand_parent (Bicolor node) {
    if ((node != NULL) && (node->parent != NULL))
        return node->parent->parent;
    else
        return NULL;
}

Bicolor arbre_uncle (Bicolor node) {
    Bicolor g = arbre_grand_parent(node);
    if (g == NULL)
        return NULL; // Pas de grand-pere implique pas d'oncle

    if (node->parent == g->filsG)
        return g->filsD;
    else
        return g->filsG;
}

Bicolor arbre_RotG (Bicolor arbre, Noeud * node) {
    Noeud * temp;
    if (node) {
        temp = node->filsD;
        // sous-arbre gauche -> sous-arbre droit de node
        node->filsD = node;
        if (temp->filsG->parent)
            temp->filsG->parent = node;

        // nouveau parent de temp est le parent de node
        temp->parent = node->parent;

        // parent pointe sur temp au lieu de node
        // on vérifie qu'on est pas a la racine
        if (node->parent == NULL)
            arbre->parent = temp;
        else if (node == (node->parent)->filsG)
            // node est l'enfant gauche
            node->parent->filsG = temp;
        else
            // node est l'enfant droit
            node->parent->filsD = temp;

        // mettre node sur la partie gauche de temp
        temp->filsG = node;
        node->parent = temp;
    }
    return node;
}

Bicolor arbre_RotD (Bicolor arbre, Noeud * node) {
    Noeud * temp;
    if (node) {
        temp = node->filsG;
        // sous-arbre gauche -> sous-arbre droit de node
        node->filsG = node;
        if (temp->filsD->parent)
            temp->filsD->parent = node;

        // nouveau parent de temp est le parent de node
        temp->parent = node->parent;

        // parent pointe sur temp au lieu de node
        // on vérifie qu'on est pas a la racine
        if (node->parent == NULL)
            arbre->parent = temp;
        else if (node == (node->parent)->filsD)
            // node est l'enfant gauche
            node->parent->filsD = temp;
        else
            // node est l'enfant droit
            node->parent->filsG = temp;

        // mettre node sur la partie gauche de temp
        temp->filsD = node;
        node->parent = temp;
    }
    return node;
}


int arbre_hauteur (Bicolor arbre) {
    return (arbre == NULL) ? 0 : MAX(arbre_hauteur(arbre->filsD), arbre_hauteur(arbre->filsG)) + 1;
}

int arbre_nb_noeuds (Bicolor arbre) {
    return (arbre == NULL) ? 0 : arbre_nb_noeuds(arbre->filsG) + arbre_nb_noeuds(arbre->filsD) + 1;
}

void arbre_free(Bicolor arbre) {
    if (arbre) {
        if (arbre->filsG)
            arbre_free(arbre->filsG);

        if (arbre->filsD)
            arbre_free(arbre->filsD);
        
        free(arbre);
    } else {
        return;
    }
}

int arbre_compare (Bicolor a, Bicolor b) { 
    // 1. both empty
    if (a == NULL && b == NULL) 
        return 1; 
  
    // 2. both non-empty -> compare them 
    if (a != NULL && b != NULL)
        return a->element == b->element && a->color == b->color && arbre_compare(a->filsG, b->filsG) && arbre_compare(a->filsD, b->filsD); 
    
    // 3. one empty, one not -> false
    return 0; 
}

void arbre_print (Bicolor arbre, int n) {
    if (arbre) {
        printf("Layer %d:\n", n);
        printf("%d > %d\n", arbre->element, arbre->color);
        arbre_print(arbre->filsG, n + 1);
        arbre_print(arbre->filsD, n + 1);
    }
}