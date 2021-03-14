#include "holberton.h"

void print_alphabet_x10(void)
{
int i, j = 0;
while (j<10)
{
i = 'a';
while (i <= 'z')
{
_putchar(i);
i++;
}
_putchar('\n');
j++;
}
}
