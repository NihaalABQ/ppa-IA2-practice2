#include <stdio.h>

typedef struct _triangle
{
  float base, altitude, area;
}Triangle;

int input_n()
{
  int n;
  printf("Enter size of array\n");
  scanf("%d",&n);
  return n;
}

Triangle input_triangle()
{
  Triangle a;
  printf("Base:\n");
  scanf("%f",&a.base);
  printf("Height:\n");
  scanf("%f",&a.altitude);
  return a;
}

void input_triangles(int n, Triangle t[n])
{
  int i;
  for(i=0;i<n;i++)
  t[i]=input_triangle();
}

void find_area(Triangle *t)
{
  t->area=t->base*(t->altitude)/2;
}

void find_area_n(int n,Triangle t[n])
{
  int i;
  for(i=0;i<n;i++)
  {
    find_area(&t[i]);
    
  }
}

Triangle find_smallest_triangle(int n, Triangle t[n])
{
  int i,a;
  Triangle s;
  s=t[0];
  for(i=1;i<n;i++)
  {
    if(t[i].area < s.area)
    s=t[i];
  }

  return s;
}

void output(int n, Triangle t[n],Triangle smallest)
{ 
  int i;
  printf("Given triangles\n");
  for(i=0;i<n;i++)
  printf("%d -> %f    %f = %f\n",i,t[i].base,t[i].altitude,t[i].area);
  printf("Smallest triangle is with base %f and height %f and area %f\n",smallest.base,smallest.altitude,smallest.area);
}
int main ()
{
  int n;
  n=input_n();
  Triangle s;
  Triangle a[n];
  input_triangles(n,a);
  find_area_n(n,a);
  s=find_smallest_triangle(n,a);
  output(n,a,s);
  return 0;
}