#include <stdio.h>

int sum(int a[5])
{
 int i, total = 0;

    for(i = 0; i < 5; i ++)
    {
        total += a[i];
    }

    return total;
}


void main()
{
  int nums[] = {1, 4, 5, 6, 7};
  int total;

    total = sum(nums);
    printf("Total = %d", total);

}
