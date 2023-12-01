#include <stdio.h>

// returns largest factor
int largest_factor(int num)
{
 int i;

    for(i = num/2;  i >= 1; i --)
    {
        if (num % i == 0)
            return i;
    }
}


void main()
{
   printf("Largest factor of 125 is %d", largest_factor(125));
}
