#include <stdio.h>

int input()
{
  int n;
  printf("Enter a number\n");
  scanf("%d",&n);
  return n;
}

int gcd(int a,int b)
{
  int i,n,flag=0;
  if(a>=b)
  n=a;
  else
  n=b;
  for(i=n;i>0;i--)
  {
    if(a%i==0 && b%i==0)
    {
      flag=1;
      break;
    }
  }
  if(flag==1)
  return i;
  else 
  return 0;
}

void output(int a, int b, int gcd)
{
  printf("%d is hcf for %d and %d",gcd,a,b);
}
int main ()
{
  int a,b,g;
  a=input();
  b=input();
  g=gcd(a,b);
  output(a,b,g);
  return 0;
}