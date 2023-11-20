// Print factors for a given number

#include <stdio.h>

void main()
{
 int n, i, total = 0;

    printf("Enter number :");
    scanf("%d",&n);

    for(i = 2; i <= n/2; i ++)
    {
      if(n % i == 0)
        printf("%d ", i);
    }

}
