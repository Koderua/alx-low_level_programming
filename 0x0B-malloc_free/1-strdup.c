#include <stdlib.h>
#include <stdio.h>

/**
 *_strdup - function to place string in malloced mem
 *@str: string to be placed
 *Return: pointer to mem's 1st byte
 */
char *_strdup(char *str)
{
char *a;
int i;

a = malloc(sizeof(str) + 1);

if (a == NULL)
{
return (NULL);
}

for (i = 0; i != 'n'; i++)
{
a[i] = str[i];
}
a[i] = '\0';
return (a);
}
