#include "holberton.h"

/**
* _islower - checks abc
* @c: parameter
* Return: returns 1 or 0
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
