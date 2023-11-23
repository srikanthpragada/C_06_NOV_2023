// Matrix with 1 in diag and anti=diag and 0 in the rest

#include <stdio.h>

void main()
{
 int i,j;


    for(i = 1; i <= 5; i ++)
    {
        for(j = 1; j <= 5; j ++)
        {
            if(i == j || i + j == 6)
               printf(" 1 ");
            else
               printf(" 0 ");
        }
        printf("\n");
    }
}
