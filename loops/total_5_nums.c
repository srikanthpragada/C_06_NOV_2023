// Print total of 5 numbers

#include <stdio.h>

void main()
{
 int n, i, total = 0;

    for(i = 1; i <= 5; i ++)
    {
      printf("Enter number :");
      scanf("%d",&n);
      total += n;
    }

    printf("Total = %d", total);
}
