// Display result

#include <stdio.h>

void main()
{
 int m1,m2;

  printf("Enter 2 marks :");
  scanf("%d%d",&m1,&m2);

  if (m1 > 50 && m2 > 50)
     printf("Pass");
  else
    if(m1 > 80 || m2 > 80)
       printf("Pass");
    else
       printf("Fail");

}
