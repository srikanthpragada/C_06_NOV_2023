#include <stdio.h>

// print digits in reverse using recursion
int reverse(int n)
{
  printf("%d ", n % 10); // take rightmost digit
  if(n > 9)
     reverse(n / 10);   // remove rightmost digit
}


void main()
{
    reverse(534);
}
