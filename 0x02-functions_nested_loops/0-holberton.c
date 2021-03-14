#include "holberton.h"

/**
 *main - function
 *Return: 0
*/
int main(void)
{
int i, c = 0;
char str[] = "Holberton\n";
while (str[c] != '\0')
{
c++;
}
for (i = 0; i < c; ++i)
_putchar(str[i]);
return (0);
}
