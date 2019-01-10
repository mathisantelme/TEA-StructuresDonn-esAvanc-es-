#include <stdio.h>
#include <assert.h>

#include "../Bicolor.h"

int main (int argc, char const *argv[])
{
    // test rotation gauche
    Bicolor tree = arbre_create(10);
    Bicolor node1 = arbre_create(5);
    Bicolor node2 = arbre_create(15);

    arbre_recurive_insert(node1, tree);
    arbre_recurive_insert(node2, tree);

    arbre_RotG(&tree);

    assert(tree->element == 15);
    assert(tree->filsD == NULL);
    assert(tree->filsG->element == 10);
    assert(tree->filsG->filsD == NULL);
    assert(tree->filsG->filsG->element == 5);

    // test rotation droite
    tree = arbre_create(10);
    node1 = arbre_create(5);
    node2 = arbre_create(15);

    arbre_recurive_insert(node1, tree);
    arbre_recurive_insert(node2, tree);

    arbre_RotD(&tree);

    assert(tree->element == 5);
    assert(tree->filsG == NULL);
    assert(tree->filsD->element == 10);
    assert(tree->filsD->filsG == NULL);
    assert(tree->filsD->filsD->element == 15);

    return 0;
}