#include <stdio.h>
#include <assert.h>

#include "../Bicolor.h"

int main (int argc, char const *argv[])
{
    Bicolor arbre = arbre_create(5);

    arbre_print(arbre, 0);

    arbre_recurive_insert(arbre_create(0), arbre);
    arbre_balance(arbre->filsG);

    arbre_print(arbre, 0);


    arbre_recurive_insert(arbre_create(10), arbre);
    arbre_balance(arbre->filsD);

    arbre_print(arbre, 0);


    return 0;
}