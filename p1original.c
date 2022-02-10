#include <stdio.h>

void input(float *base, float *height)
{
  printf("Enter base and height of triangle\n");
  scanf("%f%f",base,height);
}

void find_area(float base, float height, float *area)
{
  *area=(base*height)/2;
}

void output(float base, float height, float area)
{
  printf("Area of the triangle with base %.2f and height %.2f is %.2f\n",base,height,area);
}

int main ()
{
  float a,h,b;
  input(&b,&h);
  find_area(b,h,&a);
  output(b,h,a);
  return 0;
}
