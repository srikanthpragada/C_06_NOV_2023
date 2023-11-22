// Print largest digit of a number
#include <stdio.h>

void main()
{
 int n, d, largest = 0;

    printf("Enter number :");
    scanf("%d",&n);

    while(n > 0)
    {
       d = n % 10;  // Take rightmost digit
       if(d > largest)
         largest = d;
       n = n / 10;  // Remove rightmost digit
    }

    printf("Largest digit = %d", largest);
}
