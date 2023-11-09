// Calculate cube

#include <stdio.h>

void main()
{
 int num,cube;

  // input
  printf("Enter a number :");
  scanf("%d",&num);

  // process
  cube=num * num * num;

  // output
  printf("The cube of %d is %d",num,cube);
}
