#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "arraylist.h"

int main(int argc, char **argv)
{
    int i;
    list_t L;
    al_init(&L, 8);

    for (i = 0; i < 20; i++) {
	al_push(&L, i);
    }

    while(al_pop(&i, &L)) {
	printf("Removed %d\n", i);
    }

    al_destroy(&L);
    al_destroy(&L);

    return EXIT_SUCCESS;
}
