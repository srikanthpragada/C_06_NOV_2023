#include <stdio.h>

// recursively call function to print from n to 1
int reverse(int n)
{
  printf("%d ", n);
  if(n > 1)
     reverse(n - 1);
}


void main()
{
    reverse(5);
}
