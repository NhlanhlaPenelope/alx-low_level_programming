#include <stdio.h>
/**
* main - Retry point
* Return always 0 (Success)
*/
int main(void)
{
	char c;

	char d;

	c = 'a';
	d = 'A';
	while
		(c <= 'z') {
			putchar (d);
			c++;
		}
	while
		(d <= 'z') {
			putchar (d);
			d++;
		}
	putchar('\n');
	return (0);
}
