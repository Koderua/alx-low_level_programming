#include "holberton.h"
/**
 *swap_int - swaps
 *@a: par
 *@b: par
 *Return: void
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
