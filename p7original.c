#include <stdio.h>

typedef struct _triangle
{
  float base, altitude, area;
}Triangle;

Triangle input_triangle()
{
  Triangle k;
  printf("Enter base of triangle\n");
  scanf("%f",&k.base);
  printf("Enter height of triangle\n");
  scanf("%f",&k.altitude);
  return k;
}

void find_area(Triangle *t)
{
  t->area=(t->base)*(t->altitude)/2;
}

void output(Triangle t)
{
  printf("Area of triangle with base %.2f and altitude %.2f is %.2f",t.base,t.altitude,t.area);
}
int main ()
{
  Triangle a;
  a=input_triangle();
  find_area(&a);
  output(a);
  return 0;
}