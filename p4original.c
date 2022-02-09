#include <stdio.h>

int input_array_size()
{
  int n;
  printf("Enter size of array\n");
  scanf("%d",&n);
  return n;
}

void input_array(int n,int a[n])
{
  int i;
  printf("Input array elements\n");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
}

int sum_composite_numbers(int n,int a[n])
{
  int i,c,j,sum=0;
  for(i=0;i<n;i++)
  {
    c=0;
    for(j=1;j<a[i];j++)
    {
    if(a[i]%j==0)
    c++;
    }
    if(c>2)
    sum=sum+a[i];
  }
  return sum;
}
void out_put(int sum)
{
  printf("%d",sum);
}

int main ()
{
  int n,s;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  s=sum_composite_numbers(n,a);
  out_put(s);
  return 0;
}