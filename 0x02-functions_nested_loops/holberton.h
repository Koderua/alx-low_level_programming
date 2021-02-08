/**
*Prototype for _putchar
*/

#include <unistd.h>
int _putchar(char c)
{
return (write(1, &c, 1));
}
int main() 
{ 
      char c1='H'; 
      char c2='o';
      char c3='l';
      char c4='b';
      char c5='e';
      char c6='r';
      char c7='t';
      char c8='o';
      char c9='n';
      char c10='\n';
         _putchar(c1);
         _putchar(c2);
         _putchar(c3);
         _putchar(c4);
         _putchar(c5);
         _putchar(c6);
         _putchar(c7);
         _putchar(c8);
         _putchar(c9);
         _putchar(c10);
    return (0); 
}
