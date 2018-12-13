#include <stdio.h>
#include <assert.h>

#include "../Bicolor.h"

int main (int argc, char const *argv[])
{
    Bicolor arbre = arbre_create(5);
    Bicolor node1 = arbre_create(0);
    Bicolor node2 = arbre_create(10);
    Bicolor node3 = arbre_create(15);
    
    arbre_recurive_insert(node1, arbre);
    arbre_recurive_insert(node2, arbre);
    arbre_recurive_insert(node3, arbre);

    assert(arbre_uncle(node3)->element == 0);
    assert(arbre_uncle(node2) == NULL);

    return 0;
}