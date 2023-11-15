#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: the number of members
 * @size: the size
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
        int g = 0, m = 0;
        char *p;

        if (nmemb == 0 || size == 0)
                return (NULL);

        m = nmemb * size;
        p = malloc(m);

        if (p == NULL)
                return (NULL);

        while (g < m)
        {
                p[g] = 0;
                g++;
        }
        return (p);
}
