#include "main.h"
/**
<<<<<<< HEAD
 * print_alphabet_x10 - prints alphabet in lowercase 10x
=======
 * print_alphabet_x10 - prints alphabet in lower case x10
>>>>>>> dd048657f77cdbd753eaf696a278f9cbf7f61d5a
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 'a' ; j <= 'z' ; j++)
			_putchar(j);
		_putchar('\n');
	}
}
