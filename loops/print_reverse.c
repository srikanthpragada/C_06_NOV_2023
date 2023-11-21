// Print a number in reverse
#include <stdio.h>

void main()
{
 int n, r;

    printf("Enter number :");
    scanf("%d",&n);

    while(n > 0)
    {
       r = n % 10;  // Take rightmost digit
       printf("%d", r);
       n = n / 10;  // Remove rightmost digit
    }
}
