#include "holberton.h"

/**
* print_rev - prints
* @s: par
* Return: no return
*/
void print_rev(char *s)
{
	int c = 0;
	int i;

	while (s[c])
	{
		c++;
	}

	for (i = c - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
