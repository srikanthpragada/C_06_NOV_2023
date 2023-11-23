// Fill array with random numbers

#include <stdio.h>

void main()
{
 int i, a[10];

    srand(time(0));

    for(i = 0; i < 10; i ++)
    {
        a[i] = rand() % 100;
        printf("%d\n", a[i]);
    }
}
