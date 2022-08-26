//sum of n natural numbers
#include <stdio.h>
#include <stdlib.h>
int fact(int n);
int main()
{
  printf("the factorial of number is %d:",fact(4));
}
int fact(int n)
{
  if(n==0)
  {
    return 1;
  }
  int factNm=fact(n-1);
  int fact=factNm*n;
  return fact;
}