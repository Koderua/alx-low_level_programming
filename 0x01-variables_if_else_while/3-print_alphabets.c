#include <stdio.h>

/**
* main - function prints out the alphabet in lowercase
* Return: returns 0
*/
int main(void)
{
	char c, d;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (d = 'A'; d <= 'Z'; d++)
	{
		putchar(d);
	}
	putchar(10);
	return (0);
}
