// Display discount for the given price

#include <stdio.h>

void main()
{
 int price, discount;

  printf("Enter price :");
  scanf("%d",&price);

  if (price >  10000)
    discount = price * 20 / 100;
  else
    discount = price * 10 / 100;

  printf("Discount = %d", discount);
}
