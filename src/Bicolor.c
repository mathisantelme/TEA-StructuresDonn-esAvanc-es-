#include <stdio.h>
#include <stdlib.h>

#include "Bicolor.h"

Bicolor arbre_create (Element e) {
    Bicolor arbre = (Bicolor) malloc(sizeof(Noeud));
    
    if (arbre) {
        arbre->element = e;
        arbre->filsG = NULL;
        arbre->filsD = NULL;
        arbre->parent = NULL;
        arbre->color = BLACK;
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

void arbre_RotG (Noeud * root) {
    Noeud * temp;

    temp = root->filsD;
    root->filsD = temp->filsG;
    temp->filsG = root;

    root = temp;
}

void arbre_RotD (Noeud * root) {
    Noeud * temp;

    temp = root->filsG;
    root->filsG = temp->filsD;
    temp->filsD = root;

    root = temp;
}


int arbre_hauteur (Bicolor arbre) {
    return (arbre == NULL) ? 0 : MAX(arbre_hauteur(arbre->filsD), arbre_hauteur(arbre->filsG)) + 1;
}

int arbre_nb_noeuds (Bicolor arbre) {
    return (arbre == NULL) ? 0 : arbre_nb_noeuds(arbre->filsG) + arbre_nb_noeuds(arbre->filsD) + 1;
}

void arbre_recurive_insert (Noeud * node, Bicolor root) {
    // on descend dans l'arbre de manière récursive jusqu'à une feuille
    // si la valeur du noeud est inférieure a celle du noeud courant alors on insère a gauche
    if (root && node->element < root->element) {
        // si le sous-arbre gauche existe on appelle récursivement la fonction
        if (root->filsG) {
            arbre_recurive_insert(node, root->filsG);
            return;
        }
        // sinon on insère le noeud
        else
            root->filsG = node;
    }
    // sinon on insère a droite (on vérifie que le noeud courant n'est pas null)
    else if (root) {
        // si le sous-arbre droit existe on appelle récursivement la fonction
        if (root->filsD) {
            arbre_recurive_insert(node, root->filsD);
            return;
        }
        // sinon on insère le noeud
        else
            root->filsD = node;
    }

    // on ajuste les attributs du nouveau noeud
    node->parent = root;
    node->filsG = NULL;
    node->filsD = NULL;
    node->color = RED;
}

void arbre_balance (Noeud * node) {
    // si on est à la racine de l'arbre
    if (node->parent == NULL)
            node->color = BLACK;
    
    // si le père est BLACK
    else if (node->parent->color == BLACK)
        return;
    
    // si le père est RED
    else if (node->parent->color == RED) {
        node->parent->color = BLACK;
        arbre_uncle(node)->color = BLACK;
        
        Noeud * grandParent = arbre_grand_parent(node);
        grandParent->color = RED;
        arbre_balance(grandParent);
    }
    // si l'oncle du noeud courant est RED
    else if (arbre_uncle(node)->color == RED) {
        Noeud *parent = node->parent;
        Noeud *grandParent = arbre_grand_parent(node);

        // si le noeud courant est à droite de son parent qui est a gauche de son propre parent
        if (node == grandParent->filsG->filsD) {
            arbre_RotG(parent);
            node = node->filsG;
        }
        // si le noeud courant est à gauche de son parent qui est a droite de son propre parent
        else if (node == grandParent->filsD->filsG) {
            arbre_RotD(parent);
            node = node->filsD; 
        }

        // si le noeud courant est situé à gauche de son parent
        if (node == parent->filsG)
            arbre_RotD(grandParent);
        // si le noeud courant est situé à droite de son parent
        else
            arbre_RotG(grandParent);
        
        parent->color = BLACK;
        grandParent->color = RED;
    }
}

Bicolor arbre_add_element (Noeud * node, Bicolor root) {
    // on insère notre noeud dans l'arbre de manière récursive
    arbre_recurive_insert(node, root);

    // on équilibre l'arbre par rapport au noeud
    arbre_balance(node);

    // on cherche la nouvelle racine a retourner
    root = node;

    while (root->parent)
        root = root->parent;
        
    return root;
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