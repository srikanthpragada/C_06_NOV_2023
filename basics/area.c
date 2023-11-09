// Calculate area of a circle

#include <stdio.h>

void main()
{
 float radius, area;

  // input
  printf("Enter a radius :");
  scanf("%f",&radius);

  // process
  area = 3.14 * radius * radius;

  // output
  printf("Area of a circle with radius %f is %f", radius, area);
}
