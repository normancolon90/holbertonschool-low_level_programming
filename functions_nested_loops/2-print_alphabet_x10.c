 /*
 * File: 2-print_alphabet_x10.c
 * Norman C
 */
#include main.h
void print_alphabet_x10(void)
{
	char alphabet = 'a';
	int counter = 0;

	while (counter < 10)
	{
		while (alphabet < 123)
		{
		    _putchar(alphabet);
			alphabet++;
		}
	alphabet = 'a';
	_putchar(10);
	counter++;
	}
}
