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
int i = 0, size = 0;

if (str == NULL)
return (NULL);

while (str[size])
size++;

a = malloc(sizeof(char) * size + 1);

if (a)
{
for (; i <= size; i++)
a[i] = str[i];

a[i] = '\0';
}

else
return (NULL);

return (a);
}
