//celcius to fibanacci
#include <stdio.h>
#include <stdlib.h>
int fib(int n);
int main()
{
  fib(4);
  return 0;
}
int fib(int n)
{
  if(n==0)
  {
    return 0;
  }
  if(n==1)
  {
    return 1;
  }
  int fibN=fib(n-1);
  int fibNm=fib(n-2);
  int fib=fibN-fibNm;
  printf("the fibanacci of %d is %d\n",n,fib);
  return  fib;
}