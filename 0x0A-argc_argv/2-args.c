#include <stdio.h>

/**
 *main - function
 *@argc: param1
 *@argv: param2
 *Return: 0 on success
*/
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
