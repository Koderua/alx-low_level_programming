#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - generate random number n
 * and state whether negative, zero, positive.
 * Return: Always 0 (Success)
 */
int main(void)
{
  int n;
  
  srand(time(0));
  n = rand() - RAND_MAX / 2;
  if (n > 0)
    {
      %d is positive \, n);
}
 else if (n = 0)
   {
     %d is zero \, n);
}
 else if (n < 0)
   {
     %d is negative \, n);
}
return (0);
}
