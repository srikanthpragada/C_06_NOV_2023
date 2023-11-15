// Display whether 3 numbers are equal

#include <stdio.h>

void main()
{
 int a, b, c;

  printf("Enter two numbers :");
  scanf("%d%d%d",&a, &b, &c);

  if (a == b && a == c)
     printf("Equal");
  else
     printf("Not Equal");
}
