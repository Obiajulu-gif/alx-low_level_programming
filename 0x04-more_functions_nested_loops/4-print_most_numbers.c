#include "main.h"
/**
 * print_most_numbers - function that prints numbers from 0 to 9 less 2 and 4
 * Return: Always 0
*/
void print_most_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		if ((a != 2) && (a != 4))
		_putchar(a + 48);
	}
	_putchar('\n');
}
