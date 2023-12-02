#include <stdio.h>


void zero(int * a, int * b)
{
   *a = 0;
   *b = 0;
}


void main()
{
  int x = 10, y = 20;

     zero(&x, &y);
     printf("x = %d, y = %d", x, y);
}
