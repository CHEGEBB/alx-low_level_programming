#include "main.h"

/**
 * print_line - printing lines
 * @n: number of times
 *
 * Return: void
 */


void print_line(int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
