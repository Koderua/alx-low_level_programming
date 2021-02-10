#include "holberton.h"

/**
* largest_number - returns largest of 3 numbers
* @a: parameter
* @b: parameter
* @c: parameter
* Return: returns largest number
*/
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b)
	{
		if (a > c)
		{
			largest = a;
		}
		else
		{
			largest = c;
		}
	}
	else if (b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
