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

}

void output(int n, Triangle t[n],Triangle smallest)
{ 
  int i;
  printf("Given triangles\n");
  
}
int main ()
{
  int n;
  n=input_n();
  Triangle s;
  Triangle a[n];
  input_triangles(n,a);
  find_area_n(n,a);

  return 0;
}