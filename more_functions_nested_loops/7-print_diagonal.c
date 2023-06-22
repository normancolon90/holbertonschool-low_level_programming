#include "main.h"

/**
 * print_diagonal - prints \ alot
 * @n: number of dashes
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, spaces;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (spaces =i; spaces >0; spaces--)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
