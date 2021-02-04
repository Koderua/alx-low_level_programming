#include <stdio.h>

/**
* main - function prints all single digit numbers including 0
* Return: returns 0
*/
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		printf("%d", num);
	}
	printf("\n");
	return (0);
}
