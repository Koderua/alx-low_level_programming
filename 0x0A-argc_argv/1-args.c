#include <stdio.h>

/**
 *main - function
 *@argc: parameter 1
 *@argv: parameter2
 *Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
int i, sum = 0;
for (i = 0; i < argc; i++)
{
sum += i;
}
printf("%d\n", argc);
return (0);
}
