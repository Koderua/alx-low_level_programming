#include <stdio.h>

/**
 *linear_search - function to perform linear search
 *@array: array to be searched
 *@size: total size of array
 *@value: value to be searched for within array
 *Return: 'i' in success; -1 in failure
 */
int linear_search(int *array, size_t size, int value)
{
size_t i;
for (i = 0; i < size; i++)
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
if (value == array[i])
{
return (i);
}
else if (array == NULL)
{
return (-1);
}
}
return (-1);
}
