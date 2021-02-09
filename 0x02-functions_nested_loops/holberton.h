/**
*Prototype for 
*_putchar
*/

#include <unistd.h>

int _putchar(char c)

/**
*Prototype for 
*0-holberton.c
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
int main(void)
