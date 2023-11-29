#include <stdio.h>

int max(int a, int b)
{
   return (a > b ? a : b);
}


void main()
{
  int x = 10, y = 20, big;

    big = max(x, y);
    printf("Biggest = %d", big);

}
