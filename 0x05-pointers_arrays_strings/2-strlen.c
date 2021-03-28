#include "holberton.h"

/**
* _strlen - returns strlen
* @s: par
* Return: int
*/
// Online C compiler to run C program online
#include <stdio.h>

int _strlen(char *s)
{
	int i = 0;
	int c = 0;

	for (i = '0'; s[i] != '\0'; i++)
	{
		i++;
	}
	return (i);
}
