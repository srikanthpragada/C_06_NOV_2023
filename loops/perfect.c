// Print whether a number is perfect or not

#include <stdio.h>

void main()
{
 int n, i, total = 1;

    printf("Enter number :");
    scanf("%d",&n);

    for(i = 2; i <= n/2; i ++)
    {
      if(n % i == 0)
         total += i;
    }

    if(total == n)
       printf("Perfect");
    else
       printf("Not Perfect!");


}
