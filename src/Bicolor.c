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

void arbre_RotG (Bicolor * node) {
    Bicolor temp;
    Bicolor root = * node;

    if (root != NULL) {
        temp = root->filsD;

        if (root->parent != NULL) {
            if (root->parent->filsD == root)
                root->parent->filsD = temp;
            else if (root->parent->filsG == root)
                root->parent->filsG = temp;
        }

        if (temp->filsG != NULL)
            temp->filsG->parent = root;

        temp->parent = root->parent;
        root->parent = root->parent;
        root->filsD = temp->filsG;
        temp->filsG = root;
        *node = temp;
    }
}

void arbre_RotD (Bicolor * node) {
    Bicolor temp;
    Bicolor root = *node;

    if (root != NULL) {
        temp = root->filsG;

        if (root->parent != NULL) {
            if (root->parent->filsD == root)
                root->parent->filsD = temp;
            else if (root->parent->filsG == root)
                root->parent->filsG = temp;
        }

        if (temp->filsD != NULL)
            temp->filsD->parent = root;
        
        temp->parent = root->parent;
        root->parent = temp;
        root->filsG = temp->filsD;
        temp->filsD = root;
        *node = temp;
    }
}

void arbre_RotGD (Bicolor * node) {
    Bicolor root = * node;

    if (root != NULL) {
        if (root->filsD->filsG != NULL) {
            arbre_RotD(&root->filsD);
            arbre_RotG(&root);
        }
    }
}

void arbre_RotDG (Bicolor* node) {
	Bicolor root = * node;

	if (root != NULL) {
		if (root->filsG->filsD != NULL) {
			arbre_RotG(&root->filsG);
			arbre_RotD(&root);
		}
	}
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

void arbre_balance (Bicolor node) {
    /*Bicolor node_parent = NULL;
    Bicolor node_grandParent = NULL;

    while ((node != root) && (node->color != BLACK) && (node->parent->color == RED)) {
        node_parent = node->parent;
        node_grandParent = node->parent->parent;

        // cas A: le parent de node est l'enfant gauche du grand parent
        if (node_parent == node_grandParent->filsG) {
            Bicolor node_uncle = node_grandParent->filsD;

            // cas A.1: l'oncle de node est RED, on ne fait que recolorer l'arbre
            if (node_uncle != NULL && node_uncle->color == RED) {
                node_grandParent->color = RED;
                node_parent->color = BLACK;
                node_uncle->color = BLACK;
                node = node_grandParent;
            } else {
                // cas A.2: node est le fils droit de son parent, on fait une rotation a gauche
                if (node == node_parent->filsD) {
                    arbre_RotG(&node_parent);
                    node = node_parent;
                    node_parent = node->parent;
                }

                // cas A.3: node est le fils gauche de son parent, on faut une rotation a droite
                arbre_RotD(&node_grandParent);
                
                // on échange les coleurs de node_parent et de node_grandParent
                int temp_color = node_parent->color;
                node_parent->color = node_grandParent->color;
                node_grandParent->color = temp_color;

                node = node_parent;
            }   
        }
        // cas b: node_parent est le fils droit de node_grandParent
        else {
            Bicolor node_uncle = node_grandParent->filsG;
        
            // cas B.1: node_uncle est RED on ne fait que recolorer
            if ((node_uncle != NULL) && (node_uncle->color == RED)) {
                node_grandParent->color = RED;
                node_parent->color = BLACK;
                node_uncle->color = BLACK;
                node = node_grandParent;
            } else {
                // cas B.2: node est l'enfant gauche de node_parent, on fait une rotation a droite
                if (node == node_parent->filsG) {
                    arbre_RotD(&node_parent);
                    node = node_parent;
                    node_parent = node->parent;
                }

                // cas B.3: node est l'enfant droit de node_parent, rotation gauche
                arbre_RotG(&node_grandParent);

                // on échange les coleurs de node_parent et de node_grandParent
                int temp_color = node_parent->color;
                node_parent->color = node_grandParent->color;
                node_grandParent->color = temp_color;
                
                node = node_parent;
            }
        }

        root->color = BLACK;
    } */

    Bicolor p = node->parent;
    Bicolor u = arbre_uncle(node);
    Bicolor g = arbre_grand_parent(node);

    // cas root mais déja traité auparavant
    if (node->parent == NULL) { 
        node->color = BLACK;
    } else if(p->color == BLACK){
        printf("rien\n");
    } else if(u != NULL && u->color == RED){
        p->color = BLACK;
        u->color = BLACK;
        g->color = RED;
        printf("cas 3 \n");
        if(g->parent == NULL){
        printf("parent Vide\n");
        }
        arbre_balance(g);
    }
    else{
        printf("cas 4\n");
        //gauche droit => double rot D G
        if(p == g->filsG && node == g->filsG->filsD){
            printf("petit a\n");
            arbre_RotDG(&g);
            node->color = BLACK;
            node->filsD->color = RED;
            node->filsG->color = RED;
        }
        //droit gauche => double rot G D
        else if(p == g->filsD && node == g->filsD->filsG){
            printf("petit b\n");
            arbre_RotGD(&g);
            node->color = BLACK;
            node->filsD->color = RED;
            node->filsG->color = RED;
        }
        else if(p == g->filsD && node == p->filsD){
            arbre_RotG(&g);
            p = node->parent;
            p->color = BLACK;
            p->filsD->color = RED;
            p->filsG->color = RED;
        }
        else if(p == g->filsG && node == p->filsG){
            arbre_RotD(&g);
            p = node->parent;
            p->color = BLACK;
            p->filsD->color = RED;
            p->filsG->color = RED;
        }
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
    if (arbre != NULL) {
        printf("Layer %d:\n", n);
        printf("%d > %d\n", arbre->element, arbre->color);
        arbre_print(arbre->filsG, n + 1);
        arbre_print(arbre->filsD, n + 1);
    }
}