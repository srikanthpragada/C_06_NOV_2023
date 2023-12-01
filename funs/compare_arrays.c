#include <stdio.h>

// returns true if both arrays are same
int equal(int a[5], int b[5])
{
 int i;

    for(i = 0;  i < 5; i ++)
    {
        if (a[i] != b[i])
            return 0;  // false
    }

    return 1; // true as elements are same
}


void main()
{
  int a1[] = {1,2,3,4,5};
  int a2[] = {1,2,4,4,5};


   printf("Result = %d", equal(a1, a2));
}
