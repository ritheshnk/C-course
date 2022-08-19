#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n,i;
  printf("enter a number:");
  scanf("%d",&n);
  for(i=10;i>=1;i--)
    {
      printf("%d*%d=%d\n",n,i,n*i);
    }
  }