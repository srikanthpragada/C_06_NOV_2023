// Print sum of number given until 0

#include <stdio.h>

void main()
{
 int n, sum = 0;

    while(1)
    {
       printf("Enter number [0 to stop]:");
       scanf("%d",&n);

       if(n < 0)
         continue;

       if(n == 0)
          break;

       sum += n;
    }

    printf("Sum = %d", sum);
}
