#include "holberton.h"

/**
* print_last_digit - returns last digit
* @n: parameter
* Return: returns last digit
*/
int print_last_digit(int n)
{
	int output;

	if (n >= 0)
		output = n % 10;
	else
		output = (n % 10) * -1;
	_putchar('0' + output);
	return (output);
}
