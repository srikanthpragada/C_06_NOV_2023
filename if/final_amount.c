// Display final amount to be paid

#include <stdio.h>

void main()
{
 int price, qty, amount, discount, net_amount, final_discount, final_amount;

  printf("Enter price :");
  scanf("%d",&price);
  printf("Enter qty   :");
  scanf("%d",&qty);

  amount = qty * price;

  if (qty >= 3)
  {
    discount = amount * 40 / 100;
  }
  else
  {
    if (qty >= 2)
       discount = amount * 30 / 100;
    else
       discount = amount * 10 / 100;
  }

  net_amount = amount - discount;

  if(net_amount > 10000)
     final_discount = net_amount * 10 / 100;
  else
     final_discount = 0;

  final_amount = net_amount - final_discount;

  printf("Amount                %6d\n", amount);
  printf("- Discount            %6d\n", discount);
  printf("After Amount          %6d\n", net_amount);
  printf("- Additional discount %6d\n", final_discount);
  printf("Final Amount          %6d\n", final_amount);

}
