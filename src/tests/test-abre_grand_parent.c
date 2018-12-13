#include <stdio.h>
#include <assert.h>

#include "../Bicolor.h"

int main (int argc, char const *argv[])
{
    Bicolor arbre = arbre_create(5);
    Bicolor node1 = arbre_create(10);
    Bicolor node2 = arbre_create(15);

    arbre_recurive_insert(node1, arbre);
    arbre_recurive_insert(node2, arbre);

    assert(arbre_grand_parent(arbre) == NULL);
    assert(arbre_grand_parent(node2)->element == 5);

    return 0;
}