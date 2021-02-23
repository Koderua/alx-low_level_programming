#include "holberton.h"
/**
 *_memset - fn
 *@s: p1
 *@b: p2
 *@n: p3
 *Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
s = &n;
for (s = 0; s < (n + 1); s++)
{
*s = b;
}
return (s);
}
