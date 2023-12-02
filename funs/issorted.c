#include <stdio.h>

// Returns 1 if array is sorted otherwise 0
int issorted(int a[5])
{
 int i;

    for(i = 0; i < 4; i ++)
    {
         if(a[i] > a[i + 1])
             return 0;
    }

    return 1; // sorted
}


void main()
{
  int arr[] = {1,2,7,4,5};

     printf("Sorted = %d", issorted(arr));
}
