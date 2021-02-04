#include <stdio.h>

/**
* main - function prints out the alphabet in lowercase except 'q' and 'e'
* Return: returns 0
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e' || c == 'q')
			continue;
		putchar(c);
	}
	putchar(10);
	return (0);
}
