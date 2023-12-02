#include <stdio.h>

// find position of a number in the array
int find(int a[5], int n)
{
 int i;

    for(i = 0; i < 5; i ++)
    {
      if(a[i] == n)
          return i;
    }

    return -1; // not found
}


void main()
{
  int arr[] = {1,2,7,4,5};

     printf("Find = %d", find(arr, 3));
}
