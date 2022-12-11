#include <stdio.h>
#define PI 3.14f /* Define the value of pie */
int  main() 
{
  /* Variable Declaration. */
  float radius, perimeter, area;
  scanf("%f", & radius);
  area = PI * radius * radius;
  printf("%0.2f
", area);
  perimeter = 2 * PI * radius;
  printf("%0.2f
", perimeter);
}