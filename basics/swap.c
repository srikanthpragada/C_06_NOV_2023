// Swap/interchange two numbers

#include <stdio.h>

void main()
{
 int n1,n2, temp;

  // input
  printf("Enter two numbers :");
  scanf("%d%d",&n1,&n2);

  temp = n1;
  n1 = n2;
  n2 = temp;

  printf("After Swap : %d, %d", n1, n2);
}
