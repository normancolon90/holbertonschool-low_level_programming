#include <stdio.h>

/**
 * print_array - prints an array of n integers
 * @a: The array
 * @n: the number of elements to print
 *
 * Return: void
 */
void print_array(int *a, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
        if (i < (n - 1))
        {
            printf(", ");
        }
    }
    printf("\n");
}

