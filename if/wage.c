// Display wage by taking weekday and hours worked

#include <stdio.h>

void main()
{
 int weekday, hours, rate, wage;

  printf("Enter weekday [1-7]:");
  scanf("%d",&weekday);

  printf("Enter hours :");
  scanf("%d",&hours);

  switch(weekday)
  {
      case 1 :
      case 2 :
      case 3 : rate = 100; break;
      case 4 :
      case 5 : rate = 125; break;
      case 6 : rate = 150; break;
      default: rate = 200;
  }

  wage = rate * hours;

  printf("Wage = %d", wage);

}
