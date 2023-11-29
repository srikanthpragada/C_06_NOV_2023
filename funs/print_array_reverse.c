#include <stdio.h>

void print_reverse(int a[10])
{
 int i;

     for(i = 9; i >= 0; i --)
        printf("%5d", a[i]);
}


void main()
{
  int arr[] = {1,2,4,5,5,7,8,9,5,4};
  int arr2[] = {10,20,4,5,5,7,8,90,55,44};

       print_reverse(arr);
       printf("\n");
       print_reverse(arr2);
}
