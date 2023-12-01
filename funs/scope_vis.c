#include <stdio.h>

int g = 1;  // Global variable

int f()
{
  int n = 10; // local variable
  int g = 1000;

   printf("%d %d", n, g);
}


void main()
{
  int a = 100;

    printf("%d %d", a, g);

}
