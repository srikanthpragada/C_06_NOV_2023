// Fill array of 5 X 5 and search for a value
#include <stdio.h>

void main()
{
 int i, j, sn, found = 0, a[5][5];

    srand(time(0));
    for(i = 0; i < 5; i ++)
    {
      for(j = 0; j < 5; j ++)
      {
        a[i][j] = rand() % 100;
        printf("%5d", a[i][j]);
      }
      printf("\n");
    }

    printf("Enter search number :");
    scanf("%d",&sn);

    for(i = 0; i < 5 && found == 0; i ++)
    {
      for(j = 0; j < 5; j ++)
      {
         if(a[i][j] == sn)
         {
             printf("Found at %d,%d\n", i, j);
             found = 1;
             break;
         }
      }
    }

    if(!found)
        printf("Sorry! Not found!");
}
