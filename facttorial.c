#include<stdio.h>
#include<stdlib.h>
int main()
{
  int fact=1,i,n; //we intialize fact as one similar to sum but min value of fact is 1 i.e (1*1)
  printf("enter the factorial of ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    {
      fact=fact*i;
    }
  printf("factorial of the number is %d",fact);
}
