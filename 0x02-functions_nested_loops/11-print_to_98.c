#include <stdio.h>

/**
* print_to_98 - prints natural numbers to 98
* @n: parameter
* Return: returns
*/
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			if (n == 98)
				printf("%d\n", n);
			else
				printf("%d, ", n);
			n--;
		}
	}
	else
	{
		while (n <= 98)
		{
			if (n == 98)
				printf("%d\n", n);
			else
				printf("%d, ", n);
			n++;
		}
	}
}
