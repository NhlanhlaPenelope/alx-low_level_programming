#include <stdio.h>
/**
* main - A program that prints the size of various computer types
* Return: 0 (success)
*/
int main(void)
{
printf("size of a char: %d byte(s)", sizeof(char));
printf("size of a int: %d byte(s)", sizeof(int));
printf("size of a long int: %d byte(s)", sizeof(long int));
printf("size o a long long int: %d byte(s)", sizeof(long long int));
printf("size of a float: %d byte(s)", sizeof(float));
return (0);
}
