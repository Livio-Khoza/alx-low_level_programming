#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
        char *conct;
        int g, pm;

        if (s1 == NULL)
                s1 = "";
        if (s2 == NULL)
                s2 = "";
        g = pm = 0;
        while (s1[g] != '\0')
                g++;
        while (s2[pm] != '\0')
                pm++;
        conct = malloc(sizeof(char) * (g + pm + 1));
        if (conct == NULL)
                return (NULL);
        g = pm = 0;
        while (s1[g] != '\0')
        {
                conct[g] = s1[g];
                g++;
        }
        while (s2[pm] != '\0')
        {
                conct[g] = s2[pm];
                g++, pm++;
        }
        conct[g] = '\0';
        return (conct);
}
