// Calculate net salary by taking basic salary

#include <stdio.h>

void main()
{
 int salary, hra, da, net_salary;

  // input
  printf("Enter Salary :");
  scanf("%d",&salary);

  hra = salary * 30 / 100;
  da = salary * 15 / 100;
  net_salary = salary + hra + da;

  printf("Net Salary : %d", net_salary);
}
