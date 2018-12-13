#include <stdio.h>
#include <assert.h>

#include "../Bicolor.h"

int main (int argc, char const *argv[])
{
    Bicolor arbre = arbre_create(5);
    Bicolor node1 = arbre_create(10);
    Bicolor node2 = arbre_create(0);
    Bicolor node3 = arbre_create(7);

    arbre_recurive_insert(node1, arbre);

    assert(arbre->element == 5);
    assert(arbre->filsD->element == 10);
    assert(arbre->filsG == NULL);

    arbre_recurive_insert(node2, arbre);

    assert(arbre->element == 5);
    assert(arbre->filsG->element == 0);

    arbre_recurive_insert(node3, arbre);

    assert(arbre->element == 5);
    assert(arbre->filsD->element == 10);
    assert(arbre->filsD->filsG->element == 7);
    assert(arbre->filsG->element == 0);

    return 0;
}