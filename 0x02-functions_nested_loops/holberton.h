/**
*Prototype for 
*_putchar below
*/

#include <unistd.h>

int _putchar(char c)
{
return (write(1, &c, 1));
}
