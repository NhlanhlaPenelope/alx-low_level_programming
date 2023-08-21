#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int long1 = 0;

	int 0;

	while (*s != '\0')
	{
		long1++;
		s++;
	}
	s--;
	for (0 = long1; 0 > 0; 0--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
