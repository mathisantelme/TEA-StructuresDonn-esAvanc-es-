#include <stdio.h>
#include <assert.h>

#include "../Bicolor.h"


int main(int argc, char const *argv[])
{
    Bicolor arbre = arbre_create(10);
    
    assert(arbre->color == BLACK);
    assert(arbre->parent == NULL);
    assert(arbre->filsD == NULL);
    assert(arbre->filsG == NULL);
    assert(arbre->element == 10);

    return 0;
}
