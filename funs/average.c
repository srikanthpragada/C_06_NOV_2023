#include <stdio.h>
#include <string.h>


// Function declaration
float avg(int, int);

void main()
{
   printf("%f", avg(10,15));
}

// Function definition
float avg(int a, int b)
{
   return (a + b) / 2.0;
}


