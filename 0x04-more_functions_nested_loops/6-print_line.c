#include "main.h"
/**
*print_line - Function that draws a straight line in the terminal
*@n: variable
*Return: void
*@k:
*/
void print_line(int n)
{
	int a;

	a = 0;
	while (a < n)
	{
		_putchar(95);
		a++;
	}
	_putchar('\n');
}
