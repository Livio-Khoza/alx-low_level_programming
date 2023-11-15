#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: int pointer to the allocated memory
 */
int *array_range(int min, int max)
{
        int *a, g = 0;

        if (min > max)
                return (NULL);
        a = malloc((sizeof(int) * (max - min)) + sizeof(int));

        if (a == NULL)
                return (NULL);
        while (min <= max)
        {
                a[g] = min;
                g++;
                min++;
        }
        return (a);
}
