#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *positive_or_negative - function
 *@n: parameter
 * Return: to main
 */
int positive_or_negative(int n)
{
if (n > 0)
printf("is positive\n");
else if (n == 0)
printf("is zero\n");
else
printf("is negative\n");
return(0);
}

/**
 *main - function
 *Return: 0
 */
int main(void)
{
int i;

i = 0;
positive_or_negative(i);

return (0);
}
