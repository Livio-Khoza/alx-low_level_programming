#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: creates array of size size and assign char c
 * Return: points to the array, if fail return NULL
 */
char *create_array(unsigned int size, char c)
{
        char *str;
        unsigned int g;

        str = malloc(sizeof(char) * size);
        if (size == 0 || str == NULL)
                return (NULL);
        for (g = 0; g < size; g++)
                str[g] = c;
        return (str);
}
