// Fill array with random numbers and swap first 5 with last 5

#include <stdio.h>

void main()
{
 int i, j, temp, a[10];

    srand(time(0));

    for(i = 0; i < 10; i ++)
    {
        a[i] = rand() % 100;
        printf("%d ", a[i]);
    }

    // swap
    for(i = 0, j = 9; i < j; i ++, j --)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }

    printf("\nAfter swap\n");

    for(i = 0; i < 10; i ++)
    {
        printf("%d ", a[i]);
    }

}
