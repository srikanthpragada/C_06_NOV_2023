// Calculate selling price with 10% discount
#include <stdio.h>

void main()
{
 int price, discount, selling_price;

  // input
  printf("Enter price :");
  scanf("%d",&price);

  discount = price * 10 / 100;
  selling_price = price - discount;

  printf("Price         : %8d\n", price);
  printf("- Discount    : %8d\n", discount);
  printf("Selling price : %8d", selling_price);
}
