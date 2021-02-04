#include <stdio.h>

/**
* main - function prints out the alphabet in lowercase
* Return: returns 0
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar(10);
	return (0);
}
