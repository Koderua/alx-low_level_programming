#include "holberton.h"

/**
 *print_last_digit - function
 *@r: parameter
 *Return: last digit
 */
int print_last_digit(int r)
{
int c;
c = r % 10;
_putchar(c + '0');
return (c);
}
