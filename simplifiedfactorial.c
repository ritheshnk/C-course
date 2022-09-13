#include<stdio.h>
#include<stdlib.h>
int fact(int n);
int main()
{
  int n;
  printf("enter a num:");
  scanf("%d",&n);
  fact(n);
  printf("%d",fact(n));
}
int fact(int n)
{
 if(n==1)
 {
   return 1;
 }else
 {
   return n*fact(n-1);
 }
}