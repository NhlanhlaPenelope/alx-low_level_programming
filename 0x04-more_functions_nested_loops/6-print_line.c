#include "main.h"

/**
 * print_line - print a straight line
 *
 * @n: is the number of times the _ character
 *	should be prented
*/

void print_line(int n)
{
	int lnChr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (inChr = 1; inChr <= n; inChr++)
			_putchar('_');
		_putchar('\n');
	}
}
