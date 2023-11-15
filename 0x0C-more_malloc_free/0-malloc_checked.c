#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - It allocates memory
 * @b: It's the size to be allocated
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
        void *g;

        g = malloc(b);
        if (g == NULL)
                exit(98);
        return (g);
}
