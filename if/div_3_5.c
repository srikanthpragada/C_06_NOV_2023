// Display whether number is divisible by 3 and 5

#include <stdio.h>

void main()
{
 int num;

  printf("Enter Number :");
  scanf("%d",&num);

  if(num % 3 == 0)
    if(num % 5 == 0)
       printf("Both");
    else
       printf("3");
  else
    if(num % 5 == 0)
       printf("5");
    else
       printf("None");

}
