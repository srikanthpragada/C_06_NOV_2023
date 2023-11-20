// Print table for the given number

#include <stdio.h>

void main()
{
 int n, i;

    printf("Enter number :");
    scanf("%d",&n);

    for(i = 1; i <= 10; i ++)
    {
      printf("%3d * %2d = %6d\n", n, i, n*i);
    }
}
