#include <stdio.h>

/**
* main - function prints out 
* Return: returns 0
*/
int main(void)
{
	int c;

	for (c = 0; c <= 99; c++)
	{
		putchar((c / 10) + '0');
		putchar((c % 10) + '0');
		if (c != 99)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
