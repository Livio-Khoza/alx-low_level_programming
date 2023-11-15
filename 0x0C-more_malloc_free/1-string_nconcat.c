#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates string
 * @s1: string 1
 * @s2: string 2
 * @n: number of elements to concatenate from s2
 * Return: pointer to new allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
        unsigned int g = 0, p = 0, m = 0, b = 0;
        char *str;

        if (s1 == NULL)
                s1 = "";
        if (s2 == NULL)
                s2 = "";
        while  (s1[g])
                g++;
        while (s2[m])
                m++;
        if (n >= m)
                b = g + m;
        else
                b = g + n;
        str = malloc(sizeof(char) * b + 1);
        if (str == NULL)
                return (NULL);

        m = 0;
        while (p < b)
        {
                if (p <= g)
                        str[p] = s1[p];
                if (p >= g)
                {
                        str[p] = s2[m];
                        m++;
                }
                p++;
        }
        str[p] = '\0';
        return (str);
}
