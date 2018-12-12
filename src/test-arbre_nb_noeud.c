#include <stdio.h>
#include <assert.h>

#include "Bicolor.h"

int main(int argc, char const *argv[])
{
    Bicolor arbre = arbre_create(10);

    assert(arbre_nb_noeuds(arbre) == 1);

    return 0;
}
