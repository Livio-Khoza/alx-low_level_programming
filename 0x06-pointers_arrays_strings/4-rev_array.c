#include "main.h"
/**
 * reverse_array - reverses the content of an array of int
 * @a: the array of int to be reversed
 * @n: the number in int in the array
 */
void reverse_array(int *a, int n)
{
        int tmp, index;

        for (index = n - 1; index >= n / 2; index--)
        {
        tmp = a[n - 1 - index];
a[n - 1 - index] = a[index];
a[index] = tmp;
        }
}
