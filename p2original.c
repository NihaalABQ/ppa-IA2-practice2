#include <stdio.h>

int input_side()
{
  int n;
  printf("Enter the side of the triangle\n");
  scanf("%d",&n);
  return n;
}

int check_scalene(int a, int b, int c)
{
  int n=0;
  if(a==b || a==c || b==c)
  n++;
  return n;
}

void output(int a, int b, int c, int isscalene)
{
  if(isscalene==0)
  printf("The triangle with sides %d, %d and %d is scalene\n",a,b,c);
  else
  printf("The triangle with sides %d, %d and %d is not scalene\n",a,b,c); 
}

int main ()
{
  int a,b,c,s;
  a=input_side();
  b=input_side();
  c=input_side();
  s=check_scalene(a,b,c);
  output(a,b,c,s);
  return 0;
}