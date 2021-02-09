/**
*Prototype for 
*_putchar
*/

#include <unistd.h>

int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
*Prototype for 
*0-holberton.c
*/

#include <holberton.h>

int main(void)
