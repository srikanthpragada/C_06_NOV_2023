// Display grade based on marks

#include <stdio.h>

void main()
{
 int marks;

  printf("Enter marks:");
  scanf("%d",&marks);

  if (marks > 80)
     printf("A");
  else
     if(marks > 70)
        printf("B");
     else
        printf("C");
}
