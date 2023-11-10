// Calculate selling price with 10% discount
#include <stdio.h>

void main()
{
 int price, discount, selling_price;

  // input
  printf("Enter price :");
  scanf("%d",&price);

  discount = 10.0 / 100 * price;
  selling_price = price - discount;

  printf("Selling price : %d", selling_price);
}
