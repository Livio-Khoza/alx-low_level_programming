#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
        char *gpm;
        int g, p = 0;

        if (str == NULL)
                return (NULL);
        g = 0;
        while (str[g] != '\0')
                g++;
        gpm = malloc(sizeof(char) * (g + 1));
        if (gpm == NULL)
                return (NULL);
        for (p = 0; str[p]; p++)
                gpm[p] = str[p];
        return (gpm);
}
