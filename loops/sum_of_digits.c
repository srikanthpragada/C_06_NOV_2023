// Print sum of digits

#include <stdio.h>

void main()
{
 int n, r, sum = 0;

    printf("Enter number :");
    scanf("%d",&n);

    while(n > 0)
    {
       r = n % 10;  // Take rightmost digit
       sum += r;
       n = n / 10;  // Remove rightmost digit
    }

    printf("Sum of digits = %d", sum);
}
