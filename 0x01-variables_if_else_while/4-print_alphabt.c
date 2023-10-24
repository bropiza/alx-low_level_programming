#include <stdio.h>

/**
<<<<<<< HEAD
 * main -main function
 *
 *Return: always 0
=======
 * main - main function
 *
 * Return: always 0
>>>>>>> dd048657f77cdbd753eaf696a278f9cbf7f61d5a
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
