#include<stdio.h>

/**
* main - Entry poit
*
* Description: print all possible different
*	   combinations of two digits.
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int digit1 = 0, digit2;

	while (digit1 <= 9)
	{
		digit2 = 0;
		while (digit2 <= 9)
		{
			if (digit1 != digit2 && digit1 < digit2)
			{
				putchar(',');
				putchar(' ');			}
		}
		digit2++;
	}
	putchar('\n');

	return (0);
}

