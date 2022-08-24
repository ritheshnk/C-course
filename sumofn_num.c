//sum of n natural numbers
#include <stdio.h>
#include <stdlib.h>
int sum(int n);
int main()
{
  printf("the sum of numbers is %d:",sum(5));
}
int sum(int n)
{
  if(n==1)
  {
    return 1;
  }
  int sumNm=sum(n-1);
  int sumN=sumNm+n;
  return sumN;
}