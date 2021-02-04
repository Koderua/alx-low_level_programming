#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
main - This function generates a random integer n, prints it, and states 
whether it’s positive, zero, or negative.
* Return: This function returns 0.
*/
int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
    	{
	printf(“%d is positive \n”, n);
	}
	else if (n = 0)
	{
	printf(“%d is zero \n”, n);
	}
	else if (n < 0)
	{
	printf(“%d is negative \n”, n);
	}
	return (0);
}
