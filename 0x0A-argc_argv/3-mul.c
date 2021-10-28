#include <stdio.h>
#include <stdlib.h>
/**
 *main - FUNCTION
 *@argc: PARAMETER1
 *@argv: PARAMETER 2
 *Return: 0 ON SUCCESS; 1 ON FAILURE
 */
int main(int argc, char *argv[])
{
int i = 1, mul = 1;
if (argc > 2)
{
mul = atoi(argv[i]) * atoi(argv[i + 1]);
printf("%d\n", mul);
return (0);
}
else
{
printf("Error\n");
return (1);
}
}
