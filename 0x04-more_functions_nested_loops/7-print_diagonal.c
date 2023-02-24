#include "main.h"

/**
 * print diagonal -  a function that draws a diagonal line on the terminal.
 * Return: Adiagonal line
 */

void print_diagonal(int n);
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
