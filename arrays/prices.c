// Store prices

#include <stdio.h>

void main()
{
 int i, prices[5];


    for(i = 0; i < 5; i ++)
    {
        printf("Enter price : ");
        scanf("%d", &prices[i]);
    }

    for(i = 4; i >= 0; i --)
        printf("%5d", prices[i]);

}
