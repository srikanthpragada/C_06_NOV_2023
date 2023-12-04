#include <stdio.h>
#include <string.h>


void main()
{
 int a[5] = {1,2,3,4,5};

   *a = 100;
   printf("%d %d", *a, a[0]);

}


