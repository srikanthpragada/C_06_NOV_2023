// Print largest of 5 numbers

#include <stdio.h>

void main()
{
 int n, i, largest = 0;

    for(i = 1; i <= 5; i ++)
    {
      printf("Enter number :");
      scanf("%d",&n);

      if(n > largest)
        largest = n;
    }

    printf("Largest = %d", largest);
}
